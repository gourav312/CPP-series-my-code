#include<iostream>
using namespace std;
///    Linear Search
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
///     BInary Search
int  binarysearch(int arr[],int size,int key){
    int start =0;
    int end = size-1;

    int mid = (start+end)/2;//mid = s + (e-s)/2
    while(start<= end){
        if(arr[mid]==key){
            return mid;
        }
        if(key > arr[mid]){
            start = mid+1;
        }else{
            end = mid -1;
        }
        mid =(start+end)/2;//mid = s + (e-s)/2
    }
    return -1;
}
int main(){
    int even[6]={2,4,6,7,12,18};
    int odd[5]={3,8,11,14,16};

    int evenindex = binarysearch(even,6,12);

    cout<<"index of 12 is "<<evenindex <<endl;

    int oddindex = binarysearch(odd,5,14);

    cout<<"index of 14 is "<<oddindex <<endl;

}
