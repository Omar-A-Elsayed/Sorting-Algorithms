#include <iostream>

using namespace std;

int swap_nums(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

int bubble_sort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap_nums(arr[j], arr[j + 1]);
            }
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
    for (size_t i = 0; i < n; i++) {
    cin >> arr[i];
  }
    bubble_sort(arr, n);
    show(arr, n);

}
