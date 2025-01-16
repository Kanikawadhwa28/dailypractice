class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int ans = 0;
        if(m&1){
            for(auto i :nums2) ans^=i;
        }
        if(n&1){
            for(auto i :nums1) ans^=i;
        }
        // int k=nums1.size()*nums2.size();
        // int ans=0;
        // // vector<long long> nums3(k);
        // for(int i=0;i<nums1.size();i++){
        //     for(int j=0;j<nums2.size();j++){
        //          ans ^= (nums1[i]^nums2[j]);
        //     }
        // }
        // // int ans=0;
        // // for(auto i :nums3){
        // //     ans ^= i;
        // // }
        return ans;
    }
};