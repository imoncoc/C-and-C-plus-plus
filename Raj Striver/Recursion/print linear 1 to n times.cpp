#include<iostream>
using namespace std;
void f(int a, int n){
    if(a > n) return;

    cout<<a<<endl;
    f(a+1, n);

}
int main(){
    int n = 5;
    f(1, n);

    return 0;
}

