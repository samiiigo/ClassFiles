//
// Created by samyo on 2/26/2025.
//
#include <iostream>
using namespace std;

struct Counter {
  int count;
  Counter(int c) : count(c) {}

  Counter operator++() {
    count++;
    return *this;
  }
  Counter operator++(int) {
    Counter temp = *this;
    count++;
    return temp;
  }
};

int main(){
  Counter c(5);
  cout << (c++).count << " ";
  cout << (++c).count << endl;
  return 0;
}