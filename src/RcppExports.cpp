// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// GoFBH
double GoFBH(NumericVector x, double a);
RcppExport SEXP _EWGoF_GoFBH(SEXP xSEXP, SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(GoFBH(x, a));
    return rcpp_result_gen;
END_RCPP
}
// GoFBHC
double GoFBHC(NumericVector x, double a);
RcppExport SEXP _EWGoF_GoFBHC(SEXP xSEXP, SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(GoFBHC(x, a));
    return rcpp_result_gen;
END_RCPP
}
// GoFBHK
double GoFBHK(NumericVector x, double a);
RcppExport SEXP _EWGoF_GoFBHK(SEXP xSEXP, SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(GoFBHK(x, a));
    return rcpp_result_gen;
END_RCPP
}
// GoFHe
double GoFHe(NumericVector x, double a, NumericVector a1);
RcppExport SEXP _EWGoF_GoFHe(SEXP xSEXP, SEXP aSEXP, SEXP a1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type a1(a1SEXP);
    rcpp_result_gen = Rcpp::wrap(GoFHe(x, a, a1));
    return rcpp_result_gen;
END_RCPP
}
// GoFHM
NumericVector GoFHM(NumericVector x, double a);
RcppExport SEXP _EWGoF_GoFHM(SEXP xSEXP, SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(GoFHM(x, a));
    return rcpp_result_gen;
END_RCPP
}
// GoFKl
NumericVector GoFKl(NumericVector x, double a);
RcppExport SEXP _EWGoF_GoFKl(SEXP xSEXP, SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(GoFKl(x, a));
    return rcpp_result_gen;
END_RCPP
}
// GoFMI
NumericVector GoFMI(NumericVector x, double a);
RcppExport SEXP _EWGoF_GoFMI(SEXP xSEXP, SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(GoFMI(x, a));
    return rcpp_result_gen;
END_RCPP
}
// GoFNS
NumericVector GoFNS(double t, double n, double m);
RcppExport SEXP _EWGoF_GoFNS(SEXP tSEXP, SEXP nSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(GoFNS(t, n, m));
    return rcpp_result_gen;
END_RCPP
}
// GoFsim
NumericVector GoFsim(int nsim, int n, Function fun);
RcppExport SEXP _EWGoF_GoFsim(SEXP nsimSEXP, SEXP nSEXP, SEXP funSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nsim(nsimSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< Function >::type fun(funSEXP);
    rcpp_result_gen = Rcpp::wrap(GoFsim(nsim, n, fun));
    return rcpp_result_gen;
END_RCPP
}
// GoFsim2d
NumericMatrix GoFsim2d(int nsim, int n, Function fun1, Function fun2);
RcppExport SEXP _EWGoF_GoFsim2d(SEXP nsimSEXP, SEXP nSEXP, SEXP fun1SEXP, SEXP fun2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nsim(nsimSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< Function >::type fun1(fun1SEXP);
    Rcpp::traits::input_parameter< Function >::type fun2(fun2SEXP);
    rcpp_result_gen = Rcpp::wrap(GoFsim2d(nsim, n, fun1, fun2));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_EWGoF_GoFBH", (DL_FUNC) &_EWGoF_GoFBH, 2},
    {"_EWGoF_GoFBHC", (DL_FUNC) &_EWGoF_GoFBHC, 2},
    {"_EWGoF_GoFBHK", (DL_FUNC) &_EWGoF_GoFBHK, 2},
    {"_EWGoF_GoFHe", (DL_FUNC) &_EWGoF_GoFHe, 3},
    {"_EWGoF_GoFHM", (DL_FUNC) &_EWGoF_GoFHM, 2},
    {"_EWGoF_GoFKl", (DL_FUNC) &_EWGoF_GoFKl, 2},
    {"_EWGoF_GoFMI", (DL_FUNC) &_EWGoF_GoFMI, 2},
    {"_EWGoF_GoFNS", (DL_FUNC) &_EWGoF_GoFNS, 3},
    {"_EWGoF_GoFsim", (DL_FUNC) &_EWGoF_GoFsim, 3},
    {"_EWGoF_GoFsim2d", (DL_FUNC) &_EWGoF_GoFsim2d, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_EWGoF(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
