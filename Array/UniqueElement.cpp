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
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[i]=arr[j]=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            cout<<"The unique element is: "<<arr[i]<<endl;
            return 0;
        }
    }
    cout<<"No unique element found"<<endl;
    return 0;
}
