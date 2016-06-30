#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string maxlsubstr(string s, string k)
{
	int n = s.length(), m = k.length();
	int a[n+1][m+1] ;
	for(int i = 0 ; i <= n; i++)
	{
		for(int j = 0; j <= m; j++)
		{
			if(i ==0 || j == 0)
			a[i][j] = 0;
			else if(s[i] == k[j])
			a[i][j] = a[i - 1][j - 1] + 1;
			else a[i][j] = 0;
		}
	}
	int max = a[0][0], indexi = 0, indexj = 0;
	for(int i = 0 ; i <= n; i++)
	{
		for(int j = 0; j <= m; j++)
		{
			if(max < a[i][j])
			{
				max = a[i][j];
				indexi = i;
				indexj = j;
			}
		}
	}
	
	/*for(int i = 0 ; i <= n; i++)
	{
		for(int j = 0; j <= m; j++)
		cout<<a[i][j]<<" ";
		cout<<endl;
	}*/
	//cout<<indexi<<" "<<indexj<<endl;
	string g;int flag = 0;
	int t = a[indexi][indexj];
	for(int i = indexi; i > 0 && t != 0; )
	{
		for(int j = indexj; j > 0 && t != 0; )
		{
			
			g = g + k[j];
			
			j--;
			i--;
			t = a[i][j];
		}
	}
	
	reverse(g.begin(),g.end());
	return g;
}

int main() {
	string s = "abcdafqwertyop", k = "3bcdf", l = "opqwerty789";
	cout<<maxlsubstr(s,l);
	
	// your code goes here
	return 0;
}