#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5},cost=0;
    priority_queue<int,vector<int>,greater<int>>minh;
    for(int i=0;i<5;i++){
        minh.push(arr[i]);
    }
    while (minh.size()>=2)
    {
        int a = minh.top();
        minh.pop();
        int b = minh.top();
        minh.pop();
        cost+=(a+b);
        minh.push((a+b));
        // if(minh.size()==1){
        //      cout<<cost;
        //      break;
        // }
    }
    cout<<cost;
    
}