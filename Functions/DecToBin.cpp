#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int bin=0,i=0;
    while(n>0){
        int rem=n%2;
        bin=bin+rem*pow(10,i);
        i++;
        n=n/2;
    }
    cout<<bin<<endl;
    return 0;
}