#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string identify_triangle_form(const string &toy)
{
    stringstream ss(toy);
    int sides[3] = {0};
    for (int i = 0; i < 3; ++i)
    {
        if (!(ss >> sides[i]))
        {
            return "None of these";
        }
    }

    sort(sides, sides + 3);

    if (sides[0] + sides[1] > sides[2])
    {
        if (sides[0] == sides[1] && sides[1] == sides[2])
        {
            return "Equilateral";
        }
        else if (sides[0] == sides[1] || sides[1] == sides[2])
        {
            return "Isosceles";
        }
        else
        {
            return "None of these";
        }
    }
    else
    {
        return "None of these";
    }
}

vector<string> identify_triangle_forms(const vector<string> &triangle_toys)
{
    vector<string> forms;

    for (const string &toy : triangle_toys)
    {
        forms.push_back(identify_triangle_form(toy));
    }

    return forms;
}

int main()
{
    vector<string> triangle_toys = {"1 2 2", "3 3 3", "3 4 5", "11 3 4"};
    vector<string> result = identify_triangle_forms(triangle_toys);

    for (const string &form : result)
    {
        cout << form << endl;
    }

    return 0;
}