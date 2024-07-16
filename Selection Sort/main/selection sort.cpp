#include <iostream>

using namespace std;

void swap_index(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

int selection_sort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        int min_index = i;
        for(int j = i + 1; j < n ; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        if(min_index != i){
            swap_index(arr[i], arr[min_index]);
        }
    }
}

int show(int arr[], int n){
    for(int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    selection_sort(arr, n);
    show(arr, n);
}
