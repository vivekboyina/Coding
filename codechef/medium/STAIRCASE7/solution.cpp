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
	    vector<int>cc(n);
	    for(int i = 0; i < n; i++) cin >> cc[i];
	    long long ans = 0;
	    vector<int>tw = cc;
	    for(int i = 1; i < n; i++)
	    {
	        if((cc[i] - cc[i - 1]) != 1)
	        {
	            cc[i] = cc[i - 1] + 1;
	            ans+=1;
	        }
	    }
	    long long mns = 0;
	    for(int i = n - 2; i >= 0; i--)
	    {
	        cout << tw[i + 1] << " " << tw[i] << endl;
	        if((tw[i + 1] - tw[i]) != 1)
	        {
	            tw[i] = tw[i + 1] - 1;
	            mns+=1;
	        }
	    }
	    cout << min(ans,mns) << endl;
	}
}
