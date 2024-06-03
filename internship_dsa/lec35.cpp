#include <iostream>
#define PI 3.14
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
// void merge(int *arr,int start,int end){
//       int mid= start+ (end-start)/2;
//       int len1= mid-start+1;
//       int len2= end-mid;
//       int *first= new int[len1];
//       int *second= new int[len2];
//       int k=start;
//       for(int i=0;i<len1;i++){
//         first[i]=arr[k++];
//       }
//       k=mid+1;
//       for(int i=0;i<len2;i++){
//         second[i]=arr[k++];
//       }
//      int index1=0;
//      int index2=0;
//      k=start;
//      while(index1<len1 && index2<len2){
//         if(first[index1]<second[index2])
//            arr[k++]=first[index1++];
//      else   arr[k++]=second[index2++];
//      }
//      while(index1<len1) {  arr[k++]=first[index1++];}
//      while(index2<len2) {  arr[k++]=second[index2++];}
//       delete []first;
//       delete []second;

// }
// void mergesort(int *arr,int start,int end){
//      if(start>=end) return;
//      int mid= start+ (end-start)/2;
//      mergesort(arr,start,mid);
//      mergesort(arr,mid+1,end);
//      merge(arr,start,end);
// }
int partition(vector<int> arr,int start,int end ){
       int pivot =arr[start];
       int count=0;
       for(int i=start;i<=end;i++){
        if(arr[i]<pivot) count++;
       }
       int pivotindex=start+count;
       swap(arr[pivotindex],arr[start]);
       int i=start;
       int j=end;
       while(i<pivotindex && j>pivotindex){
        if(arr[i]<arr[pivotindex]) i++;
        if(arr[j]>arr[pivotindex]) j--;
        else{
            swap(arr[i++],arr[j--]);
        }
       }
         return pivotindex;
}
void quicksort(vector<int> arr,int start,int end){
     if(start>=end) return;
     int p=partition(arr,start,end);
     quicksort(arr,start,p-1);
     quicksort(arr,p+1,end);
}
vector<int> quickSort(vector<int> arr)
{
   int start=0;
   int end=arr.size()-1;
   quicksort(arr,start,end);
   return arr;
}
int main(){
      int arr[5]={7,6,4,2,0};
      for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
     }cout<<endl;
    // mergesort(arr,0,4);
   vector<int> v = quickSort(arr);
     for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
     }cout<<endl;


    return 0;
}