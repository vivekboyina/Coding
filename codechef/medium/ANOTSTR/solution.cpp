#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    string a,b;
	    cin >> a >> b;
	    int a0 = 0,a1 = 0,b0 = 0,b1 = 0;
	    for(char i : a)
	    {
	        if(i == '0') a0+=1;
	        else a1+=1;
	    }
	    for(char i : b)
	    {
	        if(i == '0') b0+=1;
	        else b1+=1;
	    }
	    if((a1 == b1 && a0 == b0) || (a1 == b0 && a0 == b1 && n % 2 == 0)) cout << "YES\n";
	    else cout << "NO\n";
	}
}
