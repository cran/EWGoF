#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP EWGoF_GoFBH(SEXP, SEXP);
extern SEXP EWGoF_GoFBHC(SEXP, SEXP);
extern SEXP EWGoF_GoFBHK(SEXP, SEXP);
extern SEXP EWGoF_GoFHe(SEXP, SEXP, SEXP);
extern SEXP EWGoF_GoFHM(SEXP, SEXP);
extern SEXP EWGoF_GoFKl(SEXP, SEXP);
extern SEXP EWGoF_GoFMI(SEXP, SEXP);
extern SEXP EWGoF_GoFNS(SEXP, SEXP, SEXP);
extern SEXP EWGoF_GoFsim(SEXP, SEXP, SEXP);
extern SEXP EWGoF_GoFsim2d(SEXP, SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
  {"EWGoF_GoFBH",    (DL_FUNC) &EWGoF_GoFBH,    2},
  {"EWGoF_GoFBHC",   (DL_FUNC) &EWGoF_GoFBHC,   2},
  {"EWGoF_GoFBHK",   (DL_FUNC) &EWGoF_GoFBHK,   2},
  {"EWGoF_GoFHe",    (DL_FUNC) &EWGoF_GoFHe,    3},
  {"EWGoF_GoFHM",    (DL_FUNC) &EWGoF_GoFHM,    2},
  {"EWGoF_GoFKl",    (DL_FUNC) &EWGoF_GoFKl,    2},
  {"EWGoF_GoFMI",    (DL_FUNC) &EWGoF_GoFMI,    2},
  {"EWGoF_GoFNS",    (DL_FUNC) &EWGoF_GoFNS,    3},
  {"EWGoF_GoFsim",   (DL_FUNC) &EWGoF_GoFsim,   3},
  {"EWGoF_GoFsim2d", (DL_FUNC) &EWGoF_GoFsim2d, 4},
  {NULL, NULL, 0}
};

void R_init_EWGoF(DllInfo *dll)
{
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}
