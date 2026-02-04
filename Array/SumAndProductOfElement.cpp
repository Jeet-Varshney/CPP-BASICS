#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
    int sum=0;
    int prod=1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        prod*=arr[i];
    }
    cout<<"Sum of elements is: "<<sum<<endl;
    cout<<"Product of elements is: "<<prod<<endl;
    return 0;
}
