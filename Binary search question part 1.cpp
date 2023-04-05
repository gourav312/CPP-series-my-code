#include<iostream>
using namespace std;
/*int firstocc(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e =mid-1;
        }else if(arr[mid]<key){
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastocc(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }else if(arr[mid]<key){
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int even[6]={1,2,3,3,3,5};

    cout<<"First Occurrence of 3 is  at index "<<firstocc(even,6,3)<<endl;
    cout<<"last Occurrence of 3 is  at index "<<lastocc(even,6,3)<<endl;

    return 0;
}*/

///Find Pivot in an array

int getpivot(int arr[],int n){
    int s=0;
    int end=n-1;
    int mid = s+(end-s)/2;
    while(s<end){
        if(arr[mid]>=arr[0]){
        s=mid+1;
    }
    else{
        end=mid;
    }
    mid = s+(end-s)/2;
  }
    return s;
}
int main(){
    int arr[5]={8,10,17,1,3};

    cout<<"Pivot is  " <<getpivot(arr,5)<<endl;
}
