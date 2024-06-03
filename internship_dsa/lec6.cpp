#include<iostream>
#include<cmath>
#include<vector>
#include<stack>
#include<string>
using namespace std;
int main(){
 int n1;
       cin>>n1;
       //decimal to binary
     /*  stack<int> ans;
        vector<int> result;
       while(n!=0){
            int rem = n%2;
            ans.push(rem);
            n=n/2;
        }
        while(!ans.empty()){
           int d= ans.top();
           ans.pop();
            result.push_back(d);
        }

      for (int i = result.size() - 1; i >= 0; i--) {
        cout << result[i];
    }
      */
      //binary to decimal 
    //   int i=0,ans=0;
    //     while(n!=0){
    //         int bit=n%10;
    //         if(bit==1){
    //             ans =ans+ pow(2,i);
    //         }
    //         n=n/10;
    //         i++;
    //     }
    //     cout<<ans;
    //decimal to binary 
       cout<<"number is "<<n1<<endl;
       int n = abs(n1);
       cout<<"absolute value is "<<n<<endl;
      //case 1 : n is positive number 
      int i=0,ans=0;
   
        while(n!=0){
            int bit = n&1;
              ans = ans + bit * pow(10,i);
              i++;
              n=n>>1;
        }
        cout<<ans<<endl;
      
     
       //case 2 : n is negative integer 
        //  int temp=ans;
        //  string s = to_string(temp);
        //  cout<<"temp"<<" "<<temp<<endl;
        //  cout<<s<<endl;
        //  for(char& i:s){
        //      i = (i == '0') ? '1' : '0';
        //  }
        //  cout<<s<<endl;
    //      int r=0;
    //      while(temp!=0){
    //         if(temp[r]==0){
    //             temp[r]=1;
    //         }
    //         else if(temp[r]==1){
    //             temp[r]=0;
    //         }
    //         r++;
    //      }
    //      cout<<temp<<endl;
    //      cout<<(temp+1)<<endl;
    //   }
         //decimal to binary
      /*   int ii=0, anss=0;
         while(n!=0){
            int digit =n%10;
            if(digit ==1){
                anss += pow(2,ii);
               ii++;
            }
         }
         cout<<anss<<endl;
         */ 
    return 0;
}
