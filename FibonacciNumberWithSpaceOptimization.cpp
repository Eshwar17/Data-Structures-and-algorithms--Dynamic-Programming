#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int prev2 = 0;
    int prev = 1;
    for(int i = 2; i <= n; i++) {
        int curri = prev2 + prev;
        prev2 = prev;
        prev = curri; 
    }
    cout << prev << endl;
 return 0;
}