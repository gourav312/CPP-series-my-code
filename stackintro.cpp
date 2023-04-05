#include<iostream>
#include<stack>
using namespace std;

int main()
{

    // creation of Stack
    stack<int> s;

    //Push Operation
    s.push(2);
    s.push(3);
    s.push(7);

    //Pop Operation
    s.pop();

    //Printing the Top element
    cout<<"Printing the Top element  " << s.top() <<endl;

    //stack is empty or not
    if(s.empty())
    {
        cout<<"stack is empty" <<endl;
    }
    else
    {
        cout<<"Stack is not Empty" <<endl;
    }

    //Size of Stack
    cout<<"Size of Stack " << s.size() <<endl;
}
