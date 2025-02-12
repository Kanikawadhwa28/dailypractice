class Solution {
public:
     int sumdigits(int n){
        int sum=0;
        while(n){
          sum+=n%10;
           n/=10;
        }
        return sum;
     }
    int maximumSum(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        int maxi=-1;
        for(int i=0;i< n;i++){
            int digitsum =sumdigits(nums[i]);
            if(mp.find(digitsum)==mp.end()){
                mp[digitsum]=nums[i];
            }
            else{
                maxi = max(maxi,mp[digitsum]+nums[i]);
                mp[digitsum]= max(mp[digitsum],nums[i]);
            }
        }
        return maxi;
    }
};