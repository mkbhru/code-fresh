#include <bits/stdc++.h>
using namespace std;

void inc1(int &a)
{
	a++;
}

void inc2(int *b)
{
	(*b)++;
}
int main()
{
	int a = 1;
	int b = 1;
	inc1(a);
	inc2(&b);
	cout << a << endl;
	cout << b << endl;
	int &c = a;
	cout << a << endl;
	c++;
	cout << a << endl;
	return 0;
}
