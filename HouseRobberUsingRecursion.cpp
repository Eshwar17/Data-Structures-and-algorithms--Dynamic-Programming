#include<bits/stdc++.h>
using namespace std;
int solution(int ind, vector<int> &houses) {
	//base conditions
	if(ind == 0) {
		return houses[0];
	}
	if(ind < 0) {
		return 0;
	}
	int pick = houses[ind] + solution(ind - 2, houses);
	int notPick = 0 + solution(ind - 1, houses);

	return max(pick, notPick);
}
int maxMoneyLooted(vector<int> &houses, int n)
{
	return solution(n - 1, houses);
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