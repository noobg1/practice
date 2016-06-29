#include <iostream>
#include <math.h>
using namespace std;

double nthroot(int x, int n)
{
	double start = 1, end = x;
	double mid;
	double ans;
	while(start <= end){
		mid = (start + end) / 2;
		if(pow(mid, n) <= x){
			start = mid + 1;
			ans = mid;
		}
		else end = mid - 1;
	}
	return ans;
}

int main() {
	int n = 4, x = 625;
	cout<<nthroot(x,n)<<endl;
	cout<<pow(x,1./n);
	// your code goes here
	return 0;
}