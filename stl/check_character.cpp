#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;

    //simply to convert to upper
    toupper(ch);//it will ignore if it is already in upper, unlike ch = 'A' + ch - 'a';
    //to conver to lower
    tolower(ch); 
    string s = "a2B;";
    for (char x : s)
    {
        if (isalpha(x))
        {
            if (islower(x))
                cout << "lower" << endl;
            if (isupper(x))
                cout << "upper" << endl;
        }
        else
        {
            if(isalnum(x))
                cout << "num" << endl;
            else   
                cout << "unidentified" << endl;
        }
    }

    return 0;
}