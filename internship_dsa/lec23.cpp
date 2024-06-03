#include <iostream>
#include <stack>
#include <vector>
#include <bitset>
#include <cmath>
#include <sstream>
#include <unordered_map>
#include <map>
#include <string>
#include <set>
using namespace std;
bool ispresent(int arr[3][4],int target){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==target) return true;
        }
    }
    return false;
}
int main(){
     int arr[][4]={{1,2,3,4},{5,6,7,8},{1,4,5,9} };
    //  for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>arr[j][i];
    //     }
    //  }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
           cout<<arr[i][j]<<" ";
        //   cout<<"hii"<<i<<j<<" ";
        }cout<<endl;
     }
     cout<<endl;
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //        cout<<arr[i][j]<<" ";
    //       // cout<<"hii"<<j<<i<<" ";
    //     }cout<<endl;
    //  }
    int maxi =INT_MIN;
    int num=-1;
      for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
           sum+= arr[i][j];
        }cout<<sum<<endl;
        maxi=max(maxi,sum);
        num=
     }
     cout<<maxi<<endl;
//      int target=1110;
//    bool b = ispresent(arr,target);
//    cout<<b<<endl;
    return 0;
}