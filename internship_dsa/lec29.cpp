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
int main(){
    int n;
    cin>>n;
    int **arr=new int*[n];
     for(int i=0;i<n;i++){
        arr[i]=new int[n];
     }

     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
     }
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
     for(int i=0;i<n;i++){
        delete []arr[i];
     }
     delete []arr;
     
    return 0;

}