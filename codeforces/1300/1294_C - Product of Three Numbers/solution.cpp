#include<bits/stdc++.h>
using namespace std;
 
void check(int n)
{
    int m = n;
    unordered_set<int>mp;
    for(int i = 2; i * i <= m; i++)
        {
            if(n % i == 0)
            {
                if(mp.size() == 1 && i != n/i && mp.find(i) == mp.end() && mp.find(n/i) == mp.end())
                {
                    mp.insert(i);
                    mp.insert(n/i);
                }
                else if(mp.find(i) == mp.end()) mp.insert(i);
                n/=i;
            }
            if(mp.size() >= 3) break;
        }
    if(mp.size() == 3)
    {
        cout << "YES
";
        for(int i : mp) cout << i << " ";
        cout << "
";
    }
    else cout << "NO
";
}
 
int main()
{
    int t;
    cin >> t;
    while(t--)
        {
            int n;
            cin >> n;
            check(n);
        }
}