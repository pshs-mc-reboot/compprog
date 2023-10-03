#include <bits/stdc++.h>

struct number {
  int x;
  
  number() : x{} {}
  number(int x) : x{x} {}
  number operator +(number that) {
    return number(this->x + that.x);
  }
  friend std::ostream& operator <<(std::ostream& out, number that) {
    return out << that.x;
  }
};

int main() {
  number x(10);
  number y(11);
  
  std::cout << x + y << std::endl;  // 21
}