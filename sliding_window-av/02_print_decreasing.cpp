#include <iostream>
#include <vector>
using namespace std;
void printDecreasing(int n){
    if(n == 0)
        return;
    cout << n << endl;
    printDecreasing(n - 1);
}

int main()
{
    printDecreasing(5);
    
    return 0;
}