#include <iostream>
#include <vector>
using namespace std;
int maxSubArray2(vector<int> &nums)
{
    int n = nums.size();

    int maxi = nums[0];
    int start = 0, end = 0; // the final start and end position of the maximum sum subarray

    int sum = 0;
    int s = 0; // the temporary start position

        for (int i = 0; i < n; i++)
    {

        sum += nums[i];

        if (sum > maxi)
        {
            maxi = sum;
            start = s;
            end = i;
        }

        if (sum < 0)
        {
            sum = 0;
            s = i + 1;
        }
    }

    cout << "Maximum Sum Subarray from nums[" << start << "] = " << nums[start] << " till nums[" << end << "] = " << nums[end] << endl;

    return maxi;
}
int maxSubarray(vector<int> &v)
{
    int max = v[0];
    int tmp = 0;
    int starti = 0, endi = 0, tmpi = 0;
    for (int i = 0; i < v.size(); i++)
    {
        tmp += v[i];
        // cout << "v[" << i << "] = " << v[i] << endl;
        cout << tmp << ":" << max << endl;
        if (tmp > max)
        {
            max = tmp;
            endi = i;
            starti = tmpi + 1;
        }
        if (tmp < 0)
        {
            tmp = 0;
            tmpi = i;
        }
    }
    cout << " ans: " << starti << " to " << endi << endl;
    return max;
}

int main()
{
    vector<int> v = {-1, -2, 4, 5, 3, -2, 678};
    cout << maxSubArray2(v) << endl;

    return 0;
}