#include <iostring>
#include <cstdlib>

int main(){
 const char* secret  = std::getenv("PASSWORD");
  std::string s(secret);
  if (s = "qwerty"){
    std::cout << "Parol +!!!!" << std::endl;
  } eles {
    std::cout << "Parol -!!!!" << std::endl;
}
return 0;
}
