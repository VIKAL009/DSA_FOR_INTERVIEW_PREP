#include<bits/stdc++.h>
using namespace std;

//Nearest greater to right : next largest :

// int main(){
//     int arr[]={1,3,2,4};
//     stack<int>st;
//     vector<int>vec;
//     int j = 3;
//     while (j>=0)
//     {
//        if(st.empty()){
//            vec.push_back(-1);
           
//        }else if(st.top()>arr[j]){
//            vec.push_back(st.top()); 
//        }else if(!st.empty() and st.top()<arr[j]){
//            while (!st.empty() and st.top()<arr[j])
//            {
//                st.pop();
//            }
//            if(st.empty()){
//                vec.push_back(-1);
//            }
//           else
//            {
//                vec.push_back(st.top());
//            } 
//        }
//         st.push(arr[j]);
//            j--;
//     }
//     reverse(vec.begin(),vec.end());
//     for(auto k:vec){
//         cout<<k<<" ";
//     }
// }

//Nearest greater to left : 

// int main(){
//     int arr[]={1,3,2,4};
//     stack<int>st;
//     vector<int>vec;
//     int j = 0;
//     while (j<4)
//     {
//        if(st.empty()){
//            vec.push_back(-1);
           
//        }else if(st.top()>arr[j]){
//            vec.push_back(st.top()); 
//        }else if(!st.empty() and st.top()<arr[j]){
//            while (!st.empty() and st.top()<arr[j])
//            {
//                st.pop();
//            }
//            if(st.empty()){
//                vec.push_back(-1);
//            }
//           else
//            {
//                vec.push_back(st.top());
//            } 
//        }
//         st.push(arr[j]);
//            j++;
//     }
//     for(auto k:vec){
//         cout<<k<<" ";
//     }
// }


//Nearest smaller to left : 

// int main(){
//     int arr[]={4,5,2,10,8};
//     stack<int>st;
//     vector<int>vec;
//     int j = 0;
//     while (j<5)
//     {
//        if(st.empty()){
//            vec.push_back(-1);
           
//        }else if(st.top()<arr[j]){
//            vec.push_back(st.top()); 
//        }else if(!st.empty() and st.top()>arr[j]){
//            while (!st.empty() and st.top()>arr[j])
//            {
//                st.pop();
//            }
//            if(st.empty()){
//                vec.push_back(-1);
//            }
//           else
//            {
//                vec.push_back(st.top());
//            } 
//        }
//         st.push(arr[j]);
//            j++;
//     }
//     for(auto k:vec){
//         cout<<k<<" ";
//     }
// }

// Nearest smaller to right :

// int main(){
//     int arr[]={4,5,2,10,8};
//     stack<int>st;
//     vector<int>vec;
//     int j = 4;
//     while (j>=0)
//     {
//        if(st.empty()){
//            vec.push_back(-1);
           
//        }else if(st.top()<arr[j]){
//            vec.push_back(st.top()); 
//        }else if(!st.empty() and st.top()>arr[j]){
//            while (!st.empty() and st.top()>arr[j])
//            {
//                st.pop();
//            }
//            if(st.empty()){
//                vec.push_back(-1);
//            }
//           else
//            {
//                vec.push_back(st.top());
//            } 
//        }
//         st.push(arr[j]);
//            j--;
//     }
//     reverse(vec.begin(),vec.end());
//     for(auto k:vec){
//         cout<<k<<" ";
//     }
// }

//foundation build:)


//stock span problem : consequtive 

// int main(){
//     int arr[]={100,80,60,70,60,75,85};
//     stack<pair<int,int>>st;
//     vector<int>vec;
//     int j = 0;
//     while (j<7)
//     {
//        if(st.empty()){
//            vec.push_back(-1);
           
//        }else if(st.top().first>arr[j]){
//            vec.push_back(st.top().second); 
//        }else if(!st.empty() and st.top().first<arr[j]){
//            while (!st.empty() and st.top().first<arr[j])
//            {
//                st.pop();
//            }
//            if(st.empty()){
//                vec.push_back(-1);
//            }
//           else
//            {
//                vec.push_back(st.top().second);
//            } 
//        }
//         st.push({arr[j],j});
//            j++;
//     }
//     for(auto k:vec){
//         cout<<k<<" ";
//     }cout<<endl;
//     int i=0;
//     for(auto v:vec){
//         cout<<i-v<<" ";
//         i++;
//     }
// }



// area of histogram :

// int main(){
//     stack<pair<int,int>>st,pt;
//     vector<int>vec,pec;
//     int arr[]={6,2,5,4,5,1,6};
//     int j = 6;
//     int ra[7],la[7];
//     // nstr :
//     while (j>=0)
//     {
//        if(st.empty()){
//            vec.push_back(7);
           
//        }else if(st.top().first<arr[j]){
//            vec.push_back(st.top().second); 
//        }else if(!st.empty() and st.top().first>arr[j]){
//            while (!st.empty() and st.top().first>arr[j])
//            {
//                st.pop();
//            }
//            if(st.empty()){
//                vec.push_back(7);
//            }
//           else
//            {
//                vec.push_back(st.top().second);
//            } 
//        }
//         st.push({arr[j],j});
//            j--;
//     }
//     reverse(vec.begin() , vec.end());
//     int p=0;
//     for(auto k:vec){
//         // cout<<k<<" ";
//         ra[p]=k;
//         p++;
//     }cout<<endl;


//     // nstl :
//    vec.clear();

//     j=0;
//     while (j<7)
//     {
//        if(pt.empty()){
//            vec.push_back(-1);
           
//        }else if(pt.top().first<arr[j]){
//            vec.push_back(pt.top().second); 
//        }else if(!pt.empty() and pt.top().first>arr[j]){
//            while (!pt.empty() and pt.top().first>arr[j])
//            {
//                pt.pop();
//            }
//            if(pt.empty()){
//                vec.push_back(-1);
//            }
//           else
//            {
//                vec.push_back(pt.top().second);
//            } 
//        }
//         pt.push({arr[j],j});
//            j++;
//     }
//     p=0;
//     for(auto k:vec){
//         // cout<<k<<" ";
//         la[p]=k;
//         p++;
//     }cout<<endl;

//     int w[7]={0};
//     int A[7]={0};
//     for(int i=0;i<7;i++){
//         w[i]=ra[i]-la[i]-1;
//         A[i]=arr[i]*w[i];
//     }

//     for(auto z:w){
//         cout<<z<<" ";
//     }cout<<endl;
//     for(auto z:A){
//         cout<<z<<" ";
//     }cout<<endl;
// }


//maximum area of rectangle in binary matrix :

//  soln ----->convert into 1D arrays and find max :



///**************************************************************************************************************

// 1.rain water trapping :

//   water = sum+=(min(maxl[i],maxr[i]))-arr[i]);




// 2.1Minimum element in stack with extra space :

// minstack---->pop-->push--->get_min:

// 2.2 in(o1) :