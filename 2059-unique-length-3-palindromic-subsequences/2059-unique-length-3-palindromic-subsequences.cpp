class Solution {
    #define p pair<int,int>
public:
    int countPalindromicSubsequence(string s) {
        int n = s.size();
        if(n<3 ) return 0;
        unordered_map<char,p> mp;
        for(int i=0;i<n;i++){
            if(!mp.count(s[i])){
                mp[s[i]].first = mp[s[i]].second =i;
            }
            else{
                mp[s[i]].second=i;
            }
        }
        int count =0;
        for(auto [c,pr]:mp){
            if(pr.first==pr.second) continue;
            count+= unordered_set<char>(s.begin()+pr.first+1,s.begin()+pr.second).size();
        }
        return count;
    }
};