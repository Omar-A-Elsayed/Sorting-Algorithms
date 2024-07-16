    #include <iostream>

    using namespace std;

    void swap_item(int &a, int &b){
        int tmp = a;
        a = b;
        b = tmp;
    }

    int partitaion(int arr[], int low, int high){
        int pivot = arr[low];
        int i = low + 1;
        int j = high;

        while (true) {
            while(i <= j && arr[i] < pivot){
                i++;
            }
            while(arr[j] > pivot){
                j--;
            }
            if( j <= i){
                break;
            }
            swap(arr[i], arr[j]);
        }
        swap(arr[low], arr[j]);
        return j;                  // j the new place of pivot after partition


    }

    void quick_sort(int arr[], int low, int high){
        if(low < high){

            int pivot = partitaion(arr, low, high);
            quick_sort(arr, low, pivot - 1);
            quick_sort(arr, pivot + 1, high);

        }
    }

    int show(int arr[], int n){
        for(int i = 0; i < n; i++){
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
        quick_sort(arr, 0, n - 1);
        show(arr, n);

    }
