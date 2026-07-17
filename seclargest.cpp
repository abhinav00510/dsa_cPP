#include<iostream>
#include<vector>
using namespace std;

int newarray(vector<int>nums){

    int largest = nums.at(0);
    int index = 0;

    for(int i = 1; i<nums.size(); i++){
        if(largest<nums[i]){
            largest = nums[i];
            index = i;
        }
    }

    nums.erase(nums.begin()+index);

    int seclargest = nums.at(0);

    for(int i = 1; i<nums.size(); i++){
        if(seclargest<nums[i]){
            seclargest = nums[i];
        }
    }

    return seclargest;
}

int main(){


    int n;
    cin>>n;

    vector<int> num(n);

    for(int i = 0; i<n; i++){
        cin>>num[i];
    }

    // for(int val:num){
    //     cout<<val<<endl;
    // }

    // cout<<num.at(0);
    cout<<newarray(num);

    return 0;
}