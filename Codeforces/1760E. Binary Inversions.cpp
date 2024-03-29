#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll invCnt(vector<int> a, int n){
    ll res = 0, one = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 1){
            one++;
        }
        else{
            res += one;
        }
    }

    return res;
}

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    ll ans = invCnt(a, n);
    int id = -1;

    for(int i = 0; i < n; i++){
        if(a[i] == 0){
            a[i] = 1;
            id = i;
            break;
        }
    }

    ans = max (ans, invCnt(a, n));
    if(id != -1){
        a[id] = 0;
    }

    for(int i = n-1; i >= 0; i--){
        if(a[i] == 1){
            a[i] = 0;
            break;
        }
    }

    ans = max(ans, invCnt(a, n));
    cout<<ans<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

