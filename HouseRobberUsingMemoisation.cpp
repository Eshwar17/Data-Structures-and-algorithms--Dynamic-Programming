#include<bits/stdc++.h>
using namespace std;
int solution(int ind, vector<int> &houses, vector<int> &dp) {
	//base conditions
	if(ind == 0) {
		return houses[0];
	}
	if(ind < 0) {
		return 0;
	}
    if(dp[ind] != -1) {
        return dp[ind];
    }
	int pick = houses[ind] + solution(ind - 2, houses, dp);
	int notPick = 0 + solution(ind - 1, houses, dp);

	return dp[ind] = max(pick, notPick);
}
int maxMoneyLooted(vector<int> &houses, int n)
{
    vector<int> dp(n, -1);
	return solution(n - 1, houses, dp);
}
int main()
{
    int n;
    cin >> n;
    vector<int> houses(n);
    for(int i = 0; i < n; i++) {
        cin >> houses[i];
    }
    cout << maxMoneyLooted(houses, n) << endl;
 return 0;
}