class Solution {
public:
    int build(vector<int> freq){
        int ans=0;
        for(int i=0;i<26;i++){
            if(freq[i]>0){
                freq[i]--;
                ans +=1+build(freq);
                freq[i]++;
            }
        }

        return ans;
    } 
    int numTilePossibilities(string tiles) {
        vector<int> freq(26,0);
        for(auto i:tiles){
            freq[i-'A']++;
        }
        return build(freq);
    }
};