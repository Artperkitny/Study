/*
 * File: test.cpp
 * ---------------------
 *  File Description
 *  Goes Here
 */
#include <iostream>
#include "../library/sequence.h"

using namespace std;
/* Function prototypes */

/* Main program */
int main() {
  int k;
  cout << "please enter number of terms: ";
  cin >> k;
  cout << k <<"th term of the fibonacci sequence is: " << additiveSequence(k,0,1) << endl;
  return 0;
}
/*
 * Function: name
 * Usage: datatype name(parameters);
 * ----------------------------------
 * Description goes Here
 */
