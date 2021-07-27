#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<pair<int,int>>maxh;
    int arr[]={5,6,7,8,9},k=3,x=7;
    for(int i=0;i<5;i++)
    {
        maxh.push({abs(arr[i]-x),arr[i]});
        if(maxh.size()>k){
            maxh.pop();
        }
    }
     while (!maxh.empty())
   {
   cout<<maxh.top().second<<" ";
   maxh.pop();
   }
}