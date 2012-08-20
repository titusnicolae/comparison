#include <iostream>

class Number;
class PyNumber;
class MPZ;
class MPQ;
class MPQC;
class MPFR;
class MPFC;

class Number
{ 
  public:
  virtual Number* vmul(Number* n)=0; 
  virtual Number* mul(PyNumber* n)=0;
  virtual Number* mul(MPZ* n)=0;
  virtual Number* mul(MPQ* n)=0;
  virtual Number* mul(MPQC* n)=0;
  virtual Number* mul(MPFR* n)=0;
  virtual Number* mul(MPFC* n)=0;
};

class PyNumber : public Number
{ 
  public: 
  Number* vmul(Number* n); 
  Number* mul(PyNumber* n);
  Number* mul(MPZ* n);
  Number* mul(MPQ* n);
  Number* mul(MPQC* n);
  Number* mul(MPFR* n);
  Number* mul(MPFC* n);
};

class MPZ : public Number
{ 
  public: 
  Number* vmul(Number* n); 
  Number* mul(PyNumber* n);
  Number* mul(MPZ* n);
  Number* mul(MPQ* n);
  Number* mul(MPQC* n);
  Number* mul(MPFR* n);
  Number* mul(MPFC* n);
};

class MPQ: public Number
{ 
  public: 
  Number* vmul(Number* n); 
  Number* mul(PyNumber* n);
  Number* mul(MPZ* n);
  Number* mul(MPQ* n);
  Number* mul(MPQC* n);
  Number* mul(MPFR* n);
  Number* mul(MPFC* n);
};

class MPQC : public Number
{ 
  public: 
  Number* vmul(Number* n); 
  Number* mul(PyNumber* n);
  Number* mul(MPZ* n);
  Number* mul(MPQ* n);
  Number* mul(MPQC* n);
  Number* mul(MPFR* n);
  Number* mul(MPFC* n);
};

class MPFR : public Number
{ 
  public:
  Number* vmul(Number* n); 
  Number* mul(PyNumber* n);
  Number* mul(MPZ* n);
  Number* mul(MPQ* n);
  Number* mul(MPQC* n);
  Number* mul(MPFR* n);
  Number* mul(MPFC* n);
}; 

class MPFC : public Number
{ 
  public:
  Number* vmul(Number* n); 
  Number* mul(PyNumber* n);
  Number* mul(MPZ* n);
  Number* mul(MPQ* n);
  Number* mul(MPQC* n);
  Number* mul(MPFR* n);
  Number* mul(MPFC* n);
};

