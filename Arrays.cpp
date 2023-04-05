/*  An array in any programming language is a data structure that is used to store elements or data items of similar data types at
contiguous memory locations and elements can be accessed randomly using index of an array. */

/* we requires array because we can store elements or group of elements in same data type */

/* if we have n elements then we access elements n-1 index */

/* int number[3]={5,7,11};
int number[n];*/

#include<iostream>
using namespace std;

void printArray(int arr[],int size){
     //print the array
      cout<<"printing the array"<<endl;
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
     cout<<"printing done"<<endl;
}
int main(){
    //declare
    int number[15];
    //accessing an array
    cout<<"value at 14 index    " <<number[14]<< endl;

    // initializing an array
    int second[3]={5,7,11};
     //accessing an array
    cout<<"value at 2 index    " <<second[2]<< endl;
    int third[15]={2,7};
    int n = 15;
    cout<<"printing the array"<<endl;
    //printing the array
    for(int i = 0;i<n;i++){
        cout<<third[i]<<" ";
    }

    int forth[10] {0};
    //print the array
    for(int i = 0;i<n;i++){
        cout<<forth[i]<<" ";
    }
    printArray(forth,10);
    cout<<endl<<"Everything is fine"<<endl;
}
