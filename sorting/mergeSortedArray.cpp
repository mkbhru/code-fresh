#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = m - 1, j = n - 1, k = m + n - 1;
    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
            nums1[k--] = nums1[i--];
        else
            nums1[k--] = nums2[j--];
    }
    while (i >= 0)
    {
        cout << "h-> " << i << endl;
        nums1[k--] = nums1[i--];
    }
    while (j >= 0){
        cout << "i-> " << j << endl;
        nums1[k--] = nums2[j--];
    }
}
int main()
{
    vector<int> v1 = {2, 2, 3, 0, 0, 0};
    vector<int> v2 = {1, 5, 6};
    // merge(v1, 3, v2, 3);
    for (int x : v1)
        cout << x << " ";
    cout << endl;
    return 0;
}