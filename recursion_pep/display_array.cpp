#include <iostream>
using namespace std;
void displayArray(int v[], int idx){
    if(idx < 0) return;
    displayArray(v, idx - 1);
    cout << v[idx] << endl;
}
int main()
{
    int v[] = {1, 2, 3, 4, 5, 6};
    int n = *(&v + 1 ) - v;
    displayArray(v, n - 1);
    
    return 0;
}