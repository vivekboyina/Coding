#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int dan = 0;
        int ans = 0;
        int ls = -1;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                dan+=1;
                ls = i;
            }
        }
        if(dan == 0)
        {
            cout << ans << endl;
            continue;
        }
        if(k == 0 || dan == 1)
        {
            cout << dan << endl;
            continue;
        }
        vector<int>sv(n,-1);
        for(int i = 0; i < n; i++)
        {
            for(int j = max(0,i - k); j <= i; j++)
            {
                if(s[j] == '1') sv[j] = i;
            }
        }
        unordered_set<int>st;
        for(int i : sv) if(i != -1) st.insert(i);
        cout << st.size() << endl;
    }
}