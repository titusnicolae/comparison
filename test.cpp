#include <iostream>
#include <typeinfo>

class Base
{ 
  public:
  static int a; 
  virtual void f(){}
};
int Base::a=1;

class A : public Base
{ 
};
int A::a=2;

class B : public Base
{ 
  public:
  static int a; 
};
int B::a=3;

void function(Base *base)
{ std::cout<<base->a;
}

int main ()
{ 
  Base base;
  A* a=new A();
  B* b=new B(); 
  function(a);
  function(b);
  return 0;
}
