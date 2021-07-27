#include<bits/stdc++.h>
using namespace std;
int main(){
   priority_queue<int>maxh;
   int arr[]={7,10,4,3,20,15},k=3;
   sort(arr,arr+6);
   for(auto i:arr){
       cout<<i<<" ";
   }
   for(int i=0;i<6;i++){
       maxh.push(arr[i]);
       if(maxh.size()>k){
           maxh.pop();
       }
   }
   cout<<maxh.top();
}