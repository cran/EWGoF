// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// GoFNS
NumericVector GoFNS(double t, double n, double m);
RcppExport SEXP EWGoF_GoFNS(SEXP tSEXP, SEXP nSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    double t = Rcpp::as<double >(tSEXP);
    double n = Rcpp::as<double >(nSEXP);
    double m = Rcpp::as<double >(mSEXP);
    NumericVector __result = GoFNS(t, n, m);
    return Rcpp::wrap(__result);
END_RCPP
}
// GoFsim
NumericVector GoFsim(int nsim, int n, Function fun);
RcppExport SEXP EWGoF_GoFsim(SEXP nsimSEXP, SEXP nSEXP, SEXP funSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    int nsim = Rcpp::as<int >(nsimSEXP);
    int n = Rcpp::as<int >(nSEXP);
    Function fun = Rcpp::as<Function >(funSEXP);
    NumericVector __result = GoFsim(nsim, n, fun);
    return Rcpp::wrap(__result);
END_RCPP
}
// GoFsim2d
NumericMatrix GoFsim2d(int nsim, int n, Function fun1, Function fun2);
RcppExport SEXP EWGoF_GoFsim2d(SEXP nsimSEXP, SEXP nSEXP, SEXP fun1SEXP, SEXP fun2SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    int nsim = Rcpp::as<int >(nsimSEXP);
    int n = Rcpp::as<int >(nSEXP);
    Function fun1 = Rcpp::as<Function >(fun1SEXP);
    Function fun2 = Rcpp::as<Function >(fun2SEXP);
    NumericMatrix __result = GoFsim2d(nsim, n, fun1, fun2);
    return Rcpp::wrap(__result);
END_RCPP
}

// GoFBH
double GoFBH(NumericVector x, double a);
RcppExport SEXP EWGoF_GoFBH(SEXP xSEXP, SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    double a = Rcpp::as<double >(aSEXP);
    double __result = GoFBH(x, a);
    return Rcpp::wrap(__result);
END_RCPP
}
// GoFBHC
double GoFBHC(NumericVector x, double a);
RcppExport SEXP EWGoF_GoFBHC(SEXP xSEXP, SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    double a = Rcpp::as<double >(aSEXP);
    double __result = GoFBHC(x, a);
    return Rcpp::wrap(__result);
END_RCPP
}
// GoFBHK
double GoFBHK(NumericVector x, double a);
RcppExport SEXP EWGoF_GoFBHK(SEXP xSEXP, SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    double a = Rcpp::as<double >(aSEXP);
    double __result = GoFBHK(x, a);
    return Rcpp::wrap(__result);
END_RCPP
}
// GoFHe
double GoFHe(NumericVector x, double a, NumericVector a1);
RcppExport SEXP EWGoF_GoFHe(SEXP xSEXP, SEXP aSEXP, SEXP a1SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    double a = Rcpp::as<double >(aSEXP);
    NumericVector a1 = Rcpp::as<NumericVector >(a1SEXP);
    double __result = GoFHe(x, a, a1);
    return Rcpp::wrap(__result);
END_RCPP
}
// GoFHM
NumericVector GoFHM(NumericVector x, double a);
RcppExport SEXP EWGoF_GoFHM(SEXP xSEXP, SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    double a = Rcpp::as<double >(aSEXP);
    NumericVector __result = GoFHM(x, a);
    return Rcpp::wrap(__result);
END_RCPP
}
// GoFKl
NumericVector GoFKl(NumericVector x, double a);
RcppExport SEXP EWGoF_GoFKl(SEXP xSEXP, SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    double a = Rcpp::as<double >(aSEXP);
    NumericVector __result = GoFKl(x, a);
    return Rcpp::wrap(__result);
END_RCPP
}
// GoFMI
NumericVector GoFMI(NumericVector x, double a);
RcppExport SEXP EWGoF_GoFMI(SEXP xSEXP, SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    double a = Rcpp::as<double >(aSEXP);
    NumericVector __result = GoFMI(x, a);
    return Rcpp::wrap(__result);
END_RCPP
}

