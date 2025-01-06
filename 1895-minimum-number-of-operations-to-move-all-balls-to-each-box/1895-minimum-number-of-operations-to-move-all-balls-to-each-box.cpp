class Solution {
public:
    vector<int> minOperations(string boxes) {
        int leftsum=0,rightsum=0,prefix_sum=0,sum=0;
        for(int i=0;i<boxes.size();i++){
            if(boxes[i]=='1'){
                rightsum++;
                sum+=i;
            }
        }
        vector<int> res(boxes.size());
        for(int i=0;i<boxes.size();i++){
            int moves = prefix_sum+sum;
            res[i]=moves;
            if(boxes[i]=='1'){
                rightsum--;
                leftsum++;
            }
            sum-=rightsum;
            prefix_sum+=leftsum;
        }
        return res;
        // vector<int> ans;
        // int n = boxes.size();
        // for(int i=0;i<n;i++){
        //     int count=0;
        //     for(int j=0;j<n;j++){
        //         if(boxes[j]=='1'){
        //             count+= abs(j-i);
        //         }
        //     }
        //     ans.push_back(count);
        // }
        // return ans;
    }
};