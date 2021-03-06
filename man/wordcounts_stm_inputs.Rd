% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/foreign.R
\name{wordcounts_stm_inputs}
\alias{wordcounts_stm_inputs}
\title{Convert word counts data frame to Structural Topic Model inputs}
\usage{
wordcounts_stm_inputs(counts, meta = NULL)
}
\arguments{
\item{counts}{data frame as returned from \code{\link{read_wordcounts}}}

\item{meta}{optional metadata data frame (with an \code{id} column to be
matched against \code{counts$id}).}
}
\value{
a list with elements \code{documents}, \code{vocab}, \code{data} (if
  \code{meta} has been supplied). These elements are suitable to be passed as
  the parameters of those names to \code{\link[stm]{stm}}.
}
\description{
This is a helper function for transforming word-counts-type data into the
form expected by \code{\link[stm]{stm}} from the \pkg{stm} package. Given a
data frame from \code{\link{read_wordcounts}} (and optionally a frame of
metadata), it yields a list whose components can be passed as arguments to
\code{stm}. See below for example usage.
}
\details{
Some memory-management might be a good idea here. Once you have the list of
inputs from this function, you no longer need the \code{counts} object.
}
\examples{
\dontrun{
library(stm)
counts <- read_wordcounts(Sys.glob("wordcounts/*.CSV"))
meta <- read_dfr_metadata("citations.tsv")
corpus <- wordcounts_stm_inputs(counts, meta)
m <- stm(documents=corpus$documents,
    vocab=corpus$vocab,
    data=corpus$data,
    K=25,
    prevalence= ~ journaltitle)
}

}
\seealso{
\code{\link{foreign_model}} for using this package's
  model-exploration utilities in conjunction with an STM.
}

