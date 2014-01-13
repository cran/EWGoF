#include<Rcpp.h>
using namespace Rcpp;
// [[Rcpp::export]]
NumericMatrix GoFsim2d(int nsim, int n, Function fun1, Function fun2) { 
  NumericMatrix res(2,nsim);
  NumericMatrix V(n,nsim);
  for(int i=0;i<nsim;i++){
    V(_,i)=-log(runif(n));  
    res(1,i)=as<double>(fun1(V(_,i)));
    res(2,i)=as<double>(fun2(V(_,i)));
  }
  NumericMatrix temp=wrap(res);
  std::sort(temp.begin(),temp.end());
  return temp;
  }
