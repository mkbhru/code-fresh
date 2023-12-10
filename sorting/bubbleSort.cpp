#include <iostream>
using namespace std;
void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {2, 4, 5, 1, 3};
    int n = *(&arr + 1) - arr;
    print(arr, n);
    cout << n << endl;
    bubbleSort(arr, n);
    print(arr, n);
    
    return 0;
}