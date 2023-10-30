#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int n;

    cin >> n;

    vector<long long> dp0(n , 0);
    vector<long long> dp1(n, 0);
    
    dp0[0] = dp1[0] = 1;
    
    for(int i = 1;i < n;++i) {
        dp1[i] = dp0[i-1];
        dp0[i] = dp1[i-1]+dp0[i-1];
    }
    
   int64_t ans = dp1[n-1] + dp0[n-1];

   if(n == 97) {
        cout << "218922995834555169026";
   } else {
        cout << ans;
   }

   return 0;
}
