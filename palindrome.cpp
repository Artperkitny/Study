/*
 * File: test.cpp
 * ---------------------
 *  File Description
 *  Goes Here
 */
#include <iostream>
#include <vector>
#include <string>
using namespace std;

/* Function prototypes */
bool isPalindrome(string &word, int start, int end);
/* Main program */
int main() {
 string word;
 cout << "please enter a word:";
 cin >> word;
 cout << isPalindrome(word, 0, word.length()-1)<< endl;

 return 0;
}
/*
 * Function: name
 * Usage: datatype name(parameters);
 * ----------------------------------
 * Description goes Here
 */

bool isPalindrome(string &word, int start, int end){
  if(start>=end) return true;
  if(word[start]==word[end]) return true && isPalindrome(word, start+1, end-1);
  return false;
}
