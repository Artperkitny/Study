/*
 * File: factorial.cpp
 * ---------------------
 *  Recursive factorial algorithm
 */
#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
/* Function prototypes */
int fact(int n);
/* Main program */
int main() {
  int n;
  cout << "N: ";
  cin >> n;
  cout << "Factorial = " << fact(n) << endl;

  return 0;
}
/*
 * Function: fact
 * Usage: int f = fact(n);
 * ----------------------------------
 * Recursively calls fact function to get the factorial of n
 */
int fact(int n){
    if(n == 0) return 1;
    else return n*fact(n-1);
}
