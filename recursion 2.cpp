#include<iostream>
using namespace std;

///reach Home
void reachHome(int src,int dest){
     cout << "Source " << src << " destination " << dest <<endl;
    //base case
    if(src == dest){
        cout<<"Pahucha gya "<<endl;
        return ;
    }
    // recursive call
    reachHome(src+1,dest);
}
///fibonacci Number

int fib(int n){
    //base case
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    int ans = fib(n-1)+fib(n-2);

    return ans;
}
///climb stair
int countDistictWayToClimbStair(long long nstair){
    //base case
    if(nstair<0){
        return 0;
    }
    if(nstair==0){
        return 1;
    }
    //recusrive call
    int ans = countDistictWayToClimbStair(nstair - 1) +
    countDistictWayToClimbStair(nstair -2);

    return ans;
}
///say digit
void sayDigit(int n , string arr[]){
    //base case
    if( n == 0){
        return ;
    }

    //processing
    int digits = n%10;
    n = n/10;


    //recursive call
    sayDigit(n,arr);
     cout << arr[digits] <<endl;
}
int main(){
   // int src =1;
   // int dest =10;
    // cout<< endl;
    //reachHome(src+1,dest);


   // int n;
    //cin>>n;
    //cout<<fib(n);

    //int n;
    //cin>>n;
    //cout<<countDistictWayToClimbStair(n);

    string arr[10] = {"zero" , "one" , "two" ,"Three " , "Four" , "five",
    "six" , "Seven" , "Eight" ,"Nine"  };
    int n;
    cin>>n;

    cout<< endl;
    sayDigit(n,arr);
    cout<< endl <<endl <<endl;
}

