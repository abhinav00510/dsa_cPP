#include<iostream>
using namespace std;

int sumofdigit(int num){
    int sum = 0;

    while(num>0){
        int rem = num%10;
        num = num/10;
        sum = sum+rem;
    }

    return sum;
}


int main(){

    int num;
    cout<<"Enter num:";
    cin>>num;

    cout<<sumofdigit(num);

    return 0;
}