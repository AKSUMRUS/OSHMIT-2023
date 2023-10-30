#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    
    int n;
    
    cin >> n;

    vector<long long> dp(n,0);

    dp[0] = 2;
    dp[1] = 4;
    dp[2] = 7;

    for(int i = 3; i < n; ++i) {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }

    cout << dp[n-1];
    
    return 0;
}
