class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n =s.size();
        vector<int> diff(n+1,0);
        for(auto i :shifts){
            if(i[2]==1){
                  diff[i[0]]++;
                  diff[i[1]+1]--;
            }
           else{
               diff[i[0]]--;
               diff[i[1]+1]++;
           }
        }
        for(int i=1;i<n;i++){
              diff[i]+=diff[i-1];
        }
        string res;
        for(int i=0;i<n;i++){
            int shift = diff[i]%26;
            if(shift<0){
                 shift = shift+26;
            }
        char curr = char((s[i]-'a'+shift)%26+97);
        res.push_back(curr);
        }
        return res;
    }
};