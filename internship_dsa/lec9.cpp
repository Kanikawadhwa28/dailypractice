 #include <iostream>
 #include <stack>
 #include <vector>
#include <bitset>
#include <cmath>
using namespace std;
void printarr(int arr[]){
    int n=8;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
// void update(int arr[]){
//     arr[0]=1200;
//     cout<<"inside update"<<endl;
//       for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//            }
// }
void reverse(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
       int temp= arr[i];
       arr[i]= arr[j];
       arr[j]= temp;
       i++;
       j--;
    }
    for(int i=0;i<n;i++){
             cout<<arr[i]<<" ";
           }
    
}
// void swapalternate(int arr[],int n){
//     for(int i=0;i<n-1;i+=2){
//              swap(arr[i],arr[i+1]);
//            }
    
// }
//  bool uniqueO(vector<int>& arr,int n) {
//         vector<int> brr;
//         sort(arr.begin(),arr.end());
//         int count=1;
//         for(int i=0;i<n;i++){
//             if(arr[i]==arr[i+1]){
//                 count++;
//             }
//              else{   
//              brr.push_back(count);
//              count =1;
//              } 
//         }
//           for(int i=0;i<brr.size();i++){
//             int ans =0;
//             if(ans ^ brr[i] ==0){
//                 return false;
//             }
//           }
//           return true;
//           cout<<endl;
//            for(int i=0;i<n;i++){
//             cout<<arr[i]<<" ";
//           }
//     }
int main(){
//     int x;
//     cin>>x;
//      vector<int> ans;
//         stack<int> s;
//         while(x!=0){
//             int digit=x%10;
//             s.push(digit);
//             x=x/10;
//         }
//         while(!s.empty()){
//             int t=s.top();
//             s.pop();
//             ans.push_back(t);
//         }
//          cout<<ans[ans.size()-1];
//         for(int i=ans.size()-2; i>=0;i--){
//    if( ans [i]<0)
//             cout<<-ans[i];
//     else cout<<ans[i];
//         }
// }
        //    string a="";
        //    int s=2;
        //    a+= (s+'0');
        //    cout<<a<<endl;
        //    cout<<"hii"<<endl;
        vector<int> arr;
        arr.push_back(45);
        arr.push_back(45);
        arr.push_back(45);
        arr.push_back(56);
        arr.push_back(89);
        arr.push_back(98);
        arr.push_back(23);
        arr.push_back(35);
        int n =8;
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
        //  printarr(arr);
        // cout<<endl;
        //  int k=arr[0];
        //    int j=arr[0];
        // for(int i=0;i<n;i++){
        //    if(k>arr[i]) k=arr[i];
        //    else if(j<arr[i]) j=arr[i];
        // }
        // cout<<k<<endl<<j<<endl;
        //   update(arr);
        //   cout<<endl;
        //    cout<<endl;
        //    update(arr);
        // int element ;
        // cin>>element;
        // bool b=false;
        // for(int i=0;i<5;i++){
        //     if(element ==arr[i]){
        //         b=true;
        //         break;
        //     }
        // }
        // if(b==true) cout<<"found";
        // else  cout<<" notfound";
        //   for(int i=0;i<n;i++){
        //      cout<<arr[i]<<" ";
        //    }
        //    cout<<endl;
        //    swapalternate(arr,n);
        //    cout<<endl;
        //    for(int i=0;i<n;i++){
        //      cout<<arr[i]<<" ";
        // int a =4;
        // int b = -4;
        // cout<< (4 ^ -4 ^ 0 ^ 2 ^ -5)<<endl;
           // uniqueO(arr,n);
           }




