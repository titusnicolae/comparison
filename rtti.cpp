#include "rtti.h"
static int global;
Number* Mul::mul(Number* x, Number* y)
{ func f=m[std::make_pair(typeid(*x).name(),typeid(*y).name())];
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

std::map<std::pair<std::string, std::string>, func> Mul::m=
{ {{typeid(PyNumber).name(),typeid(PyNumber).name()},Mul::mulPyNumber_PyNumber},
  {{typeid(MPZ).name(),typeid(MPZ).name()},Mul::mulMPZ_MPZ},
  {{typeid(MPQ).name(),typeid(MPQ).name()},Mul::mulMPQ_MPQ},
  {{typeid(MPQC).name(),typeid(MPQC).name()},Mul::mulMPQC_MPQC},
  {{typeid(MPFR).name(),typeid(MPFR).name()},Mul::mulMPFR_MPFR},
  {{typeid(MPFC).name(),typeid(MPFC).name()},Mul::mulMPFC_MPFC},

  {{typeid(PyNumber).name(),typeid(MPZ).name()},Mul::mulPyNumber_MPZ},
  {{typeid(MPZ).name(),typeid(PyNumber).name()},Mul::mulPyNumber_MPZ},
  {{typeid(PyNumber).name(),typeid(MPQ).name()},Mul::mulPyNumber_MPQ},
  {{typeid(MPQ).name(),typeid(PyNumber).name()},Mul::mulPyNumber_MPQ},
  {{typeid(PyNumber).name(),typeid(MPQC).name()},Mul::mulPyNumber_MPQC},
  {{typeid(MPQC).name(),typeid(PyNumber).name()},Mul::mulPyNumber_MPQC},
  {{typeid(PyNumber).name(),typeid(MPFR).name()},Mul::mulPyNumber_MPFR},
  {{typeid(MPFR).name(),typeid(PyNumber).name()},Mul::mulPyNumber_MPFR},
  {{typeid(PyNumber).name(),typeid(MPFC).name()},Mul::mulPyNumber_MPFC},
  {{typeid(MPFC).name(),typeid(PyNumber).name()},Mul::mulPyNumber_MPFC},

  {{typeid(MPZ).name(),typeid(MPQ).name()},Mul::mulMPZ_MPQ},
  {{typeid(MPQ).name(),typeid(MPZ).name()},Mul::mulMPZ_MPQ},
  {{typeid(MPZ).name(),typeid(MPQC).name()},Mul::mulMPZ_MPQC},
  {{typeid(MPQC).name(),typeid(MPZ).name()},Mul::mulMPZ_MPQC},
  {{typeid(MPZ).name(),typeid(MPFR).name()},Mul::mulMPZ_MPFR},
  {{typeid(MPFR).name(),typeid(MPZ).name()},Mul::mulMPZ_MPFR},
  {{typeid(MPZ).name(),typeid(MPFC).name()},Mul::mulMPZ_MPFC},
  {{typeid(MPFC).name(),typeid(MPZ).name()},Mul::mulMPZ_MPFC},

  {{typeid(MPQ).name(),typeid(MPQC).name()},Mul::mulMPQ_MPQC},
  {{typeid(MPQC).name(),typeid(MPQ).name()},Mul::mulMPQ_MPQC},
  {{typeid(MPQ).name(),typeid(MPFR).name()},Mul::mulMPQ_MPFR},
  {{typeid(MPFR).name(),typeid(MPQ).name()},Mul::mulMPQ_MPFR},
  {{typeid(MPQ).name(),typeid(MPFC).name()},Mul::mulMPQ_MPFC},
  {{typeid(MPFC).name(),typeid(MPQ).name()},Mul::mulMPQ_MPFC},

  {{typeid(MPQC).name(),typeid(MPFR).name()},Mul::mulMPQC_MPFR},
  {{typeid(MPFR).name(),typeid(MPQC).name()},Mul::mulMPQC_MPFR},
  {{typeid(MPQC).name(),typeid(MPFC).name()},Mul::mulMPQC_MPFC},
  {{typeid(MPFC).name(),typeid(MPQC).name()},Mul::mulMPQC_MPFC},

  {{typeid(MPFR).name(),typeid(MPFC).name()},Mul::mulMPFR_MPFC},
  {{typeid(MPFC).name(),typeid(MPFR).name()},Mul::mulMPFR_MPFC},
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
