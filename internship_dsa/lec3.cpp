#include<iostream>
#include "lec3.h"
using namespace std;
int main(){
  int n;
  cin>>n;
//   int i=0;
//   int sum=0;
//   while(i<=n){
//     cout<<i<<" ";
//     sum +=i;
//     i= i+2;
//   }
//   cout<<endl;
//   cout<<sum;
// prime or not 
// bool b =true;
//       for (int i= 2 ; i<n; i++){
//        int k=n%i;
//         if(k==0){
//             b= false;
//         }
//       }
//       if(b==0){
//         cout<<"not prime";
//       }
//       else{
//         cout<<"prime";
//       }
    //Patterns
    for (int i = 1; i <= n; i++){
        int k=i;
        for (int j = 1; j <= i; j++)
      {
            cout << k << " ";
            k= k-1;
        }
        //i=i-1;
        cout << endl;
    }
}