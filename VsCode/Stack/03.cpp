//Two stack implementation in an array without stl
#include<iostream>
using namespace std;

class Two_stack
{
    public:
    int *arr;
    //For the first stack.
    int top1;
    //For the second stack.
    int top2;

    //One particular a size of the array.
    int size;

    Two_stack(int size)
    {       
        this->size= size;
        arr= new int[size];
        top1=-1;
        top2=size;

    }

    //Push operation--->Left to Right.
    void push1(int f_element)
    {
        if(size-top1>1 && top1!=top2)
        {
            top1++;
            arr[top1]=f_element;
            cout<<arr[top1]<<" ";

        }
        else
        cout<<"Stack 1 is overflow !"<<endl;
    }

    //Push operation----->Right to Left.
    void push2(int s_element)
    {
         if(top2>0 && top1!=top2)
        {
            top2--;
            arr[top2]=s_element;
            cout<<"\n"<<arr[top2]<<" ";
        }
        else
        cout<<"Stack 2 is overflow !"<<endl;
    }

    // void pop1()
    // {

    // }

    // void pop2()
    // {
        
    // }

    //as like the first pop that was previous.
};

int main()
{
    Two_stack *t2= new Two_stack(5);
    t2->push1(12);
    t2->push1(14);
    t2->push1(17);

    t2->push2(56);
    t2->push2(55);
    t2->push2(88);
    t2->push2(1);
    t2->push2(2);
    t2->push2(4);
    t2->push2(18);
    t2->push2(99);
    t2->push1(10);


}