#include<bits/stdc++.h>
using namespace std;
int main(){
// pattern1
/*
****
****
****
****
   int n;
   cin>>n;
   int i=1;
   while(i<=n){
    int j = 1;
    while(j<=n){
        cout<<'*';
        j=j+1;
    }
    cout<<endl;
    i=i+1;
   }
*/

//pattern 2
/* 1111
2222
3333
4444

int n;
cin>>n;
int i = 1;
while(i<=n){
    int j = 1;
    while(j<=n){
        cout<<i;
        j = j+1;
    }
    cout<<endl;
    i = i+1;
}*/

//pattern 3
/*1234
1234
1234
1234

int n;
cin>>n;
int i=1;
while(i<=n){
    int j = 1;
    while(j<=n){
        cout<<j;
        j=j+1;
    }
    cout<<endl;
    i = i+1;
}*/

//pattern 4
/* 123
456
789

   int n;
   cin>>n;
   int count = 1;
   int i=1;
   while(i<=n){
    int j = 1;
    while(j<=n){
        cout<<count;
        count++;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
   }*/
//pattern 5
/*
*
**
***

int n;
   cin>>n;
   int i=1;
   while(i<=n){
    int j = 1;
    while(j<=i){
        cout<<'*';
        j=j+1;
    }
    cout<<endl;
    i=i+1;
   }*/

//pattern 6
/*
1
22
333
int n;
   cin>>n;
   int i=1;
   while(i<=n){
    int j = 1;
    while(j<=i){
        cout<<i;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
   }*/
//pattern 7
/*
1
23
456

int n;
   cin>>n;
   int i=1;
   int count = 1;
   while(i<=n){
    int j = 1;
    while(j<=i){
        cout<<count;
        count++;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
   }*/
//pattern 8
/**/
}
