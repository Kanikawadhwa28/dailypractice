class Solution {
public:
   bool check(int i,int sum,int num,string s){
    if(i==s.length())
     return sum==num;
     if(sum>num) return false;
     bool possible=false;
     for(int j=i;j<s.length();j++){
        string sub=s.substr(i,j-i+1);
        int val=stoi(sub);
        possible = possible || check(j+1,sum+val,num,s);
        if(possible==true) return true;

     }
        return possible;
   }
    int punishmentNumber(int n) {
        int result =0;
        for(int i=1;i<=n;i++){
            int sq=i*i;
            string s= to_string(sq);
            if(check(0,0,i,s)==true){
                result+=sq;
            }
        }
        return result;
    }
};