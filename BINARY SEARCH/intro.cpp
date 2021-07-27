// sorted -------> use binary search :
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//1.binary search log(n) ::

// int main(){
//   int arr[]={1,2,3,4,5,6,7,8,9,10};
//   int a = 2;
//   int start=0,end=9;
//   while (start<=end)
//   {
//       int mid=(start+end)/2;    //start +(end-start)/2 ;  to avoide int overflow ::
//       if(a==arr[mid]){
//           cout<<mid;
//           break;
//       }else if(a<arr[mid]){
//           end=mid-1;
//       }else{
//           start=mid+1;
//       }
//   } 
// }

//2.binary search on descending sorted array ::

// int main(){
//     int arr[]={6,5,4,3,2,1};
//     int a =4;
//      int start=0,end=5;
//   while (start<=end)
//   {
//       int mid = start +(end-start)/2 ;
//       if(a==arr[mid]){
//           cout<<mid;
//           break;
//       }else if(a<arr[mid]){
//           start=mid+1;
//       }else{
//           end=mid-1;
//       }
//   }
// }

//3.order not known search : compare arr[0]--arr[1]  ::

//4.first and last occurrence of an element ::

// int main(){
//   int arr[]={2,4,10,10,10,18,20};
//   int a = 10;
//   int res;
//   int start=0,end=6;
//   while (start<=end)
//   {
//       int mid=start +(end-start)/2; 
//       if(a==arr[mid]){
//           res=mid;
//           //first:
//         //   end=mid-1;
//           //last:
//           start=mid+1;   
//       }else if(a<arr[mid]){
//           end=mid-1;
//       }else{
//           start=mid+1;
//       }
//   } 
//   cout<<res;
// }

//5.count of an element in a sorted array :

// (last occ-first occ)+1 ::

//6.number of times a sorted array is rotated==index of the min element=return start in binary search:
int pivotindex(int A[])
{
int start = 0;
int end = 5-1;
while(start<=end)
{
int mid = (start + end)/2;
if(A[mid] > A[0])
start = mid+1;
else
end = mid -1;
}
return start; //min   //end-->max;
}
int main(){
int arr[]={7,9,11,12,5};
  int start=0,end=4;
  while (start<=end)
  {
      int mid=(start+end)/2;
      int prev=(mid-1+5)%5;
      int next=(mid+1)%5;    
      if(arr[mid]<=arr[prev] and arr[mid]<=arr[next]){
          cout<<mid;
          break;
      }else if(arr[start]<=arr[mid]){
          start=mid+1;
      }else if(arr[mid]<=arr[end]){
          end=mid-1;
      }
  } 
  cout<<endl;
  cout<<pivotindex(arr);
}

//7.find an element in a rotated sorted array ::

// search in two arrays--->b_seach(arr,start,index-1)----->b_search(arr,index,end);

// 8.searching in a nearly sorted array ::

//   int main(){
//   int arr[]={10,3,40,20,50,80,70};
//   int a = 70;
//   int start=0,end=6;
//   while (start<=end)
//   {
//       int mid=(start+end)/2;   
//       if(a==arr[mid]){
//           cout<<mid;
//           break;
//       }else if(mid-1>=0 and a==arr[mid-1]){
//           cout<<mid-1;
//           break;
//       }else if(mid+1<=6 and a==arr[mid+1]){
//           cout<<mid+1;
//           break;
//       }
//       else if(a<arr[mid]){
//           end=mid-2;
//       }else{
//           start=mid+2;
//       }
//   } 
// }

//9.find floor of an element in a sorted array ::

// int main(){
//   int arr[]={1,2,3,4,8,10,10,12,19};
//   int a = 5;
//   int res;
//   int mid;
//   int start=0,end=8;
//   while (start<=end)
//   {
//       mid=start +(end-start)/2; 
//       if(a==arr[mid]){
//         res = arr[mid];   
//         break;
//       }else if(a<arr[mid]){
//         //   ceil
//         //   res=min(res,arr[mid]);
//         // res=mid;
//         res=arr[mid];
//           end=mid-1;
//       }else{
//         //   floor
//         //   res=max(res,arr[mid]);
//           start=mid+1;
//       }
//   } 
//   cout<<res;
// }

//10.next alphabetic element:

// int main(){
//   char arr[]={'a','c','f','h','z'};
//   char a = 'f';
//   int res;
//   int start=0,end=4;
//   while (start<=end)
//   {
//       int mid=start +(end-start)/2; 
//       if(a==arr[mid]){
//           start=mid+1;
//       }else if(a<arr[mid]){
//         //   ceil
//           res=mid;
//           end=mid-1;
//       }else{
//           start=mid+1;
//       }
//   } 
//   cout<<arr[res];
// }

//11.find position of an element in an infinite sorted array::

//int low=0,high=1;
//while(key>arr[high]){ low=high,high=i*2}
//b_search(arr,low,high);

//14.index of first 1 in a infinite binary sorted array ::

//(1st occ + Q.11)::

//15.minimum diff. element in a sorted array::
// key if key is present"""

// int main(){
//     int arr[]={1,3,8,10,15};
//     int a =12;
//     int low=0;
//     int high=4;
//     while (low<=high)
//     {
//         int mid=(low+(high-low)/2);
//         if(a==arr[mid]){
//             cout<<0;
//         }else if(a<arr[mid])
//         {
//             high=mid-1;
//         }else
//         {
//             low=mid+1;
//         }  
//     }
//     cout<<arr[low]<<" "<<arr[high]<<endl;
//     cout<<min(abs(a-arr[low]),abs(a-arr[high]));
// }

//16.Binary search on answer concept ::
//17.unsorted-->peak element is greater both of its neighbours::

//18.find max element in bitonic array:: monotonic increasing then decreasing----->single peak element;

//19.search an element in bitonic array::
//two sorted array:

//20.search in row wise and column wise sorted array:O(n2)---->O(n+m))

//21.Allocate minimum number of pages:


// #include<bits/stdc++.h>
// int main(){
//     int arr[]={1,2,4,5,6};
//     cout<<lower_bound(arr,arr+5,3)-arr;
// }