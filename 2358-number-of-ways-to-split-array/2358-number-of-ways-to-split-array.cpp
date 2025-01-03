class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long leftsum=0, rightsum=0;
        for(auto i :nums){
            rightsum+= i;
        }
        int count=0;
        for(int i=0;i<nums.size()-1;i++){
            leftsum+= nums[i];
            rightsum-=nums[i];
            if(leftsum >= rightsum)
                count++;
        }
        return count;
    }
        // int n = nums.size();
        // int min_splits = n-1;
        // vector<long long> suffixsum(n,0);
        // vector<long long> prefixsum(n,0);
        // suffixsum[n-1]= nums[n-1];
        // for(int i=n-2;i>=0;i--){
        //     suffixsum[i]=nums[i]+suffixsum[i+1];
        // }
        // // for(auto i :suffixsum){
        // //     cout<<i<<" ";
        // // }cout<<endl;
        // prefixsum[0]=nums[0];
        // for(int i=1;i<n;i++){
        //     prefixsum[i]=nums[i]+prefixsum[i-1];
        // }
        // //   for(auto i :prefixsum){
        // //     cout<<i<<" ";
        // // }cout<<endl;
        // int count =0;
        // for(int i=0;i<n-1;i++){
        //     if(prefixsum[i]>=suffixsum[i+1]) count++;
        // }
        // return count;
    // }
};