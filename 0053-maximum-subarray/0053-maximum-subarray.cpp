class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //kadane's algorithm 
        int sum =0;
        int maxi =nums[0];
        int n = nums.size();
        for(int i=0;i<n;i++){
            sum = sum + nums[i];
            maxi = max(maxi, sum);
            if(sum<0) sum =0;
        }
        return maxi;
    }
};