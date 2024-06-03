#include <iostream>
#include <stack>
#include <vector>
#include <bitset>
#include <cmath>
#include <sstream>
using namespace std;
bool isAnagram(string s, string t) {
        int arr[26]={0};
        for(int i=0;i<s.size();i++){
            char c = s[i];
            arr[c-'a']++;
        }
        for(int i=0;i<26;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<t.size();i++){
            char c =t[i];
            arr[c-'a']--;
            cout<<arr[t[i]-'a']<<" ";
        }
        bool b =true;
        for(int i=0;i<t.size();i++){
            if(arr[t[i]-'a']!=1) {
                b=false;
                break;
            }
        }
        return b ;
}
int main(){
        string s ="anagram";
        string t ="naamagr";
        isAnagram(s,t);
        //     char ch = 'c';
        //    stringstream ss;
        //     ss << ch;
        //     string str = ss.str(); // Create a string from the character 'c'
        //      cout<<str<<" ";
    // int a =3;
    // string ans="";
    // ans+= (a+'0');
    // cout<<ans;
}