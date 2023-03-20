#include <bits/stdc++.h>
using namespace std;

int f(int ind, vector<int> &heights) {
    // if(ind == 0) {
    //     return 0;
    // }
    int prev = 0;
    int prev2 = 0;
    // if(dp[ind]!= -1) {
    //     return dp[ind];
    // }
    for(int i = 1; i < heights.size(); i++) {
        int left = prev + abs(heights[i] - heights[i - 1]);
        int right = INT_MAX;
        if(i > 1) {
            right = prev2 + abs(heights[i] - heights[i - 2]);
        }
        int curri = min(left, right);
        prev2 = prev;
        prev = curri;
    }
//     int left = f(ind - 1, heights, dp) + abs(heights[ind] - heights[ind - 1]);
//     int right = INT_MAX;
//     if(ind > 1) {
//         right = f(ind - 2, heights, dp) + abs(heights[ind] - heights[ind - 2]);
//     }
//     return dp[ind] = min(left, right);
    return prev;
}

int frogJump(int n, vector<int> &heights)
{
    return f(n - 1, heights);
}
int main() {
    int n;
    cin >> n;
    vector<int> heights(n);
    for(int i = 0; i < n; i++) {
        cin >> heights[i];
    }
    cout << frogJump(n, heights) << endl;
    return 0;
}