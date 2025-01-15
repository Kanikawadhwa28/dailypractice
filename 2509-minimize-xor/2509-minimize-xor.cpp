class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int setbit =__builtin_popcount(num2);
        // while(num2){
        //     num2= num2 & (num2-1);
        //     setbit++;
        // }
        cout<<setbit<<endl;
        int result=0;
        for(int i=31;i>=0 and setbit>0;i--){
               if(num1 & (1<<i)){
                setbit--;
                result+= (1<<i);
               }
        }cout<<result;
        for(int i=0;i<32 and setbit;i++){
            if((num1 & (1<<i))==0){
                setbit--;
                result+= (1<<i);
            }
        }
        return result;
    }
};