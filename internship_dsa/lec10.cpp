#include <iostream>
#include <stack>
#include <vector>
#include <bitset>
#include <cmath>
using namespace std;
//  vector<int> intersection(int *input1, int *input2, int size1, int size2)
// {
//    vector<int> ans;
//    sort(input1,input1+6);
//    sort(input2,input2+4);
//    for(int i=0;i<size1;i++){
//        for(int j=0;j<size2;j++){
//             if(input1[i]==input2[j]){
//                 ans.push_back(input1[i]);
//                 input1[i]=-1;
//                 input2[j]=-1;
//             }
//        }
//    }
//       return ans;
// }
// vector<vector<int>> pairSum(vector<int> &arr, int s){
//   vector<vector<int>> ans;
//   int i=0;
//   int j=ans.size()-1;
//   while(i<j){
//      if(arr[i]+arr[j]==s){
//         vector<int> temp;
//         temp.push_back(min(arr[i],arr[j]));
//           temp.push_back(max(arr[i],arr[j]));
//             ans.push_back(temp);
//             i++;
//             j--;
//      }
//   }
//   return ans;
// }
void sort012(int *arr, int n)
{
   int zc,oc,tc =0;
   for(int i=0;i<n;i++){
      int num=arr[i];
      if(num==0) zc++;
       else if(num==1) oc++;
       else   if(num==2) tc++;
   }
   
   for(int i=0;i<zc;i++){
      arr[i]=0;
      cout<<arr[i]<< " ";
   }
    for(int i=zc;i<zc+oc;i++){
      arr[i]=1;
        cout<<arr[i]<< " ";
   }
   for(int i=zc+oc;i<n;i++){
      arr[i]=2;
        cout<<arr[i]<< " ";
   }
}
void sort(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]==0) i++;
        else if(arr[j]==1) j--;
        else if(arr[i]==1 && arr[j]==0) {
            swap(arr[i],arr[j]);
            i++;
            j--;}
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    //  vector<int> arr;
    //     arr.push_back(45);
    //     arr.push_back(45);
    //     arr.push_back(45);
    //     arr.push_back(56);
    //     arr.push_back(89);
    //     arr.push_back(98);
    //     arr.push_back(23);
    //     arr.push_back(35);
    // int size1,size2;
    // size1=6;
    // size1=4;
    // int input1[6]={1,2,6,4,5,3};
    // int input2[4]={6,2,9,8};
    //     sort(input1,input1+6);
    //     for(int i=0;i<6;i++){
    //         cout<<input1[i]<<" ";
    //     }
    //     cout<<endl;
    //   vector<int> ans=  intersection(input1,input2,6,4);
    //   for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    //   }
    //   cout<<endl;
    //     cout<<"hii"<<endl;
    //   //intersection(input1,input2,6,4);

//     //swapping
//     int a=6;
//     int b =5;
//     cout<<a<<" "<<b<<endl;
// //     int c;
// //     c=a;
// //     a=b;
// //     b=c;
// //    cout<<a<<" "<<b<<endl;
//    a= a+b;
//    b= a-b;
//    a=a-b;
// //    cout<<a<<" "<<b<<endl;
// //    vector<int> arr={2,3,4,5};
// cout<<(0^a)<<endl;
     int arr[7]={0 ,1, 0, 1, 0, 1, 0};
        sort(arr,7);
   //  sort012(arr,7);

}