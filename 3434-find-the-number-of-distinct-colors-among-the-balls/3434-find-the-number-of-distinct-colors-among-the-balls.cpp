class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        vector<int> ans;

        int n=queries.size();
        unordered_map<int,int> mp;
        unordered_map<int,int> distinct;
        for(auto i :queries){
            int ball=i[0],color=i[1];
             if(mp.count(ball)){
                int prev = mp[ball];
                if(--distinct[prev]==0){
                    distinct.erase(prev);
                }
             }
             mp[ball]=color;
             distinct[color]++;
             ans.push_back(distinct.size());
        }
        return ans;
    }
};