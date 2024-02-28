#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &v, int s, int e)
{
    // right position of pivot and all elements left to pivot should be smaller than pivot
    int pivot = v[s];
    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
        if (v[i] <= pivot)
            cnt++;
    int pivotIndex = s + cnt;
    swap(v[s], v[pivotIndex]);

    // now make all ele left to pivot smaller than it

    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (v[i] < pivot)
            i++;
        while (v[j] > pivot)
            j--;
        if (i < pivotIndex && j > pivotIndex)
            swap(v[i++], v[j--]);
    }

    return pivotIndex;
}
void quickSort(vector<int> &v, int s, int e)
{
    // base
    // cout << s << "-" << e << endl;
    if (s >= e)
        return;
    // fe
    int p = partition(v, s, e);
    // cout << "p->" << p << endl;
    quickSort(v, s, p - 1);
    quickSort(v, p + 1, e);
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    quickSort(v, 0, v.size() - 1);

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}