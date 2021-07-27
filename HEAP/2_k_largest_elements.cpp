#include<bits/stdc++.h>
using namespace std;
int main(){
     priority_queue<int,vector<int>,greater<int>>minh;
//    int arr[]={7,10,4,3,20,15},k=3;
int arr[]={1,23,12,9,30,2,50},k=3;
   sort(arr,arr+6);
   for(auto i:arr){
       cout<<i<<" ";
   }cout<<endl;
   for(int i=0;i<7;i++){
       minh.push(arr[i]);
       if(minh.size()>k){
           minh.pop();
       }
   }
   while (!minh.empty())
   {
   cout<<minh.top()<<" ";
   minh.pop();
   }
   
}