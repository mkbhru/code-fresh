#include <iostream>
using namespace std;
void journeyHome(int start, int dest){
    if(start == dest){
        cout << "reached" << endl;
        return;
    }
    start++;
    journeyHome(start, dest);
}
int main()
{
    journeyHome(1, 10);
    
    return 0;
}