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
	    string s;
	    cin >> s;
	    string k;
	    for(int i = 0; i < s.length(); i++)
	    {
	        k = s;
	        if(k[i] == 'z') k[i] = 'a';
	        else k[i] = k[i] + 1;
	        if(s > k) s = k;
	    }
	    cout << s << endl;
	}
}