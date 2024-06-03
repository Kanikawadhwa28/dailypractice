// class Solution {
//  public:
//     vector<int> sequentialDigits(int low, int high) {
//           vector<int> ans;
        
//         int countl=0;
//           int counth=0;
//         int highcopy=high;
//         int lowcopy=low;
//         int ld,hd;
//         while(low!=0){
//              ld=low%10;
//             countl++;
//         low=low/10;
//         }
//         while(high!=0){
//              hd=high%10;
//             counth++;
//         high=high/10;
//         }
//         int num=0;
//         int ldcopy=ld;
//         while(countl<=counth && num<=highcopy ){
//             num=0;
//             ldcopy=ld;
//         for(int i=0;i<countl;i++){
//             num = num*10+ldcopy;
//             ldcopy++;
//             if(ldcopy==10){
//                 countl++;
//                 ld=0;
//                 break;
//            }}
//             cout<<num<<endl;
//             if(num>=highcopy)
//                 ans.push_back(num);
//             ld++;}
//         }
//          sort(ans.begin(), ans.end());
//          ans.erase(unique(ans.begin(), ans.end()), ans.end());
//         return ans;
//     }
// };
#include <iostream>
#include <stack>
#include <vector>
#include <bitset>
#include <cmath>
using namespace std;
int main(){
    // int arr[5]={0};
    // //  fill_n(arr,5,-1);
    // string s ="babcd";
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
//    for(int i=0;i<5;i++){
//       char ch= s[i];
//       arr[ch-'a']++;
//     }

//      for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
    // cout<<endl;
    //  for(int i=0;i<5;i++){
    //   arr[s[i]-'a']=i;
    // }
    //  for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }
    string s ="kanika" ;
    vector<char> k;
    string p="";
    for(int i=0;i<s.size();i++){
        char ch = s[i];
        k.push_back(ch);
    }
    for(int i=0;i<k.size();i++){
        
    }
}