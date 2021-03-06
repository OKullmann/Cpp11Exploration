/**
 * \author Dilshad Sallo
 * \date 2012/4/1
 * \class C
 * \brief Defining explicit default constructor with user defined constructor.
 */

#include <cassert>

class C {
public:
  C() = default; // Explicit default constructor
  C(const int i) : i(i) {}
  int val() const { return i; }
private:
  int i;
};

int main() {
  C c1;
  assert(c1.val() == 0);
  C c2(5);
}
