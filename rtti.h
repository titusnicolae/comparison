#include <iostream>
#include <typeinfo>
#include <map>
#include <string>
#include <utility>
class Number;
class PyNumber;
class MPZ;
class MPQ;
class MPQC;
class MPFR;
class MPFC;

typedef Number* (*func)(Number*,Number*); 

class Number
{ virtual void something()
  {}
};

class Mul
{ static std::map<std::pair<std::string, std::string>,func> m;
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
{

};

class MPZ : public Number
{

};

class MPQ : public Number
{

};

class MPQC : public Number
{

};

class MPFR : public Number
{

};

class MPFC : public Number
{

};
