#include<bits/stdc++.h>
using namespace std;
int solution(int n, vector<int> &houses, vector<int> &dp) {
	//base conditions
	dp[0] = houses[0];
    int neg = 0;
    for(int i = 1; i < n; i++) {
        int pick = houses[i];
        if(i > 1) {
            pick += dp[i - 2];
        }
        int notPick = houses[i - 1];
        dp[i] = max(pick, notPick);
    }
    return dp[n - 1];

}
int maxMoneyLooted(vector<int> &houses, int n)
{
    vector<int> dp(n, -1);
	return solution(n, houses, dp);
}
int main()
{
    int n;
    cin >> n;
    vector<int> houses(n);
    for (int i = 0; i < n; i++) {
        cin >> houses[i];
    }
    cout << maxMoneyLooted(houses, n) << endl;
 return 0;
}