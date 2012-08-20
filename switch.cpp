#include <cmath>
#include <iostream>
enum Type 
{ MPZ,MPQ,MPFR,MPQC,MPFC
};
union Value
{ struct
  { int integer;
  } MPZ;
  struct 
  { int numer,denom;
  } MPQ;
  struct
  { double real;
  } MPFR;
  struct
  { int denom_real,numer_real;
    int denom_imag,numer_imag; 
  } MPQC; 
  struct
  { double real;
    double imag; 
  } MPFC; 
};

class Number
{ Type t; 
  Value v;
  public:
  Number(int integer) //MPZ
  { t=MPZ;
    v.MPZ.integer=integer;
  } 
  Number(int numer,int denom)  //MPQ
  { t=MPQ;
    v.MPQ.numer=numer;
    v.MPQ.denom=denom;
  }
  Number(double real)  //MPFR
  { t=MPFR;
    v.MPFR.real=real;
  }
  Number(int numer_real, int denom_real, int numer_imag, int denom_imag) //MPQC
  { t=MPQC;
    v.MPQC.denom_real=denom_real;
    v.MPQC.numer_real=numer_real;
    v.MPQC.denom_imag=denom_imag;
    v.MPQC.numer_imag=numer_imag; 
  }
  Number(double real, double imag)
  { t=MPFC;
    v.MPFC.real=real; 
    v.MPFC.imag=imag; 
  }
  Number abs()
  { switch(t)
    { case MPZ: return v.MPZ.integer>=0?Number(v.MPZ.integer):Number(-v.MPZ.integer); 
      case MPQ: return v.MPQ.denom*v.MPQ.numer>=0?Number(v.MPQ.numer,v.MPQ.denom):(v.MPQ.denom<0?Number(v.MPQ.numer,-v.MPQ.denom):Number(-v.MPQ.numer,v.MPQ.denom)); 
      case MPFR: return v.MPFR.real>=0?Number(v.MPFR.real):Number(-v.MPFR.real);
      case MPQC: return Number(absolute((double)v.MPQC.numer_real/v.MPQC.denom_real,(double)v.MPQC.numer_imag/v.MPQC.denom_imag));
      case MPFC: return Number(absolute(v.MPFC.real,v.MPFC.imag));
    }
  }
  static double absolute(double re,double im)
  { return std::sqrt(pow(re,2)+pow(im,2));
  }
  friend std::ostream& operator<<(std::ostream& o,Number n)
  { switch(n.t)
    { case MPZ:return o<<n.v.MPZ.integer<<std::endl;
      case MPQ:return o<<n.v.MPQ.numer<<"/"<<n.v.MPQ.denom<<std::endl; 
      case MPFR:return o<<n.v.MPFR.real<<std::endl; 
      case MPQC:return o<<n.v.MPQC.numer_real<<"/"<<n.v.MPQC.denom_real<<"+"<<n.v.MPQC.numer_imag<<"/"<<n.v.MPQC.denom_imag<<"i"<<std::endl; 
      case MPFC:o<<n.v.MPFC.real<<"+"<<n.v.MPFC.imag<<"i"<<std::endl; 
    }
    return o;
  }
};
int main ()
{ Number mpz=Number(10);
  Number mpq=Number(3,4); 
  Number mpfr=Number(3.1415);
  Number mpqc=Number(3,5,4,5);
  Number mpfc=Number(1.414213,1.414213); 
  //std::cout<<mpz<<mpq<<mpfr<<mpqc<<mpfc;
  for(int i=0;i<30111000;i++)
  { mpz.abs();
    mpq.abs();
    mpfr.abs();
    mpqc.abs();
    mpfc.abs();
  }
}
