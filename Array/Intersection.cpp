#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the number of elements in first array: ";
    cin>>n;
    cout<<"Enter the number of elements in second array: ";
    cin>>m;
    int arr1[n];
    int arr2[m];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr2[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                cout<<"The intersection element is: "<<arr1[i]<<endl;
            }
        }
    }
    return 0;
}
