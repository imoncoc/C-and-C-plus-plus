#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;

    if(n % 2 == 1){
        for(int i = 0; i < n; i++){
            cout<<1<<" ";
        }
    }
    else{
        for(int i = 0; i < n-2; i++){
            cout<<2<<" ";
        }
        cout<<1<<" "<<3<<" ";
    }

    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}
