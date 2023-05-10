// DO NOT EDIT BY HAND.
// This file was automatically generated by nimble/packages/generateStaticCode.R

#ifndef __NIMBLE_PREDEFINEDNIMBLELISTS_H
#define __NIMBLE_PREDEFINEDNIMBLELISTS_H

#include <nimble/smartPtrs.h>
#include <Rinternals.h>
#include <nimble/NamedObjects.h>
#include <nimble/NimArr.h>
#include <nimble/accessorClasses.h>
#include <nimble/nimDists.h>
#include <nimble/smartPtrs.h>
#include <nimble/nodeFun.h>
#undef eval

extern "C" SEXP new_EIGEN_EIGENCLASS();

extern "C" SEXP EIGEN_EIGENCLASS_castPtrPtrToNamedObjectsPtrSEXP(SEXP input);

extern "C" SEXP EIGEN_EIGENCLASS_castDerivedPtrPtrToPairOfPtrsSEXP(SEXP input);

extern "C" SEXP new_EIGEN_SVDCLASS();

extern "C" SEXP EIGEN_SVDCLASS_castPtrPtrToNamedObjectsPtrSEXP(SEXP input);

extern "C" SEXP EIGEN_SVDCLASS_castDerivedPtrPtrToPairOfPtrsSEXP(SEXP input);

class OptimResultNimbleList : public NamedObjects, public pointedToBase {
 public:
  NimArr<1, double> par;
  double value;
  NimArr<1, int> counts;
  int convergence;
  std::string message;
  NimArr<2, double> hessian;
  SEXP RObjectPointer;
  bool RCopiedFlag;
  void copyFromSEXP(SEXP S_nimList_);
  SEXP copyToSEXP();
  void createNewSEXP();
  void resetFlags();
  void copyFromRobject(SEXP Robject);
  OptimResultNimbleList();
};

extern "C" SEXP new_OptimResultNimbleList();

extern "C" SEXP OptimResultNimbleList_castPtrPtrToNamedObjectsPtrSEXP(
    SEXP input);

extern "C" SEXP OptimResultNimbleList_castDerivedPtrPtrToPairOfPtrsSEXP(
    SEXP input);

class OptimControlNimbleList : public NamedObjects, public pointedToBase {
 public:
  int trace;
  double fnscale;
  NimArr<1, double> parscale;
  NimArr<1, double> ndeps;
  int maxit;
  double abstol;
  double reltol;
  double alpha;
  double beta;
  double gamma;
  int REPORT;
  int type;
  int lmm;
  double factr;
  double pgtol;
  double temp;
  int tmax;
  SEXP RObjectPointer;
  bool RCopiedFlag;
  void copyFromSEXP(SEXP S_nimList_);
  SEXP copyToSEXP();
  void createNewSEXP();
  void resetFlags();
  void copyFromRobject(SEXP Robject);
  OptimControlNimbleList();
};

extern "C" SEXP new_OptimControlNimbleList();

extern "C" SEXP OptimControlNimbleList_castPtrPtrToNamedObjectsPtrSEXP(
    SEXP input);

extern "C" SEXP OptimControlNimbleList_castDerivedPtrPtrToPairOfPtrsSEXP(
    SEXP input);

extern "C" SEXP new_NIMBLE_ADCLASS();

extern "C" SEXP NIMBLE_ADCLASS_castPtrPtrToNamedObjectsPtrSEXP(SEXP input);

extern "C" SEXP NIMBLE_ADCLASS_castDerivedPtrPtrToPairOfPtrsSEXP(SEXP input);

class waicList : public NamedObjects, public pointedToBase {
 public:
  double WAIC;
  double lppd;
  double pWAIC;
  SEXP RObjectPointer;
  bool RCopiedFlag;
  void copyFromSEXP(SEXP S_nimList_);
  SEXP copyToSEXP();
  void createNewSEXP();
  void resetFlags();
  void copyFromRobject(SEXP Robject);
  waicList();
};

extern "C" SEXP new_waicList();

extern "C" SEXP waicList_castPtrPtrToNamedObjectsPtrSEXP(SEXP input);

extern "C" SEXP waicList_castDerivedPtrPtrToPairOfPtrsSEXP(SEXP input);

class waicDetailsList : public NamedObjects, public pointedToBase {
 public:
  bool marginal;
  double niterMarginal;
  bool thin;
  bool online;
  double nburnin_extra;
  NimArr<1, double> WAIC_partialMC;
  NimArr<1, double> lppd_partialMC;
  NimArr<1, double> pWAIC_partialMC;
  NimArr<1, double> niterMarginal_partialMC;
  NimArr<1, double> WAIC_elements;
  NimArr<1, double> lppd_elements;
  NimArr<1, double> pWAIC_elements;
  SEXP RObjectPointer;
  bool RCopiedFlag;
  void copyFromSEXP(SEXP S_nimList_);
  SEXP copyToSEXP();
  void createNewSEXP();
  void resetFlags();
  void copyFromRobject(SEXP Robject);
  waicDetailsList();
};

extern "C" SEXP new_waicDetailsList();

extern "C" SEXP waicDetailsList_castPtrPtrToNamedObjectsPtrSEXP(SEXP input);

extern "C" SEXP waicDetailsList_castDerivedPtrPtrToPairOfPtrsSEXP(SEXP input);

class AGHQuad_params : public  NamedObjects, public pointedToBase {
 public:
  std::vector<string> names;
  NimArr<1, double> estimates;
  NimArr<1, double> stdErrors;
  SEXP RObjectPointer;
  bool RCopiedFlag;
  void copyFromSEXP(SEXP S_nimList_);
  SEXP copyToSEXP();
  void createNewSEXP();
  void resetFlags();
  void copyFromRobject(SEXP Robject);
  AGHQuad_params();
};

extern "C" SEXP new_AGHQuad_params();

extern "C" SEXP AGHQuad_params_castPtrPtrToNamedObjectsPtrSEXP(SEXP input);

extern "C" SEXP AGHQuad_params_castDerivedPtrPtrToPairOfPtrsSEXP(SEXP input);

class AGHQuad_summary : public  NamedObjects, public pointedToBase {
 public:
  nimSmartPtr<AGHQuad_params> params;
  nimSmartPtr<AGHQuad_params> randomEffects;
  NimArr<2, double> vcov;
  string scale;

  SEXP RObjectPointer;
  bool RCopiedFlag;
  void copyFromSEXP(SEXP S_nimList_);
  SEXP copyToSEXP();
  void createNewSEXP();
  void resetFlags();
  void copyFromRobject(SEXP Robject);
  AGHQuad_summary();
};

extern "C" SEXP new_AGHQuad_summary();

extern "C" SEXP AGHQuad_summary_castPtrPtrToNamedObjectsPtrSEXP(SEXP input);

extern "C" SEXP AGHQuad_summary_castDerivedPtrPtrToPairOfPtrsSEXP(SEXP input);


#endif  // __NIMBLE_PREDEFINEDNIMBLELISTS_H
