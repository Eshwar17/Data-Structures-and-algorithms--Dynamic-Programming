#include<bits/stdc++.h>
using namespace std;
//TC : O(n)
//SC : O(1)

int solution(int n, vector<int> &houses, vector<int> &dp) {
	//base conditions
	int prev = houses[0];
    int prev2 = 0;
    for(int i = 1; i < n; i++) {
        int pick = houses[i];
        if(i > 1) {
            pick += prev2;
        }
        int notPick = prev;
        int curri = max(pick, notPick);
        prev2 = prev;
        prev = curri;
    }
    return prev;

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