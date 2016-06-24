#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

string fromDeciTo(int num , int base)
{
	string ref = "0123456789ABCDEF";
	string res;
	while( num > 0){
		res += ref[num % base];
		num /= base;
	}
	reverse(res.begin(), res.end());
	return res;
}

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

int otherToDeciamal(int num, int base)
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
	int num = 15;
	int base = 16;
	cout<<decimalToOtherBase(num,base)<<endl;;
	cout<<otherToDeciamal(num,base)<<endl;
	cout<<fromDeciTo(num,base);
	// your code goes here
	return 0;
}