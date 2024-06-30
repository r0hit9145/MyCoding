//I want itself stack creation without STL
//even through--- 1 Stack implementation.
#include<iostream>
using namespace std;

class Stack
{
    private:
    
    //Properties 
    int *arr;
    int top;
    int size;
    public:

    //Member functions/ behaviour
    Stack(int size)
    {
        this->size=size;
        //Dynamic array created.
        arr= new int[size];
        top=-1;
    }

    void push(int element)
    {
        if(size -top>1)
        {
            top++;
            arr[top]=element;
            cout<<arr[top]<<" ";
        }
        else
        cout<<"Stack overflow !"<<endl;
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack has already empty !"<<endl;
        }
        else
        {
            top--;
            cout<<"\nThe element successfully poped :"<<endl;
        }
    }

    int peek()
    {
        if(top>=0)
        {
            return arr[top];
        }
        else
        {
            cout<<"Stack is Empty"<<endl;
            return -1;  
        }
    }

    bool isempty()
    {
        if(top==-1)
        {
            return 1;
        }

        else
        return false;
    }
};

int main()
{
    //Here, Conctructor is called.
    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    st.push(55);
    st.push(1);


    // st.push(11);
    // st.push(9);
    // st.push(8);
    // st.pop();
    // st.pop();
    cout<<"\nat Peek()-->"<<st.peek();
    // st.pop();
    // cout<<st.peek();
    // st.pop();
    // cout<<st.peek();
    // st.pop();
    // cout<<st.peek();
    // cout<<st.isempty();


    //cout<<st.peek();
    //st.push();
}