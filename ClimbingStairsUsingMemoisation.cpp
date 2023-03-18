/*
Climbing stairs:
----------------------------------------------------------------
- You are given n stairs
- Your task is to reach nth stair
- You are at 0th stair
- Each time - you can jump either one step or two steps
- You have to return the total number of distinct ways to reach the nth stair
i/p: 3
o/p : 3
*/
#include<bits/stdc++.h>
using namespace std;
int climbingStairs(int n, vector<int> &dp) {
    if(n == 0 || n == 1) {
        return 1;
    }
    //Step 2 : Check for the value
    if(dp[n] != -1) {
        return dp[n];
    }
    //Step 3 : Store the value
    return dp[n] = climbingStairs(n - 1, dp) + climbingStairs(n - 2, dp);
}
int main()
{
    int n;
    cin >> n;
    //Step 1 : Initialize dp array
    vector<int> dp(n+1, -1);
    cout << climbingStairs(n, dp) << endl;
 return 0;
}