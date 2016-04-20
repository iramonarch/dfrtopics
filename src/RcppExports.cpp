// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// naive_cluster
IntegerVector naive_cluster(NumericVector D, int M, int K, double threshold);
RcppExport SEXP dfrtopics_naive_cluster(SEXP DSEXP, SEXP MSEXP, SEXP KSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type D(DSEXP);
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    __result = Rcpp::wrap(naive_cluster(D, M, K, threshold));
    return __result;
END_RCPP
}
// calc_row_entropies
NumericVector calc_row_entropies(const Eigen::MappedSparseMatrix<double> m);
RcppExport SEXP dfrtopics_calc_row_entropies(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Eigen::MappedSparseMatrix<double> >::type m(mSEXP);
    __result = Rcpp::wrap(calc_row_entropies(m));
    return __result;
END_RCPP
}
// entropy
double entropy(NumericVector x);
RcppExport SEXP dfrtopics_entropy(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    __result = Rcpp::wrap(entropy(x));
    return __result;
END_RCPP
}
// JS_divergence
double JS_divergence(NumericVector P, NumericVector Q);
RcppExport SEXP dfrtopics_JS_divergence(SEXP PSEXP, SEXP QSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type P(PSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Q(QSEXP);
    __result = Rcpp::wrap(JS_divergence(P, Q));
    return __result;
END_RCPP
}
// draw_multinom
List draw_multinom(const IntegerVector nn, const NumericVector probs);
RcppExport SEXP dfrtopics_draw_multinom(SEXP nnSEXP, SEXP probsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const IntegerVector >::type nn(nnSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type probs(probsSEXP);
    __result = Rcpp::wrap(draw_multinom(nn, probs));
    return __result;
END_RCPP
}
