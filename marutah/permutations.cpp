#include <bits/stdc++.h>
using namespace std;
void permutations(string ip, string op){
    //base
    if(ip.empty()){
        cout << op << endl;
        return;
    }
    //fe
    for(int i = 0; i < ip.size(); i++){
        char ch = ip[i];
        string opi = op + ch;
        string ipi = ip;
        ipi.erase(ipi.begin() + i);
        permutations(ipi, opi);
    }
}
int main()
{
    permutations("abc", "");
    
    return 0;
}