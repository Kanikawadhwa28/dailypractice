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
void reachhome(int src,int dest){
    if(src==dest){
        cout<<"reached ";
        return;
    }
    src++;
    cout<<src<<" "<<dest<<endl;
    reachhome(src,dest);
}
int fibonacci(int n){
    if(n==0 || n==1) return n;
    int ans= fibonacci(n-1)+ fibonacci(n-2);
    return ans;
}
void saydigit(int n){
    int number=n;
   if(number==0) return;
    int digit= number%10;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
   
    number= number/10;
    saydigit(number);
     cout<<arr[digit]<<" ";
}
int main(){
//    int src=1;
//    int dest=10;
//    reachhome(1,10);
      int n;
      cin>>n;
   // cout<<  fibonacci(n)<<endl;
       saydigit(n);
    return 0;
}