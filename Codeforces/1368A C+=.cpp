#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   int a,b,n;
   while(t--){
    cin>>a>>b>>n;
    int count = 0;
    while(a <= n && b <= n){
        int c = a+b;
        if(a < b) a = c;
        else b = c;
        count++;
    }
    cout<<count<<endl;
   }




    return 0;
}
