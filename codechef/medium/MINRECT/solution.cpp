#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,m;
	    cin >> n >> m;
	    vector<string>arr(n);
	    for(int i = 0; i < n; i++) cin >> arr[i];
	    int r1 = -1,r2 = -1;
	    for(int i = 0; i < n; i++)
	    {
	        for(int j = 0; j < m; j++)
	        {
	            if(arr[i][j] == '1')
	            {
	                if(r1 == -1) r1 = i + 1;
	                else if(r1 <= i) r2 = max(i + 1,r2);
	            }
	        }
	    }
	    int len = 1,brd = 1;
	    len = max(r2 - r1 + 1,len);
	    int l = INT_MAX,r = INT_MIN;
	    for(int i = 0; i < m; i++)
	    {
	        if(arr[r1 - 1][i] == '1')
	        {
	            l = min(l,i + 1);
	            r = max(r,i + 1);
	        }
	    }
	    if(r2 != -1)
	    {
	        for(int i = 0; i < m; i++)
	        {
	            if(arr[r2 - 1][i] == '1')
	            {
	                l = min(l,i + 1);
	                r = max(r,i + 1);
	            }
	        }
	    }
        brd = max(r - l + 1,brd);
	    cout << len*brd << endl;
	}
}
