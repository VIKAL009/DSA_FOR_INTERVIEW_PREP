#include<bits/stdc++.h>
#include<iostream>
#include<tuple>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>
using namespace std;
bool comp(int,int);
bool comp(int x,int y){
  if(x>y) return true;
  else return false;
}
int main(){
// ---------------------------------------NOTES-------------------------------------
      //top-------->stack and priority_queue
      //pair and priority queue are not included files
      //stack,queue,priority_queue----->while loo to print   else foreachloop
     //only set and multiset uses simple erase and insert(3) 
      // along with pointer as all(it); it 1 and it2 bu find fn
  //***************************tuple*************************pairs***
  // pair<int,int>p={3,4};
  // cout<<p.first<<" "<<p.second;
    // pair<int,pair<int,string>> p = {1,{2,"vikal"}};
    // cout<<p.first<<" "<<p.second.first<<" "<<p.second.second;
    // pair<int,int> ar[]={{1,2},{3,4},{5,6},{7,8}};
    // ar[4]=make_pair(10,20);
    // for(int i=0;i<5;i++){
    //   cout<<ar[i].first<<" "<<ar[i].second<<endl;
    // }
    // tuple<int,int,int,string> t;
    // t = make_tuple(1,2,3,"vikal");
    // cout<<get<0>(t)<<endl;
    // cout<<get<1>(t)<<endl;
    // cout<<get<2>(t)<<endl;
    // cout<<get<3>(t)<<endl;
    //*****************************vector******************************
  //  vector<int>vec;
  //  cout<<vec.size()<<" "<<vec.capacity()<<endl;
  //  vec.push_back(1);
  //  cout<<vec.size()<<" "<<vec.capacity()<<endl;
  //  vec.push_back(2);
  //  cout<<vec.size()<<" "<<vec.capacity()<<endl;
  //  vec.push_back(3);
  //  cout<<vec.size()<<" "<<vec.capacity()<<endl;
  //  vec.push_back(4);
  //  vec.push_back(5);
  //  cout<<vec.size()<<" "<<vec.capacity()<<endl;

  // vector<int>vec={1,2,3,4,5};
  // vec.push_back(6);
  // vec.emplace_back(7);
  // vec.pop_back();
  // vector<int>::iterator it = vec.begin();
  // while (it!=vec.end())
  // {
  //   cout<<*it<<" ";
  //   it++;
  // }
  // cout<<vec.empty()<<endl;
  // vec.pop_back();
  // vec.pop_back();
  // vec.pop_back();
  // vec.pop_back();
  // vec.pop_back();
  // vec.pop_back();
  // cout<<vec.empty()<<endl;

  // vector<pair<int,string>>vec;
  // vec.push_back({1,"vikal"});
  // vec.emplace_back(1,"vikal");
  // vec.push_back(make_pair(1,"vikal"));
  // cout<<vec[0].first<<" "<<vec[0].second;

  // vector<int> vec(5,10);
  // vector<int>v={1,2,3,4,5};
  // vector<int>::iterator it;
  // it = v.begin();
// it = v.end(); it--;
// cout<<*it<<" ";
  // // cout<<v[3];
  // while (it!=v.end())
  // {
  //   cout<<*it<<" ";
  //   it++;
  // }
  // cout<<v.at(0);
  // for(auto i:v){
  //   cout<<i<<" ";
  // }

  
  // vector<int>vec={10,20,30,40,50};
  // vector<int>v={1,2,3,4,5};
  // vector<int>::iterator it = vec.begin();/
  // vec.insert(it+2,4,60);
  // vec.insert(it+1,v.begin(),v.end());
  // vec.insert(it,90);
  // cout<<vec.front()<<endl;
  // vec.erase(it+2,it+3);
  // cout<<vec.front()<<endl;
  // v.clear();
  // vec.swap(v);
  // for(auto k:vec){
  //   cout<<k<<" ";
  // }
// cout<<vec.empty()<<"  "<<vec.size()<<" "<<vec.capacity();
// auto it = vec.rbegin();
// auto it = vec.rend();
// it--;
// cout<<endl<<*it<<" ";
//***********************************List**********************
list<int> ls={1,4,3,2,5};
// ls.front();
// ls.push_back(10);
// ls.push_front(20);
// ls.pop_back();
// ls.pop_front();
// ls.emplace_front(1);
// list<int>::iterator it=ls.begin();
// ls.insert(it,100);
// ls.erase(it);
// ls.insert(it,2,20);
// ls.erase(it+1,it+2);
// ls.sort();
// ls.reverse();
// cout<<ls.front()<<endl;
// for(auto i:ls){
//   cout<<i<<" ";
// }
//*********************************Deque*************************
deque<int>dq={1,2,3,4,5};
    //  cout<<dq.front();
    // deque<int>::iterator it = dq.begin();
    // dq.push_front(10);
    // dq.push_back(20);
    // dq.pop_front();
    // dq.pop_back();
    // dq.emplace_back(90);
    // for(auto i:dq){
    //   cout<<i<<" ";
    // }
    // cout<<dq.front()<<"  "<<dq.back()<<" ";
    //******************************************Stack************
//     stack<int>st;
//     stack<int>at;
//     at.push(1);
//     at.push(2);
//     at.push(3);
//     at.push(4);
//     at.push(5);
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     // st.push(50);
//     st.emplace(1);
// st.swap(at);
// cout<<st.size()<<endl;
// while (!st.empty())
// {
//   cout<<st.top()<<" ";
//   st.pop();
// }
//     cout<<endl<<st.empty();
//************************************************Queue***********
  //  queue<int>q;
  //  cout<<q.empty()<<endl;
  //  q.push(10);
  //  q.push(20);
  //  q.push(30);
  //  q.emplace(50);
  //  cout<<q.front()<<endl;
  //  cout<<q.empty()<<endl;
  //  q.front()+=2;
  //  cout<<q.size()<<q.front()<<" "<<q.back()<<" "<<endl;
  //  while (!q.empty())
  //  {
  //    cout<<q.front()<<" ";
  //    q.pop();
  //  }
  //  cout<<q.size();
  //**********************************************PQ*****************
  // priority_queue<int,vector<int>,greater<int>>pq;   //Minheap
  // pq.push(1);
  // pq.push(5);
  // pq.push(6);
  // pq.push(2);
  // pq.emplace(10);
  // cout<<"\n"<<pq.top()<<" "<<pq.size()<<endl;
  // while (!pq.empty())
  // {
  //   cout<<pq.top()<<" ";
  //   pq.pop();
  // }
  //********************************************Set******************
  // set<int>st={1,2,3,4,5,5,5,5,5,9};
  // st.insert(6);
  // st.emplace(7);
  // st.emplace(7);
  // st.erase(5);//   space will there
  // st.erase(1);
  // st.erase(2);
  // auto it = st.find(4);
  // st.erase(it);
  // // cout<<endl<<*(st.find(6))<<"  "<<st.count(5);
  // set<int>::iterator it1 = st.find(2);
  //  set<int>::iterator it2 = st.find(4);
  // st.erase(it1,it2);
  // auto it=st.begin();
  // st.insert(it,2);
  // for(auto i:st){
  //   cout<<i<<" ";
  // }
  // auto it = st.find(5),it1=st.lower_bound(5),it2=st.upper_bound(5);
  // cout<<endl<<*it<<"  "<<*it1<<"  "<<*it2;
  //*******************************************Multiset******************
  // multiset<int>st={2,2,7,4,5,5,2,8,5};
  // st.insert(6);
  // st.erase(2);
  // st.insert(6);
  // st.insert(6);
// auto it = st.find(2);
// auto it3 = st.find(4);
// st.erase(it,it3);
// st.erase(st.find(4),((st.find(5))+2));
// for(auto i:st){
//   cout<<i<<" ";
// }
// int it = st.count(2);
//    cout<<endl<<it;
  // auto it = st.find(5),it1=st.lower_bound(5),it2=st.upper_bound(5);
  // cout<<endl<<*it<<"  "<<*it1<<"  "<<*it2;
//***************************************Unordered_set********************
// unordered_set<int>st={1,2,3,9,8,7,6};
//    for(auto i:st){
//      cout<<i<<" ";
//    }
//******************************************Map**************************
// map<int,pair<int,int>>mpp;
// map<pair<int,int>,int>mpp;
// map<int,int>mpp={
//   {3,4},
//   {1,2},
//   {7,8}
// };
// mpp[5]=6;
// mpp.emplace(4,3);
// mpp.insert({2,6});
// cout<<mpp[1];
// for(auto i:mpp){
//   cout<<i.first<<" "<<i.second<<endl;
// }
// auto it = mpp.find(10); // points to the position where 3 is found
	// cout <<it->first<<"  "<<  (*it).second; //it->second
// auto it = mpp.find(5),it2=mpp.lower_bound(5),it1=mpp.upper_bound(5);
//   cout<<endl<<it1->second;
// *******************************Multi_map******************************
// multimap<pair<int,string>,int>mpp={
//   {{1,"vikal"},100},
//   {{1,"sushil"},200},
//   {{2,"jatin"},150}
// };
// mpp.insert({{3,"sahil"},300});
// mpp.emplace(make_pair( 4,"rahul"),500);
// for(auto i:mpp){
//   cout<<i.first.first<<" "<<i.first.second<<"   "<<i.second<<endl;
// }
//****************************Unordered_Map******************************
unordered_map<int,pair<int,int>>mpp={
     {1,{2,3}},
     {3,{8,9}},
     {5,{6,7}},
     {5,{6,7}}
};
for(auto i:mpp){
  cout<<i.first<<"   "<<i.second.first<<" "<<i.second.second<<endl;
}
//*****************************************EXTRA*************************
// vector<int>vec={5,2,3,1,7,6,4,9,8};
// sort(vec.begin(),vec.end());
// sort(vec.begin(),vec.end(),comp);
// for(auto i:vec){
//   cout<<i<<"  ";
// }

// int arr[]={1,5,4,2,3};
// sort(arr,arr+5,comp);
// for(auto i:arr){
//   cout<<i<<" ";
// }

// int a=7;
// int x= __builtin_popcount(a);
// cout<<x<<" ";
// long long y = 123442345678;
// int z= __builtin_popcountll(y);
// cout<<endl<<z<<" ";

string s="123";
// next_permutation(s.begin(),s.end());
// cout<<s<<endl;
// next_permutation(s.begin(),s.end());
// cout<<s<<endl;
// next_permutation(s.begin(),s.end());
// cout<<s<<endl;
// next_permutation(s.begin(),s.end());
// cout<<s<<endl;
// next_permutation(s.begin(),s.end());
// cout<<s<<endl;
// cout<<next_permutation(s.begin(),s.end());
// cout<<s<<endl;
do{
  cout<<s<<endl;
}while (next_permutation(s.begin(),s.end()));


}