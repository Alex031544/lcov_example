#ifndef LIB_H_INCLUDED
#define LIB_H_INCLUDED

class Lib {

  int var;
  const int cvar = 10;

  void usedPrivateMethod();
  void unusedPrivateMethod();

public:
  void usedMethod();

  void unusedMethod();
};

#endif // LIB_H_INCLUDED
