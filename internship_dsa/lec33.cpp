#include <iostream>
#define PI 3.14
#include <stack>
#include <vector>
#include <bitset>
#include <cmath>
#include <sstream>
#include <unordered_map>
#include <map>
#include <string>
#include <set>
using namespace std;
bool binarysearch(int arr[],int element,int start,int end){
   int mid=start + (end-start)/2;
   if(start>end) return false;
     if(arr[mid]==element) return true;
      else if(arr[mid]<element) {
      return  binarysearch(arr,element,mid+1,end);
      }
       else {
         return  binarysearch(arr,element,start,mid-1);
         }
}
// bool issorted(int arr[],int n){
//     if (n==0|| n==1) return true;
//     if(arr[0]>arr[1]) return false;
//    else{
//     bool ans= issorted(arr+1,n-1);
//     return ans;
//    } 
// }
// bool ispresent(int arr[],int n,int element){
//    if(n==0) return false;
//    if(arr[0]==element) return true;
//    else {
//     int rem= ispresent(arr+1,n-1,element);
//     return rem;
//    }
// }
// int suma(int arr[],int n){
//     int sum=0;
//     if(n<=0) return 0;
//     else{
//     return arr[0] + suma(arr+1,n-1);;
//     }
// }
int main(){
     int arr[10]={2,4,5,6,7,8,9,10,11,10};
    int element=111;
   // cin>>element;
    // bool b =binarysearch(arr,10,element);
    // cout<<b<<endl;
   int n=10;
   //bool ans= issorted(arr,10);
  // cout<<ans<<endl;
//    int k=suma(arr,10);
//    cout<<k<<endl;
//     return 0;
    //   bool ans= ispresent(arr,10,element);
    //   cout<<ans<<endl;
    bool b= binarysearch(arr,element,0,9);
    cout<<b<<endl;
}