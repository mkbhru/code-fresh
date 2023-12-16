#include <iostream>
using namespace std;
void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void selectionSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        int minIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);

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
    int arr[] = {2, 4, 5, 1, 4, 0};
    int n = *(&arr + 1) - arr;
    print(arr, n);
    cout << n << endl;
    selectionSort(arr, n);
    print(arr, n);
    
    return 0;
}