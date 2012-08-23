#include "visitor.h"
#include <iostream>
static int global;
Number* PyNumber::vmul(Number* n)
{ n->mul(this);
}
Number* PyNumber::mul(PyNumber* n)
{ 
}
Number* PyNumber::mul(MPZ* n)
{ 
}
Number* PyNumber::mul(MPQ* n)
{ 
}
Number* PyNumber::mul(MPQC* n)
{ 
}
Number* PyNumber::mul(MPFR* n)
{ 
}
Number* PyNumber::mul(MPFC* n)
{ 
}
Number* MPZ::vmul(Number* n)
{ n->mul(this);
}
Number* MPZ::mul(PyNumber* n)
{ 
}
Number* MPZ::mul(MPZ* n)
{ 
}
Number* MPZ::mul(MPQ* n)
{ 
}
Number* MPZ::mul(MPQC* n)
{ 
}
Number* MPZ::mul(MPFR* n)
{ 
}
Number* MPZ::mul(MPFC* n)
{ 
}

Number* MPQ::vmul(Number* n)
{ n->mul(this);
}
Number* MPQ::mul(PyNumber* n)
{ 
}
Number* MPQ::mul(MPZ* n)
{ 
}
Number* MPQ::mul(MPQ* n)
{ 
}
Number* MPQ::mul(MPQC* n)
{ 
}
Number* MPQ::mul(MPFR* n)
{ 
}
Number* MPQ::mul(MPFC* n)
{ 
}

Number* MPQC::vmul(Number* n)
{ n->mul(this);
}
Number* MPQC::mul(PyNumber* n)
{ 
}
Number* MPQC::mul(MPZ* n)
{ 
}
Number* MPQC::mul(MPQ* n)
{ 
}
Number* MPQC::mul(MPQC* n)
{ 
}
Number* MPQC::mul(MPFR* n)
{ 
}
Number* MPQC::mul(MPFC* n)
{ 
}

Number* MPFR::vmul(Number* n)
{ n->mul(this);
}
Number* MPFR::mul(PyNumber* n)
{ 
}
Number* MPFR::mul(MPZ* n)
{ 
}
Number* MPFR::mul(MPQ* n)
{ 
}
Number* MPFR::mul(MPQC* n)
{ 
}
Number* MPFR::mul(MPFR* n)
{ 
}
Number* MPFR::mul(MPFC* n)
{ 
}


Number* MPFC::vmul(Number* n)
{ n->mul(this);
}
Number* MPFC::mul(PyNumber* n)
{ 
}
Number* MPFC::mul(MPZ* n)
{ 
}
Number* MPFC::mul(MPQ* n)
{ 
}
Number* MPFC::mul(MPQC* n)
{ 
}
Number* MPFC::mul(MPFR* n)
{ 
}
Number* MPFC::mul(MPFC* n)
{ 
}

int main()
{ PyNumber* py=new PyNumber();
  MPZ* mpz=new MPZ(); 
  MPQ* mpq=new MPQ(); 
  MPQC* mpqc=new MPQC(); 
  MPFR* mpfr=new MPFR(); 
  MPFC* mpfc=new MPFC();

  for(int i=0;i<123456;i++)
  { py->mul(py);
    py->mul(mpz);  
    py->mul(mpq); 
    py->mul(mpqc);
    py->mul(mpfr);
    py->mul(mpfc);
    
    mpz->mul(py);
    mpz->mul(mpz);  
    mpz->mul(mpq); 
    mpz->mul(mpqc);
    mpz->mul(mpfr);
    mpz->mul(mpfc);
   
    mpq->mul(py);
    mpq->mul(mpz);  
    mpq->mul(mpq); 
    mpq->mul(mpqc);
    mpq->mul(mpfr);
    mpq->mul(mpfc);

    mpqc->mul(py);
    mpqc->mul(mpz);  
    mpqc->mul(mpq); 
    mpqc->mul(mpqc);
    mpqc->mul(mpfr);
    mpqc->mul(mpfc);

    mpfr->mul(py);
    mpfr->mul(mpz);  
    mpfr->mul(mpq); 
    mpfr->mul(mpqc);
    mpfr->mul(mpfr);
    mpfr->mul(mpfc);

    mpfc->mul(py);
    mpfc->mul(mpz);  
    mpfc->mul(mpq); 
    mpfc->mul(mpqc);
    mpfc->mul(mpfr);
    mpfc->mul(mpfc);
  } 
  return 0;
}
