#include<iostream>
using namespace std;

///LENGTH of string, REverse a String, CHECK IF THE STRING IS PALINDROME , Char Upper case to Lower case

char toLowercase(char ch){
    if(ch >= 'a' && ch <='z'){
        return ch;
    }
    else{
        char temp = ch -'A' + 'a' ;
        return temp;
    }
}

bool checkPalindrome(char a[],int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        if(a[s]!=a[e]){
            return 0;
        }
        else {
            s++;
            e--;
        }
    }
    return 1;
}

void reverseStr(char name[],int n){
    int s=0;
    int e = n-1;

    while(s<e){
        swap(name[s++],name[e--]);
    }
}
int getLength(char name[]){
    int count =0 ;
    for(int i=0;name[i] != '\0' ;i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];

    cout<<"Enter the name " <<endl;
    cin>>name;

    cout<<"Your Name " << name<<endl;

    int len = getLength(name);

    cout<<"length  is :"<< len <<endl;

    reverseStr(name,len);
    cout << name  << endl;

    cout<<"Palindrome or Not  " << checkPalindrome(name,len) <<endl;

    cout<< " Character to Lower case " << toLowercase('b')<<endl;
    cout<< " Character to Lower case " << toLowercase('C')<<endl;
}
