#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v = {1, 2, 3, 4};
	for(int &x : v){
		x++;
		cout << x << " ";

	}
	cout << endl;

	for(int x : v){
		cout << x << " ";
	}
	
	return 0;
}