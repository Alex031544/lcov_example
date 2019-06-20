#include "lib.h"

#include <iostream>

void Lib::usedPrivateMethod(){
  std::cout << "usedPrivateMethod \n";
}

void Lib::unusedPrivateMethod(){
  std::cout << "unusedPrivateMethod \n";
}

void Lib::usedMethod(){
  std::cout << "usedMethod \n";
}

void Lib::unusedMethod(){
  std::cout << "unusedMethod \n";
  usedPrivateMethod();
}
