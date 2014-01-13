#Function that computes the maximum likelihood estimators of the two parameters of Weibull 
MLEst<-function(x){
  if(sum(x<0)){stop(paste("Data x is not a positive sample"))}
  n=length(x)
  #Apply the log. transformation => If: X -> Weibull, then -log(X) -> EV
  lv = -log(x)
  y = sort(lv)
  #Compute the MLEs of the EV distribution
  f1 <- function(toto,vect){
    if(toto!=0){
      f1= sum(vect)/length(vect)
      f1 = f1 - sum(vect*exp(-vect*toto))/sum(exp(-vect*toto)) - 1/toto
    }else{ f1=100}
    f1=abs(f1)
  }  
  theta <- optimize(f1,c(0.0001,50),maximum=FALSE,vect=y,tol=1/10^5)
  t <- theta$minimum
  aux <- sum(exp(-y*t)/length(x))
  ksi <- -(1/t)*log(aux)
  #Compute the pseudo-observation y_1, .., y_n
  y <- -(y-ksi)*t
  return(MLEst<-list(eta=exp(-ksi),beta=t,y=y))
}
