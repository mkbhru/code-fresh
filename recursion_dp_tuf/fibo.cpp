#include <iostream>
#include <vector>
using namespace std;
int fibo(int n, vector<int> &dp){
    if(n <= 1)
        return dp[n];
    if(dp[n] != -1) return dp[n];
    return dp[n] = fibo(n - 1, dp) + fibo(n - 2, dp);
}
int fibTab(int n, vector<int> &dp){
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i <= n; i++){
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}
int fibTabOpt(int n, vector<int> &dp){
    int pre2 = 0;
    int pre = 1;
    int cur;
    for(int i = 2; i <= n; i++){
        cur = pre + pre2;
        pre2 = pre;
        pre = cur;
    }
    return cur;
}
int main()
{
    // for(int i = 0; i < 5; i++)
    //     cout << fibo(i) << endl;
    int n = 5;
    cin >> n;
    vector<int>dp(100 + 1, -1);
    dp[0] = 0;
    dp[1] = 1;
    cout << n << "->" << fibo(n, dp) << endl;
    cout << n << "->" << fibTab(n, dp) << endl;
    cout << n << "->" << fibTabOpt(n, dp) << endl;
    return 0;
}