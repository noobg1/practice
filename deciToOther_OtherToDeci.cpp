#include <iostream>
using namespace std;

int decimalToOtherBase(int num, int base)
{
	int multiplier = 1;
	int result = 0;
	while( num > 0 ){
	
		result += multiplier * (num % base)  ;
		multiplier *= 10;
	
		num /= base;
	}
	return result;
}

int otherToDecimal(int num, int base)
{
	int multiplier = 1;
	int result = 0;
	while( num > 0 ){
	
		result += multiplier * (num % 10)  ;
		multiplier *= base;
	
		num /= 10;
	}
	return result;
}

int main() {
	int num = 101;
	int base = 2;
	cout<<decimalToOtherBase(num,base)<<endl;;
	cout<<otherToDecimal(num,base);
	// your code goes here
	return 0;
}