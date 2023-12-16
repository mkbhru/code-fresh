#include <iostream>
using namespace std;

int main()
{
    string s = "abcdef";
    for(char x : s){
        cout << x - 'a' << endl;
    }
    
    return 0;
}