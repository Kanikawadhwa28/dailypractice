class Solution {
    #define p pair<int,int> 
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m= mat.size();
        int n= mat[0].size();
        vector<p> freq(m*n+1);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                freq[mat[i][j]] = make_pair(i,j);
            }
        }
        vector<int> rows(m,0);
        vector<int> col(n,0);
        for(int i=0;i<m*n;i++){
            p pi = freq[arr[i]];
            int x = pi.first;
            int y =pi.second;
            // cout<<x<<" "<<y<<endl;
            rows[x]++;
            col[y]++;
            if(rows[x]==n || col[y] ==m) return i;
        }
        return 0;
    }
};