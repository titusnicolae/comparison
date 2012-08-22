#include <iostream>
#include <typeinfo>
#include <map>
#include <string>
#include <utility>
class Base;
typedef Base* (*func)(Base*,Base*); 

class Base
{ virtual void something(){}
};

class Multiply
{ static std::map<std::pair<std::string, std::string>,func> m;
  public:
  static Base* mul(Base* x, Base* y)
  { func f=m[std::make_pair(typeid(*x).name(),typeid(*y).name())];
    f(x,y);
  } 
  static Base* mulA_A(Base* x, Base* y)
  {
    std::cout<<"AA"<<std::endl;
  }
  static Base* mulA_B(Base* x, Base* y)
  {
    std::cout<<"AB"<<std::endl;
  }
  static Base* mulB_B(Base* x, Base* y)
  {
    std::cout<<"BB"<<std::endl;
  }
};

std::map<std::pair<std::string, std::string>, func> Multiply::m=
{{std::make_pair("1A","1A"),Multiply::mulA_A},
 {std::make_pair("1A","1B"),Multiply::mulA_B},
 {std::make_pair("1B","1A"),Multiply::mulA_B},
 {std::make_pair("1B","1B"),Multiply::mulB_B},
};

class A : public Base
{

};

class B : public Base
{

};

int main ()
{ 
  A* a=new A();
  B* b=new B();
  Multiply::mul(a,a);
  Multiply::mul(a,b);
  Multiply::mul(b,a);
  Multiply::mul(b,b);
  return 0;
}
  
