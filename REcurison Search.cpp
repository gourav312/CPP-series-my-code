#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size , int k){
    //base case
    if(size == 0){
        return false;
    }


    if(arr[0] == k){
        return true;
    }
    else{
        bool remaing = linearSearch(arr+1,size-1,k);
        return remaing;
    }
}
int main(){

    int arr[5] = {3,5,1,2,6};
    int size = 5;
    int k =2;
    bool ans = linearSearch(arr , size , k);

    if(ans){
        cout<<"present"<<endl;
    }
    else{
        cout<<"Not Present " <<endl;
    }
}
