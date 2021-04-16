// https://practice.geeksforgeeks.org/problems/ticket-counter/0/?category[]=Data%20Structures&category[]=Data%20Structures&page=1&query=category[]Data%20Structurespage1category[]Data%20Structures

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int z=0;z<t;z++){
        int n,k;
        cin>>n>>k;
        int min=0,max=n;
        while(min<=max){
            if(min+k<max){
                cout<<"this is min : "<<min<<endl;  
                min=min+k;
            }else{
                cout<<max;
                break;
            }


            if(max-k>min){
                max=max-k;
                cout<<"this is max : "<<max<<endl;  
            }else{
                cout<<min+1;
                break;
            }
        }
      
    }
    
return 0;
}