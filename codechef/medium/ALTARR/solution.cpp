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
	    int arr[n];
	    for(int i = 0; i < n; i++) cin >> arr[i];
	    int ans = 0;
	    for(int i = 1; i < n; i++)
	    {
	        if((arr[i - 1] % 2 == 0 && arr[i] % 2 == 0) || (arr[i - 1] % 2 != 0 && arr[i] % 2 != 0))
	        {
	            ans+=1;
	            arr[i]+=1;
	        }
	    }
	    cout << ans << endl;
	}
}
