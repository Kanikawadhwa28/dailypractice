class Solution {
    #define p pair<int,int> 
public:
bool exists(int i, int j, int m, int n) {
    return (i >= 0 && j >= 0 && i < m && j < n);
}
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int m = isWater.size();
        int n = isWater[0].size();
        vector<vector<int>> result(m,vector<int> (n,0));
        vector<vector<bool>> visited(m,vector<bool> (n,false));
        queue<p> q;
        for(int i=0;i<m;i++){
            for(int j =0;j<n;j++){
                     if (isWater[i][j]==1){
                              q.push(make_pair(i,j));
                              visited[i][j]= true;
                     }
            }
        }
       
    vector<int> dir={-1,0,1,0,-1};
    int level=0;
    while(!q.empty()){
        int siz=q.size();
        for(int k=0;k<siz;k++){
         p curr = q.front();
         q.pop();
         int x = curr.first;
         int y = curr.second;
         for(int i=0;i<4;i++){
            int newx = x+dir[i];
            int newy = y+dir[i+1];
         if(exists(newx,newy,m,n) && !visited[newx][newy]){
            q.push(make_pair(newx,newy));
            result[newx][newy]=1+level;
            visited[newx][newy]=true;
         }
         }
        }
         level++;
    }
    return result;
    }
     //  for (const auto& r : result) {
        // for (int val : r) {
        //     cout << val << " ";
        // }
        // cout << endl;
//     }cout<<endl;
//     for(int i=0;i<result.size();i++){
//         for(int j=0;j<result[0].size();j++){
//         // if(result[i][j]==0){
//     if(exists(i,j+1,m,n)  && !(abs(result[i][j+1]-result[i][j])==1)) result[i][j+1]=1+result[i][j];
//     if(exists(i+1,j,m,n)  && !(abs(result[i+1][j]-result[i][j])==1)) result[i+1][j]=1+result[i][j];
//     if(exists(i-1,j,m,n)  &&! (abs(result[i-1][j]-result[i][j])==1)) result[i-1][j]=1+result[i][j];
//   if(exists(i,j-1,m,n) && !(abs(result[i][j-1]-result[i][j])==1)) result[i][j-1]=1+result[i][j];
//                         // }
//         }
//     }
    // for (const auto& r : result) {
    //     for (int val : r) {
    //         cout << val << " ";
    //     }
    //     cout << endl;
    // }
};