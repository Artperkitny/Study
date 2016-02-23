/*
 * File: test.cpp
 * ---------------------
 *  File Description
 *  Goes Here
 */
#include <iostream>
#include "../library/QueueLL.h"

using namespace std;
/* Function prototypes */

/* Main program */
int main() {
  Queue<int> s;
  cout << "Test Empty: " << s.dequeue() << endl;
  cout << "Is Empty ?: " << s.isEmpty() << endl;

  cout << "Filling Array..." << endl;
  for(int i = 1; i < 51; i++){
    s.enqueue(i * 2);
  }

  cout << "Size: " << s.size() << endl;
  cout << "Is Empty?: " << s.isEmpty() << endl;
  cout << "Dequeue : "<< s.dequeue() << endl;
  cout << "Peek: " << s.peek() << endl;
  cout << "Dequeue : "<< s.dequeue() << endl;
  cout << "Peek: " << s.peek() << endl;
  cout << "New Size: " << s.size() << endl;

  s.clear();
  cout << "Use s.clear(), new size: " << s.size() << endl;
  cout << "Is Empty?: " << s.isEmpty() << endl;

 return 0;
}
