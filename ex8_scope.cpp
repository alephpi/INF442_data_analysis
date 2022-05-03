// scope.cpp, Maggie Johnson
// Description: A program to illustrate different scopes

#include <iostream>
using namespace std;

int a = 18;
int b = 6;

int function1(int a, int b) {
  return a - b;
}

int function2() {
  int c;
  c = a + b;
  return c;
}

int main() {
  int b = 12; //here we define the local b.
  int c = 0;
  a = function1(b, a); //here we directly use the global a.
  c = function2();
  cout << "a: " << a << " b: " << b << " c: " << c << endl;
}