#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstdio>
#include <ctime>

using namespace std;

int sum(){
	int sum = 0;
	for(int x = 1; x<1000; x++){
		if ( x%5 == 0 || x%3 == 0){
			sum += x;
		}
	}
	return sum;
}

int sumOptomized(){
	int n = 1000/5-1;
	int m = 1000/3;
	int k = 1000/15;
	return (3*m*(m+1)/2)+(5*n*(n+1)/2)-(15*k*(k+1)/2);
}

double timer(){
	std::clock_t start;
    double duration;
    start = std::clock();

    // algo goes here 

    return ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
}

int main(){
	


	return 0;
}