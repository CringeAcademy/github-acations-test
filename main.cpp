#include <iostream>
#include <cstdlib>
#include <string>


int main(){
 const char* secret  = std::getenv("PASSWORD");
  std::string s(secret);
  if (s == "qwerty"){
    std::cout << "Parol +!!!!" << std::endl;
  } else {
    std::cout << "Parol -!!!!" << std::endl;
}
return 0;
}
