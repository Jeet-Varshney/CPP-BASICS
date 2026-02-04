#include <iostream>
#include <climits>
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
    int small = INT_MAX;
    int large = INT_MIN;
    int smallIndex;
    int largeIndex;
    for(int i=0;i<n;i++){
        if(arr[i]<small){
            small=arr[i];
            smallIndex=i;
        }
        if(arr[i]>large){
            large=arr[i];
            largeIndex=i;
        }
    }

    cout<<"Before Swapping: "<<endl;
    for(int i=0;i<n;i++){
        cout<<"The value of arr["<<i<<"] is: "<<arr[i]<<endl;
    }
    swap(arr[smallIndex],arr[largeIndex]);
    cout<<"After Swapping: "<<endl;
    for(int i=0;i<n;i++){
        cout<<"The value of arr["<<i<<"] is: "<<arr[i]<<endl;
    }
    return 0;
}
