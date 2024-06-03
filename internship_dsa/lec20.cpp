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
void merge(int arr1[],int n1,int arr2[],int n2){
    int i=0;
    int j=0;
    int k=0;
    int *arr3= new int[n1+n2];
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
                arr3[k++]=arr2[j++];
        }
    }
     while(i<n1){
            arr3[k++]=arr1[i++];
        }
     while(j<n2){
                arr3[k++]=arr2[j++];
     }
     for(int i=0;i<n1+n2;i++){
        cout<<arr3[i]<<" ";
     }

}
int main(){
       int arr1[5]={1,3,5,7,9};
       int arr2[4]={2,4,6,8};
       merge(arr1,5,arr2,4);
      return 0;
}