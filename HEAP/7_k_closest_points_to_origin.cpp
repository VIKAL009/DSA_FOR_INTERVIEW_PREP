#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,pair<int,int>>mp;
    priority_queue<pair<int,pair<int,int>>>maxh;
    int k=2;
   int arr[][2]={
       {1,1},
       {2,2},
       {3,3},
       {4,4}
   }; 
//    int arr[][2]={
//        {1,3},
//        {-2,2},
//        {5,8},
//        {0,1}
//    }; 
   for(int i=0;i<4;i++){
         maxh.push({arr[i][0]*arr[i][0]+arr[i][1]*arr[i][1],{arr[i][0],arr[i][1]}});
         if(maxh.size()>k){
             maxh.pop();
         }
   }while (!maxh.empty())
   {
       cout<<(maxh.top()).second.first<<"  "<<(maxh.top()).second.second<<endl;
       maxh.pop();
   }
   
}