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
// int a=5;
// void abf(int r){
//     cout<<a<<endl;
// }
// inline int getmax(int a,int b){
//     return (a>b) ? a:b;
//        a=1;
//              b=2;
//    int ans=0;
//   ans=getmax(a,b);
//    cout<<ans<<endl;
//   a=a+3;
//   b=b+1;
//   ans=getmax(a,b);
//    cout<<ans<<endl;
// }
void print(int arr[],int n=2,int start=0){
    for(int i=start;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
//     int r=5;
//    // PI=PI+1;
//   double area= PI*r*r;
//   cout<< area<<endl;
//     cout<<a<<endl;
//     a++;
//     abf(r);
//             int a=1;
//             int b=2;
//    int ans=0;
//   ans=getmax(a,b);
//    cout<<ans<<endl;
//   a=a+3;
//   b=b+1;
//   ans=getmax(a,b);
//    cout<<ans<<endl;
int arr[]={1,2,3,4,5,6,7};
     print(arr,7);
     cout<<endl;
     print(arr,7,2);
    return 0;
}