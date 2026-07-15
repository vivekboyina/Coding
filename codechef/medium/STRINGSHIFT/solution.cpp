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
	    string o = s;
	    string k;
	    string ans = s;
	    for(int i = 0; i < s.length(); i++)
	    {
	        k = s;
	        if(k[i] == 'z') k[i] = 'a';
	        else k[i] = k[i] + 1;
	        ans = min(ans,min(s,k));
	        if(s > k) s = k;
	        else s = o;
	    }
	    cout << ans << endl;
	}
}