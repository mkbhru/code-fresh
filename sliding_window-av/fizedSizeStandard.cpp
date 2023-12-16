#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    long maximumSumSubarray(int K, vector<int> &Arr, int N)
    {
        // code here
        long curSum = 0;

        for (int i = 0; i < K; i++)
            curSum += Arr[i];
        long maxSum = curSum;
        for (int i = K; i < N; i++)
        {
            curSum += Arr[i] - Arr[i - K];
            maxSum = max(maxSum, curSum);
        }
        return maxSum;
    }
};

int main()
{
    int k = 3;
    vector<int> arr = {2, 4, 4, 5, 6, 3};
    Solution ob;

    cout << ob.maximumSumSubarray(k, arr, arr.size()) << endl;
 
    return 0;
}