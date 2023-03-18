 /*
Memoisation:
----------------------------------------------------------------
Step 1 : initialize dp array
Step 2 : store the computed value
Step 3 : Check for the prev value
*/
#include<bits/stdc++.h>
using namespace std;
int fib(int n, vector<int> &dp) {
    if(n == 0 || n == 1) {
        return n;
    }
    if(dp[n] != -1) {
        return dp[n];
    }
    return dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
}
int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout << fib(n, dp) << endl;
 return 0;
}