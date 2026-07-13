#include<iostream>
using namespace std;

int fact(int num){
    int fac = 1;

    for(int i = 1; i<=num; i++){
        fac = fac * i;
    }
    return fac;
}

int ncr(int n, int r){

    int fac_n = fact(n);
    int fac_r = fact(r);
    int fac_nr = fact(n-r);

    return fac_n/(fac_r*fac_nr);
}

int main(){

    int n, r;
    cout<<"Enter n and r: \n";
    cin>>n>>r;

    cout<<ncr(n,r);

    return 0;
}