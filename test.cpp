#include <iostream>
#include <map>
#include <string>
#include <utility>
class A
{ static std::map<int, std::pair<std::string, std::string> > m;
    
};
std::map<int,std::pair<std::string, std::string> > A::m={{1,std::make_pair("asda","asd")}};

int main ()
{ 

  return 0;
};
