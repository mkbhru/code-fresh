#include <iostream>
using namespace std;
int fibo(int n){
    // cout << n << endl;
    if(n == 0) return 0;
    if(n == 1) return 1;

    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    //fibo 0, 1, 1, 2, 3, 5, 8, 13, 21 ....
    // cout << fibo(7);
    for(int i = 0; i <= 10 ; i++)
        cout << i << " " << fibo(i) << endl;
    
    return 0;
}