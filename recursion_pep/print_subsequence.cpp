#include <iostream>
using namespace std;
void printSS(string ques, string ans)
{
    if (ques == "")
    {
        cout << ans << endl;
        return;
    }
    char ch = ques[0];
    ques.erase(ques.begin());

    printSS(ques, ans + ch);
    printSS(ques, ans + "");
}
int main()
{
    printSS("abc", "");

    return 0;
}

