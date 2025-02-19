class Solution {

public:
         vector<string> res;
    void build(int n,int k,string s){
        if(res.size()==k) return;
        if(s.size()==n){
            res.push_back(s);
            return;
        }
        for(auto i:{'a','b','c'}){
            if(s.size()==0 or s.back()!=i){
                build(n,k,s+i);
            }
        }
    }
    string getHappyString(int n, int k) {
      
        build(n,k,"");
        if(res.size()<k) return "";
        return res[k-1];

    }
};