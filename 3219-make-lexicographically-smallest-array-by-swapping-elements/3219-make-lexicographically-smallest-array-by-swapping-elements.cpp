class Solution {
    #define p pair<int,int>
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        int n = nums.size();
        vector<p> copied;
        for(int i=0;i<n;i++){
            copied.push_back(make_pair(nums[i],i));
        }
        sort(copied.begin(),copied.end());
        int left=0,right=1;
        while(right<n){
            vector<int> pos = {copied[left].second};
            while(right< n && abs(copied[right].first-copied[right-1].first)<=limit){
                 pos.push_back(copied[right].second);
                right++;
            }
            sort(pos.begin(),pos.end());
            for(int i=0;i<right-left;i++)
                nums[pos[i]] = copied[left+i].first;
            
            left = right;
            right++;
        }
        return nums;
    }
};