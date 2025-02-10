class Solution {
public:
    string clearDigits(string s) {
        string ans;
        for(auto i :s){
            if(i<='z' && i>='a') ans.push_back(i);
            if(i>='0' && i<='9') ans.pop_back();
        }
        return ans;
    }
};