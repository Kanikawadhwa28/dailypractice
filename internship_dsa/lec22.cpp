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
#include <cstring>
using namespace std;
string replaceSpaces(string &str){
	 int n =str.size();
	 cout<<n<<endl;
	for(int i=0;i<n;i++){
		if (str[i]==' '){
			str.replace(i,1,"@40");
			i+=2;
		}
	}
	return str;
}
int main(){
//     string s;
//     cin>>s;
//     int i;
//     for(int i=0;s[i]!='\0';i++){
//         cout<<"hoo "<<i<<" "<<s[i]<<endl;
//     }
//     cout<<i<<endl;
//     cout<<s[i]<<endl;
      // int count =0;
      // int right=7;
      //   while(right){
      //       int bit = right &1;
      //       count++;
      //       right =right>>1;
      //   }
      //   cout<<count<<endl;
      //   string num(count,1);
      //   int n=stoi(num);
      //   cout<<n<<endl;
      // char ch[10]="kanika\0ka";
      // cout<<ch<<endl;
      // // for(int i=0;i<ch.length();i++){
      // //   cout<<ch[i]<<" ";
      // // }cout<<endl;
      // string s ="kanika\0ka";
      // cout<<s<<endl;
      //  for(int i=0;i<s.size();i++){
      //   cout<<s[i]<<" ";
      // }cout<<endl;
      // string s;
      // cin>>s;
      // int arr[26]={0};
      // int n =s.size();
      // for(int i=0;i<n;i++){
      //     char ch =s[i];
      //     arr[ch-'a']++;
      // }
      // int maxi =INT_MIN;
      // int ans=0;
      // for(int i=0;i<26;i++){
      //   if(maxi<arr[i]){
      //     ans =i;
      //     maxi=arr[i];
      //   }
      // }
      // char final='a'+ans;
      // cout<<final<<endl;
      // cout<<maxi<<endl;
    //   string s;
    //  getline(cin,s);
    //   cout<<s<<endl;
    // char ch[10]="kanika";
    // cout<<strlen(ch)<<endl;
    // char s1[10]="kannu";
    // char s2[10];
    // strcpy(s2,s1);
    // cout<<s2<<endl;
  //   string s="knika is a good girl";
  //  string k= replaceSpaces(s);
  //  cout<<k<<endl;
  
}