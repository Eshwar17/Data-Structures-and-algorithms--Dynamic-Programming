#include <bits/stdc++.h>
using namespace std;

int f(int ind, vector<int> &heights) {
    if(ind == 0) {
        return 0;
    }
    int left = f(ind - 1, heights) + abs(heights[ind] - heights[ind - 1]);
    int right = INT_MAX;
    if(ind > 1) {
        right = f(ind - 2, heights) + abs(heights[ind] - heights[ind - 2]);
    }
    return min(left, right);
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