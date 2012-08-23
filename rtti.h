#include <iostream>
#include <typeinfo>
#include <map>
#include <string>
#include <utility>
#define N 10
class Number;
class PyNumber;
class MPZ;
class MPQ;
class MPQC;
class MPFR;
class MPFC;

typedef Number* (*func)(Number*,Number*); 

class Number
{ 
  public:
  static int id;
  virtual int gs(){}
};

class Mul
{ static func m[7][7];  
  public:
  static Number* mul(Number* x, Number* y);
  static Number* mulPyNumber_PyNumber(Number* x, Number* y);
  static Number* mulMPZ_MPZ(Number* x, Number* y);
  static Number* mulMPQ_MPQ(Number* x, Number* y);
  static Number* mulMPQC_MPQC(Number* x, Number* y);
  static Number* mulMPFR_MPFR(Number* x, Number* y);
  static Number* mulMPFC_MPFC(Number* x, Number* y);

  static Number* mulPyNumber_MPZ(Number* x, Number* y);
  static Number* mulPyNumber_MPQ(Number* x, Number* y);
  static Number* mulPyNumber_MPQC(Number* x, Number* y);
  static Number* mulPyNumber_MPFR(Number* x, Number* y);
  static Number* mulPyNumber_MPFC(Number* x, Number* y);

  static Number* mulMPZ_MPQ(Number* x, Number* y);
  static Number* mulMPZ_MPQC(Number* x, Number* y);
  static Number* mulMPZ_MPFR(Number* x, Number* y);
  static Number* mulMPZ_MPFC(Number* x, Number* y);

  static Number* mulMPQ_MPQC(Number* x, Number* y);
  static Number* mulMPQ_MPFR(Number* x, Number* y);
  static Number* mulMPQ_MPFC(Number* x, Number* y);

  static Number* mulMPQC_MPFR(Number* x, Number* y);
  static Number* mulMPQC_MPFC(Number* x, Number* y);

  static Number* mulMPFR_MPFC(Number* x, Number* y);
};

class PyNumber : public Number
{ public:
  int gs()
  { return 0;
  }
};

class MPZ : public Number
{ public:
  int gs()
  { return 1; 
  }
};

class MPQ : public Number
{ public:
  int gs()
  { return 2;
  }
};

class MPQC : public Number
{ public:
  int gs()
  { return 3;
  }
};

class MPFR : public Number
{ public:
  int gs()
  { return 4;
  }
};

class MPFC : public Number
{ public:
  int gs()
  { return 5;
  }
};
