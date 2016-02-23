/*
 * File: test.cpp
 * ---------------------
 *  File Description
 *  Goes Here
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include "fill_vector.h"

using namespace std;
/* Function prototypes */
int binarySearch(vector<int> &vec, int n, int start, int end);
/* Main program */
int main() {
 vector<int> vec;
 fill_vector(vec, 100, 1000);
 sort(vec.begin(), vec.end());

 int n, i;
 for(int i = 0; i < 100; i++){
   cout << vec[i] << endl;
 }
 cout << "Enter number 1 - 1000 : ";
 cin >> n;
 cout << binarySearch(vec, n, 0, 99) << endl;
 return 0;
}

/*
 * Function: name
 * Usage: datatype name(parameters);
 * ----------------------------------
 * Description goes Here
 * avg O(log n), best O(1), space O(n)
 */

int binarySearch(vector<int> &vec, int n, int start, int end){
  int mid = (end+start)/2;
  cout << start << "|" << end << "|" << mid << "|" << endl;
  if(start > end) return -1;
  if(n == vec[mid]) return mid;
  if(n > vec[mid]){
    return binarySearch(vec, n, mid + 1, end);
  } else {
    return binarySearch(vec, n, start, mid - 1);
  }
}
