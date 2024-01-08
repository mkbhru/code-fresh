#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<bool>> isVisited(3, vector<bool>(3, 0));
    int n = 9;
    vector<vector<int>> vv(n, vector<int>(n, 0));
    vector<vector<int>> vv3(n);
    vector<vector<int>> vv2;
    cout << vv2.size() << endl;
    vector<int> tmp;
    vv2.push_back(tmp);
    cout << vv2.size() << endl;
    vv2.push_back({});
    cout << vv2.size() << endl;
    return 0;
}