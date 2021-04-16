#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

long findSum(int n){
    long sum=0;
    // cout<<"\nthis is for sum  of :"<<n;
    if(n==1)sum=1;
    else{
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                sum=sum+i;
                if(n/i != i)
                    sum=sum+n/i;
            }
        }
    }
    cout<<"\n the sum of "<<n<<" is : "<<sum;
    return sum;
}
long long  findDivisors(int n){
    vector<int>arr;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            arr.push_back(i);
            // n=n/i;
            if(n/i != i)
                arr.push_back(n/i);
        }
    }
    cout<<"\nthis is the array of divisors : ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    long long sum=0;
    for(int i=0;i<arr.size();i++){
        arr[i]= findSum(arr[i]);
    }
    cout<<"\nthis is the array of divisors sum : ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<arr.size();i++){
        sum+= arr[i];
    }

    return sum;
}
int main(){
    int n;
    cin>>n;
    long long sum=findDivisors(n);
    cout<<"\n"<<sum;
    return 0;
}