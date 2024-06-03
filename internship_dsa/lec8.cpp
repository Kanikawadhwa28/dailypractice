 #include <iostream>
#include <bitset>
#include <cmath>
using namespace std; 
    // int decimalToBinary(int n) {
    // if (n == 0) {
    //     return 0; // Special case: decimal number 0
    // }
    // int count=0;
    // string s = "";
    // while (n != 0) {
    //     int bit = n & 1;
    //     n = n >> 1;
    //     if(bit==1) count++;

    //     // s = char(bit + '0') +s ; // Corrected line: Prepend the bit to the string
    // }
    // return count;
  


// int factorial(int n){
//     int prod=1;
//     for(int i=1; i<=n; i++){
//         prod*=i;
//     }
//     return prod;
// }
// int ncr(int n,int r){
//     int num =factorial(n);
//     int denom = factorial(r)*factorial(n-r);
//     int number = num/denom;
//     return number;
// }
// void printcount(int n){
//     for(int i=1; i<=n;i++){
//         cout<<i<<" ";
//     }
// }
    //  bool isprime(int n){
    //     for(int i=2; i<n;i++){
    //         if(n%i==0) return false;
    //     }
    //     return true;
    //  }
// bool iseven(int n){
//     if(n%2 ==0) return true;
//     return false;
// }
// int power(int a, int b){
//     int ans =1;
//     for(int i=1; i<=b;i++){
//         ans *= a;
//     }
//     return ans;
// }

    // for(int i=0; i<5;i++){
    //     cout<<" hii for i = "<<i<<endl;
    //     if(i==3){
    //         continue;
    //     }
    //     cout<<" after up "<<i<<endl;
    // }
//    int n;
//     cin >> n;
//     while(INT_MIN){
//         switch (n){
//             case 1: cout <<"bla"<< endl;
//             break;
//             case 2: cout << "int" << endl;
//             default: cout << "defalut" << endl;
//         }
//         exit(0);
//     }
//     return 0;
// }
//  int amount;
//   cin>>amount;
//   int Rs100 , Rs50 , Rs20 , Rs1;

//   switch(1)
//   {
//       case 1: Rs100=amount/100;
//               amount=amount%100;
//               cout<<"No of 100 Rupee ="<<Rs100<<endl;
              
         
//       case 2: Rs50=amount/50;
//               amount=amount%50;
//               cout<<"No of 50 Rupee ="<<Rs50<<endl;
              

//       case 3: Rs20=amount/20;
//               amount=amount%20;
//               cout<<"No of 20 Rupee ="<<Rs20<<endl;
               

//       case 4: Rs1=amount/1;
//               amount=amount%1;
//               cout<<"No of 1 Rupee ="<<Rs1<<endl; 
          
//            }
    //  int a , b;
    //  cin>>a >> b;
    // power(a,b);
    // int n;
    // cin>>n;
    // //    bool b =iseven(n);
    //   double logResult = log2(n);
    //   cout<<logResult<<endl;
    // //    cout<<b<<endl;
//     double d =3.5;
//    double ceilv = ceil(d);
//    double floorv = floor(d);
//     cout<<ceilv<<endl;
//     cout<<floorv<<endl;
    //    int d =factorial(n);
    //    cout<<d<<endl;
    //  int k=  ncr(n,r);
    //     cout<<k<<endl;
// void dummy(int n){
//     cout<<"value of n is "<<n<<endl;
// }
int update(int a){
   int ans =a*a;
   return ans;
}
    int main() {
    //   int n ;
    //   cin>>n;
    //   dummy(n);
    //   cout<<"value of n is "<<n<<endl;
    //    int a=14;
    //  a  =update(a);
    //     cout<<a<<endl;
    //    cout<<k<<endl;
       int arr[5]={1};
       fill_n(arr,5,3);
       cout<<arr[4]<<endl;
       cout<<arr[0]<<endl;
}

   
   
