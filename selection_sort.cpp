/*
 * File: selection_sort.cpp
 * ---------------------
 *  Basic Implementation of Selection Sort
 */
#include <iostream>
#include <vector>
#include "../library/fill_vector.h"

using namespace std;
/* Function prototypes */
void sort(vector<int> & vec);

/* Main program */
int main() {
  vector<int> vec;
  fill_vector(vec, 100, 1000);
  cout << "Unsorted Vector : " << endl;
  for(int i = 0; i < vec.size(); i++){
    cout<< vec[i] << " ";
  }
  cout << endl;

  sort(vec);

  cout << "Sorted Vector :" << endl;
  for(int i = 0; i < vec.size(); i++){
    cout << vec[i] << " ";
  }
  cout << endl;
  return 0;
}

/*
 * Function: sort
 * Usage: sort(vec);
 * ----------------------------------
 * Selection Sort, O(n2)
 */
void sort(vector<int> & vec){
  for(int i = 0; i < vec.size(); i++){
    int c = i;
    for(int j = i + 1; j < vec.size(); j++){
      if(vec[j] < vec[c]) c = j;
    }
    int tmp = vec[i];
    vec[i] = vec[c];
    vec[c] = tmp;
  }
}
