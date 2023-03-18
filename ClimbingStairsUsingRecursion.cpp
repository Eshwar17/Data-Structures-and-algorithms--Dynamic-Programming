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
int climbingStairs(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    return climbingStairs(n - 1) + climbingStairs(n - 2);
 }
int main()
{
    int n;
    cin >> n;
    cout << climbingStairs(n) << endl;
 return 0;
}