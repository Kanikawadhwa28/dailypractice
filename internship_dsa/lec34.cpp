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
// void swapping(string& s,int i,int j){
//    if(i>j) return;
//    else{
//         swap(s[i],s[j]);
//         i++;
//         j--;
//         swapping(s,i,j);
//    }
// }
bool checkpalin(string& s,int i,int j){
    if(i>j) return true;
    if(s[i]!=s[j]) return false;
    else{
        return checkpalin(s,i+1,j-1);
    }
}
int power(int a,int b){
     if(b==0) return 1;  
     if(b==1) return a;
     int ans=power(a,b>>1);
    if(b&1)
    return a*ans*ans;
    else 
    return ans*ans;
}
// void bubblesort(int arr[],int n){
//     for(int i=1;i<n;i++){
//         bool swapped=false;
//         for(int j=0;j<n-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 swapped=true;
//             }
//         }
//         if(swapped==false){
//              break;
//         }
//     }
// }
void bubblesort(int *arr,int n){
    if(n==0||n==1) return;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
    bubblesort(arr,n-1); 
    }
}
int main(){
    //  string s="Aa";
    //  int i=0;
    //  int j=s.size()-1;
      // cout<<s<<endl;
      //  swapping(s,i,j);
      //  cout<<s<<endl;
      //    bool b =checkpalin(s,i,j);
      //    cout<<b<<endl;
       //    int k = power(3,2);
      //    cout<<k<<endl;
     int arr[10]={1,3,4,2,5,6,8,7,10,9};
     for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
     }cout<<endl;
     bubblesort(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
     }cout<<endl;
    return 0;
}