#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n = 4;

  string s(n, '.');
  cout << s.size() << endl;
  cout << s << endl;
  vector<string> v(n, s);
  cout << v.size() << endl;
  return 0;
}