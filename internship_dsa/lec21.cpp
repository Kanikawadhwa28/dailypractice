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
int getlength(char name[]){
    int l=0;
    for(int i=0;name[i]!=0;i++) l++;
    return l;
}
void reverse(char name[]){
    int start=0;
    int end = getlength(name)-1;
    cout<<"hii "<<end<<endl;
    while(start<=end){
        swap(name[start++],name[end--]);
    }
}
char lowercase(char ch){
    if(ch>='a' && ch<='z') return ch;
    else{
        char temp =ch-'A'+'a';
        return temp;
    }
}
bool checkPalindrome(string s)
{
   int start=0;
   int end =s.length()-1;
   bool b =true;
   while(start<=end){
     if (lowercase(s[start]) != lowercase(s[end])) {
       b = false;
       break;
   // return 0;
     }
     start++;
     end--;
   }
   return b;
}
int main(){
    // int arr[6]={1,2,3,1,2,1};
    // map<int,int> mp;
    //  for(auto i :arr){
    //     mp[i]++;
    // }
    // for(auto i:mp){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // char ch[10];
    // // cout<<ch<<endl;
    // cin>>ch;
    // cout<<ch<<endl;
    // int k= getlength(ch);
    // cout<<k<<endl;
    // reverse(ch);
    // cout<<ch<<endl;
    string str;
    cin>>str;
    bool b = checkPalindrome(str);
    cout<<b<<endl;
}