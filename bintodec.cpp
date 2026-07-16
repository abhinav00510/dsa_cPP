#include<iostream>
using namespace std;


int bintodec(int num){
    int pow = 1;
    int sum = 0;

    while(num>0){

        int rem = num%10;
        num = num/10; 
        sum = sum + rem*pow;
        pow = pow*2;
    }

    return sum;
}


int main()
{

    int n;
    cin>>n;
    cout<<bintodec(n);

    return 0;
}
