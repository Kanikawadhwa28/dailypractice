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
void factorial(int n){
    if(n==0) return;
     factorial(n-1);
   cout<<n<<" ";
  
//    if(n==0  ) return 1;
//      return 2*factorial(n-1);
}
int main(){
     int n;
     cin>>n;
   factorial(n);
    // cout<<k<<endl;


    return 0;
}