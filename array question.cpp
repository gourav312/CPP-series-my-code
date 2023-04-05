#include<iostream>
using namespace std;
///* maximum and minmum Value*/
/*int getmax(int arr[],int n){
    int max = INT_MIN;
    for(int i =0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int getmin(int arr[],int n){
    int min = INT_MAX;
    for(int i =0;i<n;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}
int main(){
    int size;
    cin>>size;
    int arr[100];
    for(int i=1;i<=size;i++){
        cin>>arr[i];
    }

    cout<< "maximum value of array" << getmax(arr,size)<<endl;
    cout<< "minimum value of array" << getmin(arr,size)<<endl;

}*/

///Print sum of all elements present in the array

/*int sumArray(int arr[],int n){
    int sum = 0;
    for(int i=0;i<=n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int size;
    cout<<"ENter the size of Array:"<<endl;
    cin>>size;
    int arr[100];
    cout<<"enter the element of the array"<<endl;
    for(int i=0;i<=size-1;i++){
        cin>>arr[i];
    }
    cout<<"sum of the array"<<sumArray(arr,size)<<endl;
}*/


///     reverse a array
/*int reverse(int arr[],int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[6]={1,4,0,5,-2,15};
    int brr[5]={2,6,3,9,4};

    reverse(arr,6);
    reverse(brr,5);

    printArray(arr,6);
    printArray(brr,5);
}*/

///Swap alternate
/*void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
void swapAlter(int arr[],int size){
    for(int i=0;i<size;i+=2){  //increment     or temp = arr[i+1]
       if(i+1<size){                       //     arr[i+1]=arr[i]
         swap(arr[i],arr[i+1]);              //   arr[i]=temp
       }
    }
}
int main(){
    int even[8]={5,2,9,7,6,1,0,4};
    int odd[5]={11,33,9,76,43};

    swapAlter(even,10);
    swapAlter(odd,10);

    printArray(even,8);
    printArray(odd,5);
}*/
///find unique
/*int findUnique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[10];
    int n,m;
    cin>>m;
    n=2*m+1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<findUnique(arr,n);
}*/
///Duplicate number
/*int duplicate(int arr[],int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    for(int i=1;i<n;i++){
        ans = ans^i;
    }
    return ans;
}
int main(){
    int arr[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<duplicate(arr,n);
}*/

///Pair Sum
/*void pairsum(int arr[],int n,int s){
    int ans=0;
    for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                 if(arr[i]+arr[j]==s){
                   cout<<arr[i]<<" "<<arr[j]<<endl;
                 }
            }
    }
}
int main(void){
    int arr[]={ 1, 5, 7, -1, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int s = 6;

    pairsum(arr,n,s);
}*/
///sort 01
/*void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sort01(int arr[],int n){
    int left =0,right=n-1;

    while(left<right){
        while(arr[left] == 0){
            left++;
        }
        while(arr[right]==1){
            right--;
        }
        //agar yaha pohoch gye ho,iske matalab
        //arr[left]==1 and arr[right]==0
        if(arr[left]==1&& arr[right]==0&&left<right)
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}
int main(){
    int arr[8]={1,1,0,0,0,0,1,0};

    sort01(arr,8);
    printArray(arr,8);
}*/
///sort012
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
}
void sort012(int arr[],int n){
    int left =0,mid=0,right=n-1;
    while(mid<=right){
        if(arr[mid]==0){
            swap(arr[left],arr[mid]);
            left++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[right],arr[mid]);
            right--;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort012(arr,n);
    printarray(arr,n);
}
