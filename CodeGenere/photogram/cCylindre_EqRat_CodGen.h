// File Automatically generated by eLiSe
#include "general/all.h"
#include "private/all.h"


class cCylindre_EqRat_CodGen: public cElCompiledFonc
{
   public :

      cCylindre_EqRat_CodGen();
      void ComputeVal();
      void ComputeValDeriv();
      void ComputeValDerivHessian();
      double * AdrVarLocFromString(const std::string &);
      void SetP2Proj_x(double);
      void SetP2Proj_y(double);
      void SetP2Proj_z(double);


      static cAutoAddEntry  mTheAuto;
      static cElCompiledFonc *  Alloc();
   private :

      double mLocP2Proj_x;
      double mLocP2Proj_y;
      double mLocP2Proj_z;
};
