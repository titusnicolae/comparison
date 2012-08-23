#include "rtti.h"
static int global;
Number* Mul::mul(Number* x, Number* y)
{ 
  func f=m[x->gs()][y->gs()];
  f(x,y);
} 
Number* Mul::mulPyNumber_PyNumber(Number* x, Number* y)
{ 
}
Number* Mul::mulMPZ_MPZ(Number* x, Number* y)
{ 
}
Number* Mul::mulMPQ_MPQ(Number* x, Number* y)
{  
}
Number* Mul::mulMPQC_MPQC(Number* x, Number* y)
{  
}
Number* Mul::mulMPFR_MPFR(Number* x, Number* y)
{ 
}
Number* Mul::mulMPFC_MPFC(Number* x, Number* y)
{  
}
Number* Mul::mulPyNumber_MPZ(Number* x, Number* y)
{  
}
Number* Mul::mulPyNumber_MPQ(Number* x, Number* y)
{  
}
Number* Mul::mulPyNumber_MPQC(Number* x, Number* y)
{  
}
Number* Mul::mulPyNumber_MPFR(Number* x, Number* y)
{ 
}
Number* Mul::mulPyNumber_MPFC(Number* x, Number* y)
{ 
}

Number* Mul::mulMPZ_MPQ(Number* x, Number* y)
{ 
}
Number* Mul::mulMPZ_MPQC(Number* x, Number* y)
{ 
}
Number* Mul::mulMPZ_MPFR(Number* x, Number* y)
{ 
}
Number* Mul::mulMPZ_MPFC(Number* x, Number* y)
{ 
}

Number* Mul::mulMPQ_MPQC(Number* x, Number* y)
{ 
}
Number* Mul::mulMPQ_MPFR(Number* x, Number* y)
{ 
}
Number* Mul::mulMPQ_MPFC(Number* x, Number* y)
{ 
}

Number* Mul::mulMPQC_MPFR(Number* x, Number* y)
{ 
}
Number* Mul::mulMPQC_MPFC(Number* x, Number* y)
{ 
}

Number* Mul::mulMPFR_MPFC(Number* x, Number* y)
{ 
}

func Mul::m[7][7]={
{Mul::mulPyNumber_PyNumber,Mul::mulPyNumber_MPZ,Mul::mulPyNumber_MPQ,Mul::mulPyNumber_MPQC,Mul::mulPyNumber_MPFR,Mul::mulPyNumber_MPFC},
{Mul::mulPyNumber_MPZ,Mul::mulMPZ_MPZ,Mul::mulMPZ_MPQ,Mul::mulMPZ_MPQC,Mul::mulMPZ_MPFR,Mul::mulMPZ_MPFC},
{Mul::mulPyNumber_MPQ,Mul::mulMPZ_MPQ,Mul::mulMPQ_MPQ,Mul::mulMPQ_MPQC,Mul::mulMPQ_MPFR,Mul::mulMPQ_MPFC},
{Mul::mulPyNumber_MPQC,Mul::mulMPZ_MPQC,Mul::mulMPQ_MPQC,Mul::mulMPQC_MPQC,Mul::mulMPQC_MPFR,Mul::mulMPQC_MPFC},
{Mul::mulPyNumber_MPFR,Mul::mulMPZ_MPFR,Mul::mulMPQ_MPFR,Mul::mulMPQC_MPFR,Mul::mulMPFR_MPFR,Mul::mulMPFR_MPFC},
{Mul::mulPyNumber_MPFC,Mul::mulMPZ_MPFC,Mul::mulMPQ_MPFC,Mul::mulMPQC_MPFC,Mul::mulMPFR_MPFC,Mul::mulMPFC_MPFC},
};

int main ()
{ 
  PyNumber* py=new PyNumber();  
  MPZ* mpz=new MPZ();
  MPQ* mpq=new MPQ();
  MPQC* mpqc=new MPQC();
  MPFR* mpfr=new MPFR();
  MPFC* mpfc=new MPFC();
  
  for(int i=0;i<123456;i++)
  { 
    Mul::mul(py,py); 
    Mul::mul(py,mpz); 
    Mul::mul(py,mpq); 
    Mul::mul(py,mpqc); 
    Mul::mul(py,mpfr); 
    Mul::mul(py,mpfc);
    
    Mul::mul(mpz,py); 
    Mul::mul(mpz,mpz); 
    Mul::mul(mpz,mpq); 
    Mul::mul(mpz,mpqc); 
    Mul::mul(mpz,mpfr); 
    Mul::mul(mpz,mpfc); 

    Mul::mul(mpq,py); 
    Mul::mul(mpq,mpz); 
    Mul::mul(mpq,mpq); 
    Mul::mul(mpq,mpqc); 
    Mul::mul(mpq,mpfr); 
    Mul::mul(mpq,mpfc); 

    Mul::mul(mpqc,py); 
    Mul::mul(mpqc,mpz); 
    Mul::mul(mpqc,mpq); 
    Mul::mul(mpqc,mpqc); 
    Mul::mul(mpqc,mpfr); 
    Mul::mul(mpqc,mpfc); 

    Mul::mul(mpfr,py); 
    Mul::mul(mpfr,mpz); 
    Mul::mul(mpfr,mpq); 
    Mul::mul(mpfr,mpqc); 
    Mul::mul(mpfr,mpfr); 
    Mul::mul(mpfr,mpfc); 

    Mul::mul(mpfc,py); 
    Mul::mul(mpfc,mpz); 
    Mul::mul(mpfc,mpq); 
    Mul::mul(mpfc,mpqc); 
    Mul::mul(mpfc,mpfr); 
    Mul::mul(mpfc,mpfc); 
  }
  return 0;
}
