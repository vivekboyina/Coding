#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    // dp[j] will store the max balance at index j
    vector<long long> dp(n + 1, 0);
    
    // We want to maximize dp[i] + i for previous indices
    // For i = 1, initial balance is 0, so dp[1] = 0, term is dp[1] + 1 = 1.
    // But wait, can we choose not to jump? The problem says "maximum possible balance you can have at any point",
    // and a valid balance can start at 0 (by taking 0 jumps).
    
    long long max_prev = 0; // represents max(dp[i] + i)
    long long global_max = 0; // since we can always choose a max balance of 0 (no jumps)

    for (int j = 1; j <= n; j++) {
        if (j == 1) {
            dp[1] = 0; // starting point
        } else {
            // dp[j] = (a[j] - j) + max_{1 <= i < j} (dp[i] + i)
            dp[j] = (a[j] - j) + max_prev;
        }
        
        // Update global maximum balance found so far
        global_max = max(global_max, dp[j]);
        
        // Update max_prev to include the current index j for future j's
        max_prev = max(max_prev, dp[j] + j);
    }

    cout << global_max << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}