#' nimble
#'
#' @description
#' A system for writing hierarchical statistical models largely compatible with
#' BUGS and JAGS, writing nimbleFunctions to operate models and do basic
#' R-style math, and compiling both models and nimbleFunctions via
#' custom-generated C++. NIMBLE includes default methods for MCMC, Monte
#' Carlo Expectation Maximization, and some other tools. The nimbleFunction
#' system makes it easy to do things like implement new MCMC samplers from R,
#' customize the assignment of samplers to different parts of a model from R,
#' and compile the new samplers automatically via C++ alongside the samplers
#' NIMBLE provides. NIMBLE extends the BUGS/JAGS language by making
#' it extensible: New distributions and functions can be added, including as
#' calls to external compiled code. Although most people think of MCMC as the
#' main goal of the BUGS/JAGS language for writing models, one can use
#' NIMBLE for writing arbitrary other kinds of model-generic algorithms
#' as well. A full User Manual is available at
#' \code{\link{https://r-nimble.org}}.
#' @name nimble
#' @docType package
NULL
