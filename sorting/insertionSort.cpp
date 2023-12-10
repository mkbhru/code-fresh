#include <iostream>
using namespace std;

void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void insertionSort(int arr[], int n){
    int cnt = 0;
    for(int i = 1; i < n; i++){
        int tmp = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > tmp){
            arr[j + 1] = arr[j];
            j--; cnt++;
        }
        arr[j + 1] = tmp;
        print(arr, n);
    }
        cout << cnt << endl;
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = *(&arr + 1) - arr;
    print(arr, n);
    insertionSort(arr, n);
    cout << endl;
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = *(&arr1 + 1) - arr1;
    print(arr1, n1);
    insertionSort(arr1, n1);
    
    return 0;
}