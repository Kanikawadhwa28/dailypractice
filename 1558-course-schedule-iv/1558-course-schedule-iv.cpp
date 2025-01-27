class Solution {
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        int n = numCourses;
        vector<bool> ans;
        // if(prerequisites.empty()) return ans;
        vector<vector<int>> graph(n);
        vector<int> indegree(n,0);
        for(auto i:prerequisites){
            graph[i[0]].push_back(i[1]);
            indegree[i[1]]++;
        }
      queue<int> q;
      for(int i=0;i<n;i++){
        if(indegree[i]==0) q.push(i);
      }
      vector<unordered_set<int>> np(n);
      while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto i :graph[node]){
            np[i].insert(node);
            for(int pr:np[node]){
                np[i].insert(pr);
            }
            if(--indegree[i]==0) q.push(i);
        }
      }
      for(auto q:queries){
        ans.push_back(np[q[1]].count(q[0]));
      }
    return ans;
    }
};