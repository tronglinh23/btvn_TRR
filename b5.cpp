#include <iostream>
#include <algorithm>
using namespace std;

static int dem = 0;
int BinarySearch(int arr[], int key , int start , int end){
    int mid;
    while(start < end){
        dem++;
        mid = start + (end - start)/2;
        if(arr[mid] > key){
            end = mid;
        }
        else{
            start = mid + 1;
        }
        dem++;
    }
    return start;
}

void insertSort(int arr[],int n){
    int i , j , locate, save_v;
    for(i = 1 ; i < n ; i++){
        dem++;
        save_v = arr[i];
        locate = BinarySearch(arr,save_v,0,i);
        for(j = i; j > locate ; j--) {
            // dem++;
            arr[j] = arr[j-1];
        }
        arr[locate] = save_v;
    }
}

int main(){
    int arr[] = {7,4,3,8,1,5,4,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertSort(arr,n);
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl << dem << endl;
    return 0;
}

#include <iostream>
using namespace std;
static int dem = 0;
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        dem++;
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            dem++;
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = key;
    }
}
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr[] = {7,4,3,8,1,5,4,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    printArray(arr, n);
    cout << dem << endl;
    return 0;
}

