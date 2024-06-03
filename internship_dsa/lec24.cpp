#include <iostream>
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
// int gcd(int a,int b){
//     if(a==0) return b;
//     if(b==0) return a ;
//    while(a!=b){
//     if(a>b) a=a-b;
//     else b=b-a;
//    }
//    return a;
// }
// int countprime(int n ){
//     int count=0;
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             count++;
//         }
//     }
//     return count;
// }
int main(){
//   int n ;
//   cin>>n;
//   int k=countprime(n);
//   cout<<k<<endl;
//   int a ,b;
//   cin>>a>>b;
//   cout<<gcd(a,b)<<endl;
        int arr[][4]={1,2,3,4,5,6,7,8,9,10,11,12 };
    //  for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>arr[j][i];
    //     }
    //  }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
           cout<<arr[i][j]<<" ";
        //   cout<<"hii"<<i<<j<<" ";
        }cout<<endl;
     }
     cout<<"hii "<<endl;
     for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<arr[j][i]<<" ";
     }cout<<endl;
     }
}