class Solution {
public:
    int maxScore(string s) {
        int n = s.size();
        vector<int> prefixsum(n,0);
        if(s[0]=='0') prefixsum[0]=1;
       for(int i=1;i<n;i++){
        prefixsum[i]=prefixsum[i-1];
          if(s[i]=='0') {
            prefixsum[i]+=1;
        }
       }
        vector<int> suffixsum(n,0);
       if(s[n-1]=='1') suffixsum[n-1]=1;
       for(int i=n-2;i>=0;i--){
        suffixsum[i]=suffixsum[i+1];
        if(s[i]=='1'){
            suffixsum[i]+=1;
        }
       }
       int maxi=0;
       for(int i=0;i<n-1;i++){
        int score= prefixsum[i]+suffixsum[i+1];
        maxi= max(score,maxi);
       }
       return maxi;
        // for(auto i :prefixsum){
        //     cout<<i<< " ";
        // }cout<<endl;
        // for(auto i :suffixsum){
        //     cout<<i<< " ";
        // }cout<<endl;
        //return 1;
    }
};