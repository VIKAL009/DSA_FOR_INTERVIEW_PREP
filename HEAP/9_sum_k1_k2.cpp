// sum of elements between k1 smallest and k2 smallest numbers;
#include<bits/stdc++.h>
using namespace std;
int ksmallest(int arr[],int k,int n){
    priority_queue<int>maxh;
    for(int i=0;i<n;i++){
        maxh.push(arr[i]);
        if(maxh.size()>k){
            maxh.pop();
        }
    }
    return maxh.top();
}
int main(){
    int arr[]={1,3,12,5,15,11};
    sort(arr,arr+6);
    for(auto i:arr){
        cout<<i<<" ";
    }cout<<endl;
    int k1=3,k3=6;
    int a = ksmallest(arr,3,6);
    int b = ksmallest(arr,6,6);
    cout<<a<<"  "<<b<<endl;
    int sum=0;
    for(int i=0;i<6;i++){
    if(arr[i]>a && arr[i]<b){
        sum+=arr[i];
    }
    }cout<<sum;
}