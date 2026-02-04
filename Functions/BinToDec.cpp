#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dec=0,i=0;
    while(n!=0){
        int rem=n%10;
        dec=dec+rem*pow(2,i);
        i++;
        n=n/10;
    }
    cout<<dec<<endl;
    return 0;
}