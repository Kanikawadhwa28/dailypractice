class Solution {
public:
    string removeOccurrences(string s, string part) {
        int m = s.length();
        int n= part.length();
        string ans;
        for(auto a:s){
            ans.push_back(a);
            if(ans.size()>= part.size() && ans.substr(ans.size() - part.size())==part){
            int m = part.size();
            while(m--){
                ans.pop_back();
            }
        }
        }
        return ans;
    }
};