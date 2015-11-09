// Comment

/*

Multi Line Comment 

*/

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

//using namespace std;

int main(){
	std::cout << "Hello World" << std::endl;

	/* 
	const is kinda immutable (see resource c++ folder for more info on this), 
	constant variable name should be all UPPER CASE 
	*/

	const double PI = 3.1415926535;

	/* 
	signle character, 
   	use single quotes, 
	uses 1 byte of memory  
	*/

	char A = 'a';

	/*
	name should start with is 
	true = 1, false = 0 
	*/

	bool isBool= true; 

	int numberInt = 256;

	// accurate up to 6 decimal places
	float numberFloat = 1.123456;

	// accurate up to 15 decimal places
	double numberDouble = 1.123456789012345;  

	/*
	Other DataTypes
	short int: At least 16 bits in size 
	long int: At least 32 bits in size 
	long long int: At least 64 bits in size 
	unsigned int: Same size as signed version (signed can hold negative values)
	long double: Not less in size than double 
	*/

	std::cout << "Best number is: " << numberInt << std::endl;

	std::cout << "Size of int: " << sizeof(numberInt) << " bytes" << std::endl;

	// Pointers 

	int x = 10;

	int* a; 

	int *a;

	a = &x;




	return 0;
}