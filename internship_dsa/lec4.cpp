#include<iostream>
#include "lec3.h"
using namespace std;
int main(){
  int n;
  cin>>n;
//   char k ='A';
//     for(int i=1;i<n;i++){
//         char k ='A'+i -1;
//         for(int j=1;j<n; j++){
//             cout<<k<<" ";
//                k=k+1;;
//         }
     
//         cout<<endl;
//     }
//char ch='A';
     for(int i=1;i<=n;i++){
         for(int j=1;j<=n-i+1; j++){
            cout<<j;
         }
        //   for(int j=1;j<=i-1; j++){
        //     cout<<" ";
        //  }

          for(int j=1;j<=2*i-2; j++){
        cout<<"*";
         }
        //  for(int j=1;j<=i-1; j++){
        //     cout<<" ";
        //  }
          for(int j=1;j<=n-i+1; j++){
            cout<<j;
         }
         cout<<endl;
}
}