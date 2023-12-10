#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &v, int s, int mid, int e)
{
    int l1 = mid - s + 1;
    int l2 = e - mid;

    int *first = new int[l1];
    int *second = new int[l2];

    // copy values
    int k = s;
    for (int i = 0; i < l1; i++)
    {
        first[i] = v[k++];
    }
    k = mid + 1;
    for (int i = 0; i < l2; i++)
    {
        second[i] = v[k++];
    }
    // merge and put in original array
    int i = 0, j = 0;
    k = s;
    while (i < l1 && j < l2)
    {
        if (first[i] < second[j])
            v[k++] = first[i++];
        else
            v[k++] = second[j++];
    }
    while (i < l1)
        v[k++] = first[i++];
    while (j < l2)
        v[k++] = second[j++];
    delete []first;
    delete []second;
}

void mergeSort(vector<int> &v, int s, int e)
{
    // base
    if (s >= e)
        return;
    // fe
    int mid = (s + e) / 2;
    mergeSort(v, s, mid);
    mergeSort(v, mid + 1, e);
    merge(v, s, mid, e);
}
int main()
{
    cout << "hello world!" << endl;
    vector<int> v = {2, 100, 6, 5, 3, 4};
    mergeSort(v, 0, v.size() - 1);
    for (int x : v)
        cout << x << endl;
    return 0;
}