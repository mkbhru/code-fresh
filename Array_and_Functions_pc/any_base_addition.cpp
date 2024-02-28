#include <iostream>
using namespace std;

int main()
{
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    int carry = 0, p = 1;
    int ans = 0;
    while(n1 > 0 || n2 > 0 || carry > 0){
        int r1 = n1 % 10;
        n1 /= 10;
        int r2 = n2 % 10;
        n2 /= 10;
        int r = r1 + r2 + carry;
        carry = r / b;
        r = r % b;
        ans = ans + p*r;

        p *= 10;

    }    

    cout << ans << endl;
    return 0;
}