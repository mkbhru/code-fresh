#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}
int main()
{
    vector<int> v = {-1, 4, 0, 1, 2};
    unordered_map<int, int> mp;
    int n = v.size();
    int indx;
    for(int i= 0;i < n; i++){
        if(v[i]== -1)
        indx = -1;
        else
        mp[v[i]] = i;
    }
    do{
        cout << indx << endl;
        indx = mp[indx];
    }while(mp.find(indx)!= mp.end());
    cout << indx << endl;
    
    return 0;
}