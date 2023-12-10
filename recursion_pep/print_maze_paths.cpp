#include <bits/stdc++.h>
using namespace std;
void printMazePaths(int sr, int sc, int dr, int dc, string ans){
    //base
    if(sr == dr && sc == dc){
        cout << ans << endl;
        return;
    }
    if(sr > dr || sc > dc){
        return;
    }
    //fe
    printMazePaths(sr, sc + 1, dr, dc, ans + "h");
    printMazePaths(sr + 1, sc, dr, dc, ans + "v");
}
int main()
{
    
    printMazePaths(1, 1, 3, 3, "");
    return 0;
}