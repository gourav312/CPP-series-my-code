#include<iostream>
using namespace std;

///reverse string
void Reverse(string& str,int i,int j){
    cout<< "call received for " <<str << endl;
    //base case
    if(i>j){
        return ;
    }
    swap(str[i],str[j]);
    i++;
    j--;

    //recursive call
    Reverse(str,i,j);
}
///palindrome
bool checkPalindrome(string str , int i ,int j){
    //base case
    if(i>j){
        return true;
    }
    if(str[i] != str[j]){
        return false;
    }
    else{
            //recursive call
        return checkPalindrome(str, i+1 , j-1);
    }
}
///BUbble sort
void sortArray(int arr[] ,int n){
    //base case
    if(n == 0 || n == 1){
        return ;
    }
    for(int i = 0 ; i<n-1 ; i++){
        if(arr [i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sortArray(arr,n-1);
}
int main(){
    string name = "abcde";
    cout<<endl;
  //Reverse(name,0,name.length()-1);cout<<endl;
   // cout<<name<<endl;

 /*  bool ispalindrome = checkPalindrome(name , 0 ,name.length()-1);

   if(ispalindrome){
    cout<<"its a Palindrome" <<endl;
   }else{
       cout<<"Its not a palindrome " <<endl;
   }*/


   int arr[5]={2,5,1,6,9};
   sortArray(arr,5);
   for(int i=0;i<5 ; i++){
    cout<< arr[i] << " " ;
   }
}
