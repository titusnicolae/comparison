#include "visitor.h"
#include <iostream>
#define compute for(int i=0;i<100;i++){global++;}
static int global;
Number* PyNumber::vmul(Number* n)
{ n->mul(this);
}
Number* PyNumber::mul(PyNumber* n)
{ compute
}
Number* PyNumber::mul(MPZ* n)
{ compute
}
Number* PyNumber::mul(MPQ* n)
{ compute
}
Number* PyNumber::mul(MPQC* n)
{ compute
}
Number* PyNumber::mul(MPFR* n)
{ compute
}
Number* PyNumber::mul(MPFC* n)
{ compute
}
Number* MPZ::vmul(Number* n)
{ n->mul(this);
}
Number* MPZ::mul(PyNumber* n)
{ compute
}
Number* MPZ::mul(MPZ* n)
{ compute
}
Number* MPZ::mul(MPQ* n)
{ compute
}
Number* MPZ::mul(MPQC* n)
{ compute
}
Number* MPZ::mul(MPFR* n)
{ compute
}
Number* MPZ::mul(MPFC* n)
{ compute
}

Number* MPQ::vmul(Number* n)
{ n->mul(this);
}
Number* MPQ::mul(PyNumber* n)
{ compute
}
Number* MPQ::mul(MPZ* n)
{ compute
}
Number* MPQ::mul(MPQ* n)
{ compute
}
Number* MPQ::mul(MPQC* n)
{ compute
}
Number* MPQ::mul(MPFR* n)
{ compute
}
Number* MPQ::mul(MPFC* n)
{ compute
}

Number* MPQC::vmul(Number* n)
{ n->mul(this);
}
Number* MPQC::mul(PyNumber* n)
{ compute
}
Number* MPQC::mul(MPZ* n)
{ compute
}
Number* MPQC::mul(MPQ* n)
{ compute
}
Number* MPQC::mul(MPQC* n)
{ compute
}
Number* MPQC::mul(MPFR* n)
{ compute
}
Number* MPQC::mul(MPFC* n)
{ compute
}

Number* MPFR::vmul(Number* n)
{ n->mul(this);
}
Number* MPFR::mul(PyNumber* n)
{ compute
}
Number* MPFR::mul(MPZ* n)
{ compute
}
Number* MPFR::mul(MPQ* n)
{ compute
}
Number* MPFR::mul(MPQC* n)
{ compute
}
Number* MPFR::mul(MPFR* n)
{ compute
}
Number* MPFR::mul(MPFC* n)
{ compute
}


Number* MPFC::vmul(Number* n)
{ n->mul(this);
}
Number* MPFC::mul(PyNumber* n)
{ compute
}
Number* MPFC::mul(MPZ* n)
{ compute
}
Number* MPFC::mul(MPQ* n)
{ compute
}
Number* MPFC::mul(MPQC* n)
{ compute
}
Number* MPFC::mul(MPFR* n)
{ compute
}
Number* MPFC::mul(MPFC* n)
{ compute
}

int main()
{ MPZ* mpz=new MPZ(); 
  MPQ* mpq=new MPQ(); 
  MPQC* mpqc=new MPQC(); 
  MPFR* mpfr=new MPFR(); 
  MPFC* mpfc=new MPFC();
  for(int i=0;i<1000000;i++)
  { mpz->mul(mpz);  
    mpz->mul(mpq); 
    mpz->mul(mpqc);
    mpz->mul(mpfr);
    mpz->mul(mpfc);
    
    mpq->mul(mpz);  
    mpq->mul(mpq); 
    mpq->mul(mpqc);
    mpq->mul(mpfr);
    mpq->mul(mpfc);

    mpqc->mul(mpz);  
    mpqc->mul(mpq); 
    mpqc->mul(mpqc);
    mpqc->mul(mpfr);
    mpqc->mul(mpfc);

    mpfr->mul(mpz);  
    mpfr->mul(mpq); 
    mpfr->mul(mpqc);
    mpfr->mul(mpfr);
    mpfr->mul(mpfc);

    mpfc->mul(mpz);  
    mpfc->mul(mpq); 
    mpfc->mul(mpqc);
    mpfc->mul(mpfr);
    mpfc->mul(mpfc);
  } 
  return 0;
}
