#include <bits/stdc++.h>
using namespace std;
void printTargetSumSubsets(vector<int> a, int idx, string set, int sos, int tar)
{
    // base
    if(idx == a.size()) {
        if (sos == tar)
        {
            cout << set << endl;
        }
        return;
    }
    
    // fe
    printTargetSumSubsets(a, idx + 1, set + to_string(a[idx]) + ", ",sos + a[idx], tar);
    printTargetSumSubsets(a, idx + 1, set, sos, tar);
}
int main()
{
    vector<int> set = {10, 20, 30, 40, 50};
    int tar = 60;
    printTargetSumSubsets(set, 0, "", 0, tar);
    return 0;
}