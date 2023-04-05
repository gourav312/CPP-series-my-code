#include<iostream>
using namespace std;

          ///Liner search
/*bool Search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10]={5,7,-2,10,22,-2,0,5,22,1};
    cout<<"Enter the element to search for"<<endl;
    int key;
    cin>>key;
    bool found = Search(arr,10,key);

    if (found){
        cout<<"Key is present"<<endl;
    }else{
        cout<<"key is absent"<<endl;
    }
}*/
       ///Binary Search
int Binary(int arr[],int n,int x){
    int low = 0;
    int high =n-1;

    int mid=(low+high)/2;
    while(low<=high){
        if(arr[mid]== x){
            return mid;
        }else if(arr[mid]>x){
            high = mid;
        }else if(arr[mid]<x){
            low = mid+1;
        }
        mid=(low+high)/2;
    }
    return -1;
}

