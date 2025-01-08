class Solution {
public:
    bool isprefix(string a, string b){
        int m= a.size();
        int n=b.size();
        if(m>n) return false;
        for(int i=0;a[i]!='\0';i++){
            if(a[i]!=b[i])
            return false;
        }
         return true;
    }
    bool issuffix(string a , string b ){
        int m = a.size();
        int n=b.size();
        if(m>n) return false;
        for(int i=m-1;i>=0;i--){
          if(a[i]!=b[n-(m-i)])
          return false;
        }
        return true;
    }
    
    int countPrefixSuffixPairs(vector<string>& words) {
        int count=0;
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                if(isprefix(words[i],words[j]) && issuffix(words[i],words[j]))
                count++;
            }
        }
        return count;
    }
};