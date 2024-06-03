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
void print(int *p){
    cout<<p<<endl;
    cout<<*p<<endl;
}
void update(int *p){
     cout<<p<<endl;
    cout<<*p<<endl;
   // p=p+1;
    *p=*p+1;
     cout<<p<<endl;
    cout<<*p<<endl;
}
int main(){
     // int arr[10]={23,122,41,67};
    //   cout<<arr<<endl;
    //   cout<<&arr<<endl;
    //   cout<<&arr[0]<<endl;
    //   cout<<*arr<<endl;
    //   cout<<*arr+1<<endl;
    //   cout<<*(arr+1)<<endl;
    //   cout<<arr[2]<<endl;
    //   cout<<*(arr+2)<<endl;
    //   cout<<*(2+arr)<<endl;
    //   cout<<2[arr]<<endl;
    // int *p=&arr[0];
    // cout<<sizeof(arr)<<endl;
    // cout<<sizeof(p)<<endl;
    // cout<<sizeof(*p)<<endl;
    // cout<<sizeof(&p)<<endl;
    // cout<<p<<endl;
    //     p=p+1;
    // cout<<p<<endl;
    // int arr[5]={1,2,3,4,5};
    // char ch[6]="abcde";
    // cout<<arr<<endl;
    // cout<<ch<<endl;
    // char *c=&ch[0];
    // cout<<c<<endl;
    // char *d=&ch[0];
    // cout<<d<<endl;
    // char temp='z';
    // char *p=&temp;
    // cout<<p<<endl;
    int value =5;
    int *p=&value;
   // print(p);
   cout<<"before "<<p<<endl;
   cout<<"before "<<*p<<endl;
   update(p);
   cout<<"after "<<p<<endl;
   cout<<"after "<<*p<<endl;
    return 0;

}