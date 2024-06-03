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
//  string frequencySort(string s) {
//         unordered_map<char,int> mp;
//         string str="";
//         int n=s.size();
//         for(int i:s){
//             mp[i]++;
//         }
//      for(auto i:mp){
//             cout<<i.first<<" "<<i.second;
//             cout<<endl;
//             str.push_back(i.first);
//         }
        
//         return str;
//     }
int binarysearch(int x){
       int start=0;
        int end=x;
        long long mid;
        long long ans;
        while(start<end){
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
    
    
int main(){
    int number;
    cin>>number;
    cout<<"sq root is"<<endl;
    int sq=binarysearch(number);
    



    // unordered_map<string,int> m;
    //   m["hii"]=1;
    //   m["byee"]=0;
    //   cout<<m["hii"]<<endl;
    // cout<<m["hello"]<<endl;
    // cout<<m["byee"]<<endl;
    //   cout<<m.at("hello")<<endl;
    //    cout<<m.size()<<endl;
    //    cout<<m.count("hello")<<endl;
    //  //  m.erase("hello");
    //      cout<<m.size()<<endl;
    //    cout<<m.count("hello")<<endl;
    //    for(auto i:m){
    //     cout<<i.first<<" "<<i.second<<endl;
    //    }
//     for(auto it = m.begin(); it != m.end(); ++it) {
//     //auto i = *it;
//     cout<<it->first<<" "<<it->second<<endl;
// }
    // int arr[5]={1,2,3,4,5};
    //  map<vector<int> ,vector<string> > m;
    string s="tree";
   string k= frequencySort;
   cout<<k<<endl;
}