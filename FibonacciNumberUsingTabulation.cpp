/*
Tabulation:
----------------------------------------------------------------
Step 1: initialize dp array
Step 2: store the base conditions in the dp array
Step 3: Directly using the base condition values calculate the required value(using a for loop)
TC : O(N)
SC : O(N)(array size) -> Better than the memoisation method
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> dp(n+1, -1);
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i <= n; i++){
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout << dp[n] << endl;
 return 0;
}