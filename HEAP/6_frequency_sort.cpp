#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,1,1,3,2,2,4};
    unordered_map<int,int>mp;
    priority_queue<pair<int,int>>maxh;
      for(int i=0;i<7;i++){
            mp[arr[i]]++;
    }
     for(auto i=mp.begin();i!=mp.end();i++){
        maxh.push({i->second,i->first});
    }
     while (!maxh.empty())
    {
        for(int i=0;i<(maxh.top()).first;i++)
        cout<<(maxh.top()).second<<" ";
        maxh.pop();
    }
}