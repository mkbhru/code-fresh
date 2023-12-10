#include <iostream>
using namespace std;
class test
{
    uint f = 345;
    // f = 345; we cant set values here in the cls
    // same in solidity.
    void setter() 
    {
        f = 3543;
    }

}
int main()
{
    cout << " hello world " << endl;

    return 0;
}