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
void update(int n){
    n++;
}
void update2(int& n){
    n++;
}
int& func(int a){
    int num=a;
    int& ans= num;
    return ans;
}
int* fun(int n){
    int *ptr=&n;
    return ptr;

}
int main(){
//    int i=5;
//    int& j=i;
//    cout<<i<<endl;
//     i++;
//      cout<<i<<endl;
//      j++;
//       cout<<i<<endl;
//       cout<<j<<endl;
        // int n=5;
        // cout<<n<<endl;
        // update(n);
        // cout<<n<<endl;
        // cout<<n<<endl;
        // update2(n);
        // cout<<n<<endl;
           int a =15;
           func(a);
           cout<<"hii "<<endl;
           cout<<fun(a)<<endl;

    return 0;

}