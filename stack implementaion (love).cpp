#include<iostream>
using namespace std;

class Stack
{
    int *arr;
    int top;
    int size;
public:
    Stack(int size)
    {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }


    void push(int element)
    {
        if(size-top >1)
        {
            top++;
            arr[top]=element;
        }
        else
        {
            cout<<"Stack is overflow " <<endl;
        }
    }

    void pop()
    {
        if(top >=  0)
        {
            top--;
        }
        else
        {
            cout<<"Stack is underflow" <<endl;
        }
    }


    int peek()
    {
        if(top>=0 && top <size)
        {
            return arr[top];
        }
        else
        {
            cout<< "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if(top==-1)
        {

            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Stack st(5);
    st.push(23);
    st.push(24);
    st.push(45);

    cout<< "Peek element in stack " <<st.peek()<<endl;

    st.pop();

    cout<< "Peek element in stack " <<st.peek()<<endl;


    if(st.isEmpty())
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        cout<<"Stack is Not Empty" <<endl;
    }

}
