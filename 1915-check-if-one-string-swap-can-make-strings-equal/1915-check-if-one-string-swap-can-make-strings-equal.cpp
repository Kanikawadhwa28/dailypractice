class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2) return true;
        // int i=0,j=0;
        int m =s1.size(),n=s2.size();
        vector<int> index;
        for(int i=0;i<m;i++){
            if(s1[i]!=s2[i]){
               index.push_back(i);
            }
        }
        if(index.size()!=2) return false;
        int i = index[0], j = index[1];
        swap(s1[i], s1[j]);
        return s1 == s2;
        return true;
    }
};