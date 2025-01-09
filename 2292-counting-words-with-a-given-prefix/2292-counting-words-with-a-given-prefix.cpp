class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n=pref.size();
        int m=words.size();
        int count=0;
        bool b =true;
        for(int i=0;i<m;i++){
            b = true;
            for(int j=0;j<n;j++){ 
               if(words[i][j]!=pref[j]){
                b =false;
                break;
               }
            }
            if(b) {
                count++;
                cout<<words[i]<<" ";
            }
        }
        return count;
    }
};