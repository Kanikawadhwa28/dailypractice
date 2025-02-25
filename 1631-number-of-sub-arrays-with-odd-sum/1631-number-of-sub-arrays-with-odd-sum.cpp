class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int MOD=1e9+7;
        int odd=0,even=1,pre=0,total=0;
        for(int i=0;i<arr.size();i++){
            pre+=arr[i];
            if(pre&1){
               total= (total+even)%MOD;
                odd++;
            }
            else{
                total= (total+odd)%MOD;
                even++;
            }
        }
        return total;
    }
};