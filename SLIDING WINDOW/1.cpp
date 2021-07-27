//IDENTIFICATION : -  1. array or string is given   2.k is given(max/min sum or window size) and one of them we have to find:

//Maximum Sum Subarray of Size k : sliding window

#include <bits/stdc++.h>
using namespace std;
// int main(){
//     int arr[]={1,2,3,7,8,9,4,5,6};
//     int k = 3;
//     int i = 0,j = 0;
//     int sum = 0 , mx = INT_MIN;
//     while (j<9)
//     {
//         sum+=arr[j];
//         if((j-i+1)<k){
//             j++;
//         }
//         else if((j-i+1)==k){
//            mx=max(mx,sum);
//            sum-=arr[i];
//            i++;
//            j++;
//         }
//     }
//     cout<<mx<<endl;
// }

//First negative number in every window of size k : sliding window

// int main(){
//     int arr[]={12,-1,-7,8,-15,30,16,28};
//     int k = 3 , i = 0 , j = 0;
//     list<int>ls;
//     while (j<8)
//     {
//         if(arr[j]<0){
//             ls.push_back(arr[j]);
//         }

//         if((j-i+1)<k){
//            j++;
//         }
//         else if((j-i+1)==k){
//             if(ls.empty()){
//                 cout<<0<<" ";
//             }else
//             {
//                 cout<<ls.front()<<" ";
//                 if(ls.front()==arr[i]){
//                     ls.pop_front();
//                 }
//             }
//                 i++;
//                 j++;
//         }
//     }
// }

// count occurrences of anagrams : sliding window

// int main(){
//     // string s = "forxxorfxdofr";
//     // string x = "for";
//     string s = "aabaabaa";
//     string x = "aaba";
//     int i = 0 , j = 0 , ans = 0;
//     map<char,int>mp;
//     for(auto k:x){
//             mp[k]++;
//     }
//     int _cnt=mp.size();
//     while (j<s.length())
//     {

//         if(mp.find(s[j])!=mp.end()){
//             mp[s[j]]--;
//             if(mp[s[j]]==0){
//                 _cnt--;
//             }
//         }
//         if(j-i+1<x.length()){
//             j++;
//         }else if(j-i+1==x.length()){
//             if(_cnt==0){
//                 ans++;
//             }
//             if(mp.find(s[i])!=mp.end()){
//                 if(mp[s[i]]==0){
//                     _cnt++;
//                 }
//                 mp[s[i]]++;
//             }
//             i++;
//             j++;
//         }
//     }
//     cout<<ans;
// }

//Maximum of all subarrays of size k : sliding window
// vector<int> solve(vector<int> &A, int B){
//     vector<int>vec;
//     int n=A.size();
//     int i=0,j=0;
//     deque<int>dq;
//     while(j<n){
//      while(dq.size()>0 and dq.back() < A[j]){
//          dq.pop_back();
//      }
//      dq.push_back(A[j]);
//        if(j-i+1<B){
//             j++;
//         }else if(j-i+1==B){
//           vec.push_back(dq.front());
//             if(dq.front()==A[i]){
//                 dq.pop_front();
//             }
//             i++;
//             j++;
//         }
//     }
//     return vec;
// }


//**********Variable Size Sliding Window**************//

// Largest Subarray of sum k : variable size window

// int main(){
//     // int arr[]={4,1,1,1,1,1,1,1,4,5,6};
//     int arr[]={4,1,1,1,2,3,5};
//     int k = 5;
//     int i = 0, j = 0;
//     int mx = 0;
//     int sum=0;
//     while (j<8)
//     {
//         sum+=arr[j];
//         if(sum<k){
//             j++;
//         }
//         else if(sum==k){
//             mx=max(mx,(j-i+1));
//             j++;
//         }else if(sum>k){
//             while (sum>k)
//             {
//                 sum-=arr[i];
//                 i++;
//             }
//             j++;
//         }
//     }
//     cout<<mx;
// }

//longest substring with k unique characters : variable size window : john and mummy problem

// int main(){
//     // string s ="aabacbebebe";
//     string s="aaaa";
//     int k=1;
//     int i=0,j=0;
//     map<char,int>mp;
//     int _cnt=0;
//     int mx=0;
//     while (j<s.length())
//     {
//         if(mp[s[j]]==0){
//            _cnt++;
//         }
//         mp[s[j]]++;

//         if(_cnt<k){
//             j++;
//         }else if(_cnt==k){
//             mx=max(mx,(j-i+1));
//             j++;
//         }else if(_cnt>k){
//             while (_cnt>k)
//             {
//                 mp[s[i]]--;
//                 if(mp[s[i]]==0){
//                    _cnt--;
//                 }
//                 i++;
//             }
//             j++;
//         }
//     }
//     cout<<mx;
// }

//longest substring with without repeating characters : variable size window

// int main(){
//     string s ="pwwkew";
//     int i=0,j=0;
//     map<char,int>mp;
//     int _cnt=0;
//     int mx=0;
//     while (j<s.length())
//     {
//         if(mp[s[j]]==0){
//            _cnt++;
//         }
//         mp[s[j]]++;

//         if(_cnt>(j-i+1)){
//             j++;
//         }else if(_cnt==(j-i+1)){
//             mx=max(mx,(j-i+1));
//             j++;
//         }else if(_cnt<(j-i+1)){
//             while (_cnt<(j-i+1))
//             {
//                 mp[s[i]]--;
//                 if(mp[s[i]]==0){
//                    _cnt--;
//                 }
//                 i++;
//             }
//             j++;
//         }
//     }
//     cout<<mx;
// }

//

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int a = 0, b = 0;
    // string s = "ADOBECODEBANC";
    // string x = "ABC";
    // int i = 0, j = 0, ans = INT_MAX;
    // bool f = false;
    // unordered_map<char, int> mp;
    // for (auto k : x)
    // {
    //     mp[k]++;
    // }
    // int _cnt = mp.size();
    // while (j < s.length())
    // {
    //     if (mp.find(s[j]) != mp.end())
    //     {
    //         mp[s[j]]--;
    //         if (mp[s[j]] == 0)
    //         {
    //             _cnt--;
    //         }
    //     }
    //     while (_cnt == 0)
    //     {
    //         f = true;
    //         if ((j - i + 1) < ans)
    //         {
    //             ans = (j - i + 1);
    //             a = i;
    //             b = j;
    //             // cout<<ans<<" ";
    //         }
    //         if (mp.find(s[i]) != mp.end())
    //         {
    //             if (mp[s[i]] == 0)
    //             {
    //                 _cnt++;
    //             }
    //             mp[s[i]]++;
    //         }
    //         i++;
    //     }
    //     j++;
    // }
    // string s;
    // for(int i=a;i<=b;i++){
    //     s.push_back(s[i]);
    // }
    // if(f){
    //     return "";
    // }else
    // {
    //     return s;
    // }
    vector<int>A{1,2,2,3,4,3,4};
     A.erase(unique(A.begin(),A.end()),A.end());
     for(auto i:A){
         cout<<i<<" ";
     }
     cout<<endl;
     cout<<unique(A.begin(),A.end())-A.begin();
}