#include<iostream>
using namespace std;
int binarySearch(int arr[],int size, int target){
  int start=0;
  int end= size-1;

  int mid= (start+end)/2;

  while(start <= end){
     // int element = arr[mid];

    if(target == arr[mid]){
      return mid;
    }
    else if(target < arr[mid]){
      // we are searching in the left half
      end= mid-1;
    }
    else {
      // now we are searching in the right half of the array
      start=mid+1;
    }
    mid= (start+end)/2;
    
  }
  return -1;
}
int main(){
int arr[]={2,4,6,8,10,12,16};
  int size=7;
   int target=2;

  int IndexOfTarget= binarySearch(arr,size,target);

    if(IndexOfTarget == -1){
    cout <<"Target not found" ;
    }
  else{
    cout << "target found at "<<IndexOfTarget <<"th index ";
  }
  
  return 0;
}
