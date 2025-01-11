class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.length()<k) return false;
        unordered_map<char,int> mp;
        for(auto i :s){
            mp[i]++;
        }
        int oddcount=0;
        for(auto i :mp){
            if(i.second%2==1){
                oddcount++;
            }
        }
        if(oddcount>k) return false;
        return true;
    }
};