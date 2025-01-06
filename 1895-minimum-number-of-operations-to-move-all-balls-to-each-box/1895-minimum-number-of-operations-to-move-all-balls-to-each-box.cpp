class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans;
        // int counto=0;
        // for(auto i :boxes){
        //     if(i=='1') {
        //         counto++;
        //         pos.push_back(i);
        //     }
        // }
        int n = boxes.size();
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(boxes[j]=='1'){
                    count+= abs(j-i);
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};