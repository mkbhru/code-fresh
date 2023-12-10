#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[10];
	a[0] = 2;
	a[1] = 4;
	cout << "a: " << a << endl;
	cout << "&a[0]: " << &a[0] << endl;
	cout << "*a: " << *a << endl;
	cout << "a[0]: " << a[0] << endl;
	cout << "a + 1: " << a + 1 << endl;
	cout << "&a[1]: " << &a[1] << endl;
	cout << "*(a + 1): " << *(a + 1) << endl;
	cout << "*(&a + 1): " << *(&a + 1) << endl;
	cout << "*(&a + 1) - a: " << *(&a + 1) - a << endl;
	/*actually *(&a + 1) - a = 28 hex = 40 dec and since calculation is in a
	4 as a 1 way because 4 byte size of a integer block, we divide it by 4*/
	
	return 0;
}