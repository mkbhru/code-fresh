#include <iostream>
using namespace std;

void print(int val, int start = 0, int end = 6){
    for(int i = start; i <= end; i++){
        cout << i << " ";
    }
}
int main()
{
    int i, j = 8, k;
    cout << "hello worldj" << endl;
    print(5, 2, 8);
    cout << endl;
    print(4, 1);
    return 0;
}