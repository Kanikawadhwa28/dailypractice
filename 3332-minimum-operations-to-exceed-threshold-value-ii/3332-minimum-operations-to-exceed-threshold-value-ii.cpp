class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
       priority_queue<long long, vector<long long>, greater<long long>> pq(nums.begin(), nums.end());
        int count=0;
        while(pq.size()>1 && pq.top()<k){
            long long a= pq.top();
            pq.pop();
            long long b=pq.top();
            pq.pop();
            long long x = a*2+b;
            if(x<0) return 0;
            pq.push(x);
          count++;
        }
        return (pq.top() >= k) ? count : -1;
    }
};