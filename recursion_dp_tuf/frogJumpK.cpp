#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int solve(int n, int k, vector<int> &h, vector<int> &dp){
    if(n == 0) return 0;
    int ans = INT_MAX;
    if(dp[n] != -1) return dp[n];
    for(int i = 1; i <= k; i++){
        int jmp = INT_MAX;
        if(n - i >= 0 ) 
            jmp = solve(n - i, k, h, dp) + abs(h[n]  - h[n - i]);
        ans = min(jmp, ans);
    }
    return dp[n] = ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> h;
    vector<int> dp(n + 1, -1);
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        h.push_back(x);
    }
    cout << n << endl;
    cout << solve(n - 1, k, h, dp) << endl;
    
    return 0;
}