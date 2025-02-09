class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long ans =0;
        int n= nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.count(nums[i]-i))
                 ans += mp[nums[i]-i];
            mp[nums[i]-i]++;
        }
    //    long long result = (n*(n-1)/2)-ans;
     return (1LL * n * (n - 1) / 2) - ans;
    }
};