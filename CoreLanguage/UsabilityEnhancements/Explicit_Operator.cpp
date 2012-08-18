// Dilshad Sallo, 29.7.2012
// Using "explicit" keyword with operator to prevent implicit conversion from object to int.

#include <cassert>

class A{
public:
  A(const int i) : x(i) {}
  operator int () const { return x; }
protected:
  const int x;
};

class B : A {
public:
  B(int i) :  A(i) {}
  explicit operator int() const { return x;}
};

int main() {
  A a(1);
  B b(2);

  int i = a;// Implicit conversion from object to int
  assert( i == 1);

  // i = b; // Error: no implicit conversion
  i = static_cast<int> (b);
  assert(i == 2);
}