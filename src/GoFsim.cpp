#include<Rcpp.h>
using namespace Rcpp;
// [[Rcpp::export]]
NumericVector GoFsim(int nsim, int n, Function fun) { 
  NumericVector res(nsim);
  NumericMatrix V(n,nsim);
  for(int i=0;i<nsim;i++){
    V(_,i)=-log(runif(n));  
    res[i]=as<double>(fun(V(_,i)));
  }
  NumericVector temp=wrap(res);
  std::sort(temp.begin(),temp.end());
  return temp;
  }
