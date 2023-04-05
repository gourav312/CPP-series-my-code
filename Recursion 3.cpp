#include<iostream>
using namespace std;


///IS sorted or not
 bool isSorted(int *arr,int size){
      //base case
      if(size == 0 || size == 1){
        return true;
      }

      if(arr[0]>arr[1]){
        return false;
      }
      else{
        bool remainig = isSorted(arr+1,size-1);
        return remainig;
      }
 }
///sum of array
int getsum(int * arr ,int size){
    //base case
    if(size == 0){
        return 0;
    }
    if(size  == 1){
        return arr[0];
    }


    //recursive call
    getsum(arr+1,size -1);
    int sum = arr[0]+getsum(arr+1,size -1);
    return sum;

}
int main(){
    int arr [5] = {2,4,9,9,9};
    int size =5;
   // bool ans = isSorted(arr,size);

   // if(ans){
     //   cout<<"Array is sorted " <<endl;
   // }else{
     //   cout<<"Array is not Sorted" <<endl;
   // }



    // cout<<getsum(arr,size);
}
