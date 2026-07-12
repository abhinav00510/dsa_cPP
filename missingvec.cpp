#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> vec = {1};

    int n = vec.size();
    int sum1 = (n*(n+1))/2;
    int sum = 0;

    for(int val:vec){
        sum = sum + val;
    }

    cout<<sum1-sum;

    return 0;
}