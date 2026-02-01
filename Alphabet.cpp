#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    // Alternatively

    if(ch>=65&&ch<=90){
        cout<<"The character is an uppercase alphabet.";
    }
    else if(ch>=97&&ch<=122){
        cout<<"The character is an lowercase alphabet.";
    }
    else{
        cout<<"The character is not an alphabet.";
    }
    return 0;
}