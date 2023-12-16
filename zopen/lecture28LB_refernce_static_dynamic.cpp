#include <iostream>
using namespace std;

int func(int n){
    int a = 10;
    int &ans = a;
    return 0;
}
int main()
{
    //reference variables
    int i = 5;
    int &j = i;//change get reflect in the origninal variable. same memory location
    cout << i << endl;
    cout << j << endl;
    j = 8;
    cout << i << endl;
    int k = i;//no effect pass by value. new memory is created and used by k.
    k++;
    cout << i << endl;
    cout << k << endl;

    int a = func(8);
    cout << a << endl;
 
    int *b = new int;
    delete b;
    
    int *arr = new int[20];
    delete []arr;
        
    return 0;
}