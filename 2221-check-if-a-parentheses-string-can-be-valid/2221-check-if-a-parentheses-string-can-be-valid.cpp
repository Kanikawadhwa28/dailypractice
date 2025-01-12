class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n= s.size();
        if(n%2==1) return false;
        int open=0,wild=0,close=0;
        for(int i=0;i<n;i++){
            if(locked[i]=='0') wild++;
            else if(s[i]=='(') open++;
            else close++;
            if(wild<close-open) return false;
        }
        cout<<"hiiii";
        cout<<wild<< " "<<open<<" "<<close<<endl;
        open=close=wild=0;
        for(int i=n-1;i>=0;i--){
            if(locked[i]=='0') wild++;
            else if(s[i]=='(') open++;
            else close++;
            if(wild<open-close) return false;
        }
        cout<<wild<< " "<<open<<" "<<close<<endl;
        return true;
    }
    
};