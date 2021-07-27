// identification------------------------------>  k + (smallest & largest) is given;
// k + smallest/closest/minimum---------------> max heap------>max element at top;
// k + largest/top/maximum--top-------------> min heap------->min element at top;
//  sorting  (nlog(n))---->merge sort------------------->nlog(k);

#include<bits/stdc++.h>
#include<algorithm>
#include<iostream> 
typedef pair<int,pair<int,int>>  ppi;                                                   //pair of pair int;
using namespace std;
int main(){
   priority_queue<int> hp;            //"or"                        //max heap;
   priority_queue<int,vector<int>> hp;                             //max heap;
   priority_queue<int,vector<int>,greater<int>> hpp;  //mn heap;                      //int---->pair
}