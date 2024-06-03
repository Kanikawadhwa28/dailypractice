#include<iostream>
using namespace std;
int main(){
//   int a =4;
//   int b =6;
  
//   cout<<"a&b"<<" "<<(a&b)<< endl;
//   cout<<"a|b"<<" "<<(a|b)<< endl;
//   cout<<"a^b"<<" "<<(a^b)<< endl;
//   cout<<"!a"<<" "<<!a<< endl;
//   cout<<"!a"<<" "<<~a<< endl;
//   cout<<(17<<2)<<endl;
//   cout<<(17>>2)<<endl;
//      int i =3;
//    int a =2;
//      int sum =a+ (i++);
//      cout<<sum<<endl;
//      cout<<i;
        // int i=11;
        // int a=++i;
        // cout<<a<<endl<<i<<endl;
        // int i=7;
        // cout<<(++i)<<endl;
        // cout<<(i++)<<endl;
        // cout<<(i--)<<endl;
        // cout<<(--i)<<endl;
        // int a, b=1;
        // a=10;
        // if(++a)
        //    cout<<b;
        //    else
        //    cout<<++b;
        // int a=1;
        // int b=2;
        // if(a-->0 || ++b>2){
        // cout<<"stage 1 inside if ";
        // }
        // else{
        //     cout<<"stage 2 inside else";
        // }
        // cout<<a<<" "<<b<<endl;
        // int num =3;
        // cout<< 25*(++num)<<endl;
        // int a=1;
        // int b =a++;
        // int c=++a;
        // cout<<a<<endl;
        // cout<<b<<endl;
        // cout<<c<<endl;
        // int n ;
        // cin>>n;
    //     cout<<"0"<<" "<<1<<" ";
    //      int x=0;
    //     int y=1;
    //   for(int i=0; i<=n;i++){
    //     int c =x+y;
    //     cout<<c<<" ";
    //     x=y;
    //     y=c;
    //   }
    // bool b =true;
    // for(int i=2; i<n;i++){
    //     if(n%i ==0){
    //         b=false;
    //         break;
    //     }
    // }
    // if(b==1){
    //     cout<<"prime";
    // }
    // else{
    //     cout<<"not prime";
    // }
    // for(int i=0; i<=5;i--){
    //     cout<<i<<" ";
    //     i++;
    // }
    // for(int i=0; i<=15; i+=2){
    //     cout<<i<<" ";
    // if(i&1){
    //     continue;
    // }
    // i++;
    // }
    // for(int i=0;i<5;i++){
    //     for(int j=i; j<=5;j++){
    //         if(i+j==10){
    //             break;
    //         }
    //         cout<<i<<" "<<j<<endl;
    //     }
    // }
//    int a =5;
//     int a;
//     cout<<a;
        // cout<<2*3/4+5;
        int n;
        cin>>n;
        vector<int> ans;
        for(auto i :n){
            int rem = n%2;
            ans.pushback(rem);
        }
        cout<<ans;
}
