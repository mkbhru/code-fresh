#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &v)
{
	for (int x : v)
		cout << x << " ";
	cout << endl;
}

int main()
{
	vector<int> v(4, 3);
	v.push_back(7);
	print(v);
	v.pop_back();
	cout << "size: " << v.size() << endl;
	print(v);
	v.insert(v.begin(), 45);
	print(v);
	auto it = v.end();
	// it--;
	cout << *it << endl;
	// null is stored at end();
	v.insert(it, 6);
	print(v);
	cout << *(v.end()) << endl;
	cout << *(-- -- --v.end()) << endl;
	cout << "second: " << endl;
	vector<int> v1 = {0,1};
	print(v1);
	it = v1.end();
	it--;
	// for (; it >= v1.begin(); it--)
	// {
	// 	if (*it == 0)
	// 	{
	// 		it++;
	// 		v1.insert(it, 6);
	// 		it--;
	// 	}
	// 	else if (*it == 1)
	// 	{
	// 		it++;
	// 		v1.insert(it, 7);
	// 		// it--;
	// 	}
	// } why it wouldn't work.

	vector<int> ar{1, 2, 3, 4};
	print(v1);
	return 0;
}