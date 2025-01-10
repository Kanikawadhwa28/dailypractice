class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> ans;
        auto getfreq = [](string word){
            vector<int> freq(26,0);
            for(int i=0;i<word.size();i++){
                char ch= word[i];
                freq[ch-'a']++;
            }
            return freq;
         };
        vector<int> frequency(26,0);
        for(int i=0;i<words2.size();i++){
               vector<int> f = getfreq(words2[i]);
               for(int i=0;i<26;i++){
                frequency[i]= max(f[i],frequency[i]);
               }
        }
        // for(int i=0;i<26;i++){
        //     // if(frequency[i]){
        //         cout<<frequency[i]<<" ";
        //     // }
        for(int i=0;i<words1.size();i++){
            vector<int> f = getfreq(words1[i]);
            bool b =true;
            for(int i=0;i<26;i++){
                if(f[i]<frequency[i]){
                    b = false;
                    break;
                }
            }
            if(b) ans.push_back(words1[i]);
        }
      return ans;
    }
};