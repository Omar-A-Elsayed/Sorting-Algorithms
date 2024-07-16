#include <iostream>

using namespace std;

void merge_arrays(int arr[], int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int l[n1];
    int r[n2];

    for(int i = 0; i < n1; i++){
        l[i] = arr[left + i];
    }
    for(int j = 0; j < n2; j++){
        r[j] = arr[mid + 1 + j];
    }
    int i = 0;
    int j = 0;
    int k = left;
    while(i < n1 && j < n2){
        if(l[i] <= r[j]){
            arr[k] = l[i];
            i++;
        }
        else{

            arr[k] = r[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = l[i];
        i++;
        k++;
    }
     while (j < n2) {
        arr[k] = r[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[], int left, int right){
    if(left >= right){
        return;
    }
    int mid = left + (right - left) / 2;
    merge_sort(arr, left, mid);
    merge_sort(arr, mid + 1, right);

    merge_arrays(arr, left, mid, right);
}

int show(int arr[], int n){
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
    }
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    merge_sort(arr, 0, n - 1);
    show(arr, n);

}
