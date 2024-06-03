#include <iostream>
#include <stack>
#include <vector>
#include <bitset>
#include <cmath>
#include <sstream>
#include <unordered_map>
#include <map>
#include <string>
using namespace std;

    // bool ispalindrome(string s){
    //     int start=0;
    //     int end=s.size()-1;
    //     bool flag = true;
    //      while(start<end){
    //         if(s[start]!=s[end]){
    //             flag = false;
    //             break;
    //         }
    //         start++;
    //         end--;
    //      }
    //      return flag;
    // }
    // string sub(string s){
    //     for(int i=0;i<n;i++){
    //         for(int j=1; j<=n-i;j++){
    //            for(int k=i;k<=(i+j);k++){
    //             cout<<s[k]<<endl;
    //            }
    // }
    int binarysearch(float x){
       int start=0;
        int end=x;
        long long mid;
        long long ans;
        while(start<=end){
            mid= start + (end-start)/2;
            if(mid*mid==x) return mid;
            else if(mid*mid>x) end=mid-1;
            else{
                 ans=mid;
                start=mid+1;
            }
        }
        return ans;
    }
    float precise(float sq,float number,int precision){
    float num1=0.9;
    float num2=0.1;
    for(int j=0;j<precision;j++){

    for(float i=0;i<=num1;i=i+num2){
        if((sq+i)*(sq+i)<=number){
            sq= sq+i;
        }
        else{
         break;}
    }
            num1=num1/10;
        num2=num2/10;
    }
    return sq;
    }
 int main(){
    float number;
    cin>>number;
    int precision ;
    cin>>precision;
    cout<<"sq root is"<<endl;
    float sq=binarysearch(number);
    cout<<sq<<endl;
    float final= precise(sq,number,precision);
    cout<<final<<endl;
    //  string s="abcd";
    //  int n =s.size();
    // bool b =ispalindrome(s);
    // cout<<b<<endl;
//    for(int i=0;i<n;i++){
//             for(int j=1; j<=n-i;j++){
//                 for(int k=i;k<(i+j);k++){
//                 cout<<s[k];
//                }
//                cout<<endl;
//         }}
}