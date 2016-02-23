/*
 * File: test.cpp
 * ---------------------
 *  File Description
 *  Goes Here
 */
#include <iostream>
#include "../library/StackLL.h"

using namespace std;
/* Function prototypes */

/* Main program */
int main() {
  Stack<int> s;
  cout << "Test Empty: " << s.pop() << endl;
  cout << "Is Empty ?: " << s.isEmpty() << endl;

  cout << "Filling Array..." << endl;
  for(int i = 0; i < 50; i++){
    s.push(i * 2);
  }

  cout << "Size: " << s.size() << endl;
  cout << "Is Empty?: " << s.isEmpty() << endl;
  cout << "Pop : "<< s.pop() << endl;
  cout << "Peek: " << s.peek() << endl;

  s.clear();
  cout << "Use s.clear(), new size: " << s.size() << endl;
  cout << "Is Empty?: " << s.isEmpty() << endl;

 return 0;
}
