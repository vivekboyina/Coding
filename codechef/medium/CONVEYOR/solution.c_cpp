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
	    int st;
	    cin >> st;
	    string s;
	    cin >> s;
        int ll = 0,rl = 0;
        int lr = 0,rr = 0;
        for(int i = 0; i <= st; i++)
        {
            if(s[i] == 'L') ll++;
            else rl++;
        }
        for(int i = st; i < n; i++)
        {
            if(s[i] == 'L') lr++;
            else rr++;
        }
        cout << ll << " " << rl << endl;
        cout << lr << " " << rr << endl;
        cout << min(abs(ll - rl),abs(lr - rr)) << endl;
	}
}
