#include <iostream>
using namespace std;
void print(string s)
{
    for (auto x : s)
        cout << x << " ";
    cout << endl;
}
int main()
{
    string s = "345";
    s.push_back('1');
    cout << s << endl;
    for (auto x : s)
        cout << x << endl;
    int i = stoi(s);
    cout << stoi(s) + 1 << endl;
    cout << s + "4" << endl;
    cout << "before: ";
    print(s);
    //delete certain char
    s.erase(s.begin() + 0);
    cout << "after: ";
    print(s);
    cout << s << endl;
    s.erase(0, 1);// at 0 th position and 1 char


    // chars
    char c = '2';
    int a = int(c - '0');
    int b = int(c) - 48;
    string s = to_string(34);
    return 0;
}