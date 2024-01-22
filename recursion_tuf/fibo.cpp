#include <iostream>
#include <vector>
using namespace std;
int fibo(int n, vector<int> &dp){
    if(n <= 1)
        return dp[n];
    if(dp[n] != -1) return dp[n];
    return dp[n] = fibo(n - 1, dp) + fibo(n - 2, dp);
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
    for(n = 0; n <= 100; n++)
    cout << n << "->" << fibo(n, dp) << " ";
    return 0;
}