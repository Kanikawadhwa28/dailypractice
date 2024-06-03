#include<iostream>
using namespace std;
int main(){
   
//     int a;
//    cin>>a;
//     if(a>0){
//         cout<<"positive";
//     }
//     else if(a<0){
//         cout<<"a is negative";
//     }
//     else{
//         cout<<"a is 0";
//     }
// int a=9;
// if(a==9){
//     cout<<"nine";
// }
// if(a>0){
//     cout<<"positive";
// }
// else{
//     cout<<"negative";
// }
    // int a=2;
    // int b=a+1;
    // if((a=3)==b){
    // cout<<a+2;
    // }
    // else{
    //     cout<<a+1;
    // }
    // int a =24;
    // if(a>20){
    //     cout<<"kanu";
    // }
    // else if(a==24){
    //     cout<<"kanika";
    // }
    // else{
    //     cout<<"cute";
    // }
    char a;
    cin>>a;
    if(a>='a' && a<='z'){
        cout<<"lowercase";
    }
    else if(a>='A' && a<='Z'){
        cout<<"uppercase";
    }
    else{
        cout<<"numeric";
    }
}