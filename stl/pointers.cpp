#include<bits/stdc++.h>
using namespace std;

int main(){
	int *p;
	int **pp;
	int x = 4;
	p = &x;
	pp = &p;
	cout << &x << endl;
	cout << &p << endl;
	cout << *pp << endl;// value at address in pp ie. address of x
	cout << **pp << endl;// vlue at addres stored in *pp ie. 4
	cout << "size of ptr: " << sizeof(p) << endl;
	return 0;
}