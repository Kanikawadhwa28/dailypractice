class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            vector<int> arr(51);
            for(int j=0;j<=i;j++){
                arr[A[j]]++;
                arr[B[j]]++;    
        }
        int count=0;
         for(int k=1;k<=n;k++){
            if(arr[k]>=2){
                count++;
            }
            ans[i]=count;
         }
        }
        return ans;
    }
};