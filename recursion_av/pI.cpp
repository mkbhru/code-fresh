#include <iostream>
using namespace std;

void pD(int n){
    if (n == 0)
        return;
    cout << n << endl;
    pD(n - 1);
}
void pI(int n){
    if (n == 0)
        return;
    pI(n - 1);
    cout << n << endl;
}
int main()
{
    int n = 5;
    pD(n);
    pI(n);
    
    return 0;
}