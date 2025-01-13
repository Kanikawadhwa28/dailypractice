class Solution {
public:
    int minimumLength(string s) {
        int n=s.size();
        if(s.size()<2) return s.size();
        unordered_map<char,int> mp;
        for(auto i :s){
            mp[i]++;
        }
        int count=0;
        for(auto i :mp){
           if(i.second%2) count+=1;
           else count+=2;
        }
        return count;
    }
};