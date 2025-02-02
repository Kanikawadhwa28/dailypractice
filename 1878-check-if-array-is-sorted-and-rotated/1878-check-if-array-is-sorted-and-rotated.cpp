class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> ans(nums.begin(),nums.end());
        sort(ans.begin(),ans.end());
        int n = nums.size();
        for(int i=0;i<n;i++){
            int last = nums[n-1];
            for(int j=n-1;j>0;j--){
                 nums[j]=nums[j-1];
            }
            nums[0]=last;
             if (nums == ans) return true;
        }
       return false;
    }
};