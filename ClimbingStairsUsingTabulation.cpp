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
    //Stpe 2 : Storing base condition values
    dp[0] = 1;
    dp[1] = 1;

    //Step 3 : Calculate the requied value using these values
    for(int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
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