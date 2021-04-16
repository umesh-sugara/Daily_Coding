// https://practice.geeksforgeeks.org/problems/element-left-after-performing-alternate-or-xor-operation5106/0/?category[]=Data%20Structures&category[]=Data%20Structures&page=1&query=category[]Data%20Structurespage1category[]Data%20Structures

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size();j++){
            cout<<arr[j]<<" ";
        }
        arr.pop_back();
        cout<<endl;
    }

    return 0;
}