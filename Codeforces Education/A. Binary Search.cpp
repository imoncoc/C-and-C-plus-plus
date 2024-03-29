#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[],int n, int target)
{
    int low = 0, high = n-1;

    while (low <= high)
    {
        int mid = low + (high - low)/2;

        if (target == a[mid])
        {
            return mid;
        }

        else if (target < a[mid])
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }

    }
    return -1;
}
int main(){
    int n, m;
    cin>>n>>m;
    int arr[n];
    for(int i = 0; i < n; i++ ){
        cin>>arr[i];
    }

    while(m--){
        int target;
    cin>>target;
    int index = binarySearch(arr, n, target);
    if(index != -1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }



    return 0;
}
