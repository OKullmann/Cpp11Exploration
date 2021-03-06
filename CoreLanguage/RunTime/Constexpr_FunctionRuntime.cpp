/**
 * \author Dilshad Sallo
 * \date 2012/8/25
 * \brief Using constexpr function "multiply" at runtime to compute a value of two numbers.
 */

#include <iostream>

constexpr int multiply(int i, int j) {
  return (i*j);
}

int main() {
  int a, b;
  std::cout << "Enter two numbers for mulitplication: ";
  std::cin>>a >> b;
  std::cout << std::endl;
  std::cout <<"The result is : " << multiply(a,b)<< std::endl;
}
