#include <iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
int nCr(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<"nCr of "<<n<<" and "<<r<<" is: "<<nCr(n,r)<<endl;
    return 0;
}