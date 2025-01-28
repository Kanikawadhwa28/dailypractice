class Solution {
public:
    bool isvalid(int x,int y,int m,int n ){
        return (x>=0 && y>=0 && x<m && y<n);
    }
    int dfs(vector<vector<int>>& grid,vector<vector<bool>>& visited,int x,int y,int m,int n){
        int count = grid[x][y];
        vector<int> dir={-1,0,1,0,-1};
        for(int i=0;i<4;i++){
            int newx= x+dir[i];
            int newy = y+dir[i+1];
            if(isvalid(newx,newy,m,n)&& !visited[newx][newy] && grid[newx][newy]>0){
                visited[newx][newy]=true;
                count+= dfs(grid,visited,newx,newy,m,n);
            }
        }
        return count;
    }
    int findMaxFish(vector<vector<int>>& grid) {
        int m =grid.size();
        int n= grid[0].size();
        int maxi=0;
        vector<vector<bool>> visited(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!visited[i][j] && grid[i][j]>0){
                    visited[i][j]=true;
                    maxi =max(maxi,dfs(grid,visited,i,j,m,n));
                }
            }
        }
        return maxi;
    }
};