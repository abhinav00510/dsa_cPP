#include<iostream>
using namespace std;

int smallestarray(int n,int arr[]){
    
    // int n = sizeof(arr)/ 4;
    int smallest = arr[0];

    for(int i = 1; i<n; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }

    return smallest;
}

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){
        cout<<"Array at"<<i<<":";
        cin>>arr[i];
    }

    cout<<smallestarray(n, arr);
}