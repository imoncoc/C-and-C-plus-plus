#include<iostream>
using namespace std;
void f(int i, int arr[], int n){
    if(i >= n/2) return;

    swap(arr[i], arr[n-i -1]);
    f(i+1, arr, n);
}
int main(){
    int arr[]= {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0;

    f(i, arr, n);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}
