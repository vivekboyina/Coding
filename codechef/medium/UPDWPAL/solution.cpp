#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& cc,int i,int j,int n)
{
    while(i <= j)
    {
        if(cc[i] > n) cc[i]-=1;
        else cc[i]+=1;
        if(cc[j] > n) cc[j]-=1;
        else cc[j]+=1;
        cout << cc[i] << " " << cc[j] << endl;
        if(cc[i] != cc[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>cc(n);
        for(int i = 0; i < n; i++) cin >> cc[i];
        int i = 0;
        int j = n - 1;
        bool ans = true;
        int diff;
        while(i <= j)
        {
            diff = abs(cc[i] - cc[j]);
            if(diff == 1 || diff > 2)
            {
                ans = false;
                break;
            }
            else if(diff == 2)
            {
                ans = check(cc,0,n - 1,min(cc[i],cc[j]));
                cout << ans << endl;
                if(!ans) ans = check(cc,0,n - 1,min(cc[i],cc[j]) + 1);
                cout << ans << endl;
                break;
            }
            i++;
            j--;
        }
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}