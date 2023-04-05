#include<iostream>
using namespace std;

///add N numbers
int sum (int n){
    if (n == 0){
        return 0;
    }
    int prevSum = sum(n-1);
    return n + prevSum;
}

///Factorial Number
int factorial(int n){
    //base condition
    if(n == 0)
        return 1;

 //   int chotti = factorial(n-1);
   // int badi = n* chotti;

    return n*factorial(n-1);

}

///Power of 2
int Power(int n){

    //base case
    if(n==0)
        return 1;

    // recursive relation
   // int smallerProblem = Power(n-1);
    //int biggerProblem = 2*smallerProblem;

    return Power(n-1);
}

///counting
void counting(int n){
    //base conditon
    if(n==0){
        return ;
    }
    //if we print n here then will get reverse oder
    //recursive relation
    counting(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    //cout<<sum(n)<<endl;
    //cout<<factorial(n)<<endl;
    //cout<<Power(n)<<endl;
    counting(n);
}




