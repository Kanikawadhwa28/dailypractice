#include<iostream>
#include<cmath>
#include<vector>
#include<stack>
#include<bitset>
using namespace std;
int main(){
    cout<<"hii"<<endl;
    int n ;
    cin>>n;
    double result = log(n)/log(2);
    double ceil= ceil(result);
    double floor = floor(result);
    if(ceil == floor) return true;
    return false;
    // bool b =false;
    // for(int i=0;i<=sqrt(n);i++){
    //         if(n==pow(2,i)){
    //             b =true;
    //         }
    // }
    // if(b==true){
    //     cout<<"true"<<endl;
    // }
    // else{
    //    cout<<"false"<<endl;
    // }
//    int n;
//    cin>>n;
//    string s="";
//    while(n!=0){
//     int bit=n&1;
//     s+= (bit+'0');
//     n=n>>1;
//    }
//    cout<<s<<endl;
//    int i=0;
//    int count=0;
//    while(i<s.length()){
//     if(s[i]==1){
//         count++;
//     }
//    }
//     if(count ==1){
//         cout<<"true"<<endl;
//     }
//     else{
//         cout<<"false"<<endl;
//     }
    // int m =n;
    //     int o= ~n;
    //     int mask=0;
    //     int k=0;
    //     while(n!=0){
    //        n= n>>1;
    //         k++;
    //     }    
    //     cout<<k<<endl;
    //     // while(k--){
    //     //     mask<<1;
    //     // }
    //     cout<<mask<<endl;
    //     int final = mask & o;
    //     cout<< final<<endl;
    }
    //     int i=0;
    //     string ans="";
    //     while(n!=0){
    //         int bit =n&1;
    //           n=n>>1;
    //          bit = (bit==0)? 1:0;
    //         ans += (bit+'0');
    //         i++;
    //     }
    //     cout<< ans<<endl;

    //     int j=0,final=0;
    //     while(j<=ans.length()){
    //    // int digit=ans%10;
    //     if(ans[j]=='1'){
    //         final += pow(2,j);
    //     }
    //     j++;
    //     }
    //     cout<<final;
    // }
    // if(bit==1){
            //     bit =0;
            // }
            // else if(bit==0){
            //     bit=1;
            // }
    //    int binaryNumber;
    //    cin>>binaryNumber;
    //    cout<<"orig"<<" " <<n<<endl;
    //  bitset<4> binary(n);
    //  string s = binary.to_string();
    //  cout<<s<<endl;
    
    //  bitset<5> bs(binaryNumber);
    //  cout<<bs;

     //  std::string binaryString = bs.to_string();
   // cout<<binaryString<<endl;
// }