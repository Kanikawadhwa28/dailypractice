class Solution {
public:
    string smallestNumber(string pattern) {
        int n=pattern.size();
        stack<int> st;
        string res="";
        for(int i=1;i<=n+1;i++){
           char c=pattern[i-1];
           st.push(i);
           if(c=='I' or i==n+1){
             while(!st.empty()){
                res.push_back(char('0'+st.top()));
                st.pop();
             }
           }
        }
        return res;
    }
};