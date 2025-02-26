class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int mini=0,maxi=0,pre=0;
        for(int i:nums){
            pre+=i;
            mini=min(pre,mini);
            maxi=max(pre,maxi);
        }
        return maxi-mini;
    }
};