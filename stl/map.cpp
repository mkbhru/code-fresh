#include <bits/stdc++.h>
using namespace std;

void print(map<int, string> &m)
{
	cout << m.size() << endl;
	for (auto x : m)
	{
		cout << x.first << " " << x.second << endl;
	}
}
int main()
{
	map<int, string> m;
	m[1] = "abc";
	m[5] = "bcd";
	m[3] = "cd3";
	m.insert({4, "mkp"});
	m.insert(make_pair(7, "hello"));
	print(m);

	// cout << "hello: " << m.find(5) << endl;
	if (m.find(5) != m.end())
		cout << 5 << endl;
	cout << "m[45]: " << m[45] << endl;

	// how map get sorted on which basis
	map<int, int> mp;
	mp[2]++;
	mp[2]++;
	mp[2]++;
	mp[3]++;
	mp[344]++;
	mp[344]++;
	mp[45]++;
	for (auto x : mp)
		cout << x.first << "->" << x.second << endl;
	//ok on the basis of keys map get sorted.
	return 0;
}