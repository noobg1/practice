#include <iostream>
using namespace std;

int main() {
	char arr[200];
	arr[0] = 1;
	int n = 2, m = 1, temp = 0, x;
	
	for(int i = 1; i <= n; i++){
		
		for(int j = 0; j < m ; j++)
		{
		x = arr[j] * 2 + temp;
		arr[j] = x % 10;
		temp = x /10;
		}
		while(temp > 0){
			arr[m] = temp % 10;
			temp = temp /10 ;
			m++;
		}
		
	}
	
	for(int k = m-1; k >= 0;k--){
		cout<<(int)arr[k];
	}
	
	
	// your code goes here
	return 0;
}