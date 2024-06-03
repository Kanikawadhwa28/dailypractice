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
int main(){
    // vector<int> a;
    // a.push_back(1);
    // cout<< a.capacity()<<endl;
    // a.push_back(2);
    // cout<< a.capacity()<<endl;
    // a.push_back(3);
    // cout<< a.capacity()<<endl;
    // a.shrink_to_fit();
    // cout<< a.capacity()<<endl;
    // cout<<a.front()<<endl;
    // cout<<a.back()<<endl;
    // a.pop_back();
    //  cout<<a.front()<<endl;
    // cout<<a.back()<<endl;
    // cout<<"vector size "<<a.capacity()<<endl;
    // a.clear();
    // cout<<"vector size "<<a.capacity()<<endl;
     set<int> s;
     s.insert(1);
     s.insert(4);
     s.insert(2);
     s.insert(8);
     s.insert(9);
     s.insert(10);
     set<int>::iterator it=s.begin();
     it++;
    
     for(auto i :s){
        cout<<i<<" ";
     }
     cout<<endl;
     s.erase(it);
      for(auto &i :s){
        cout<<i<<" ";
     }

    return 0;
}