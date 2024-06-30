//Reverse a string using stack-- itself :)

#include<iostream>
using namespace std;

class String_stack
{
    public:
    char *arr;
    int top;
    int size;
    int first, end;

    String_stack(int size)
    {
        this->size=size;
        arr= new char[size];
        top=-1;
        this->first=0;
        this->end=size;
    }

    //Push the data of string
    void push(char element)
    {
        if(size-top>1)
        {
            top++;
            arr[top]=element;
            cout<<arr[top]<<"  ";
        }
    }

    //Pop operation--- that is also using reverse the data?
    void pop_also_Reverse_string()
    {
        if(top>=-1)
        {
            char caught= arr[top];
            cout<<caught<<"  ";
            top--;
        }
    }

    // void Reverse_string()
    // {
    //     cout<<"String reversing called !"<<endl;
    //     while(first>end)
    //     {
    //         swap(arr[first], arr[end]);
    //         first++;
    //         end--;
    //     }
    // }

    // void Reverse_string_printing()
    // {
    //     while(first>end)
    //     {
    //         cout<<arr[first];
    //         first++;
    //     }
    // }
};

int main()
{
    String_stack *ss= new String_stack(5);
    //Buit force logic.
    // ss->push('a');\
    // ss->push('b');
    // ss->push('c');
    // ss->push('d');
    // ss->push('e');

    for(int i=0; i<5; i++)
    {
        ss->push(i);
    }

    //Reversing the string-- is good to use stack easily
    cout<<"\n";
    for(int i=0; i<5; i++)
    {
    ss->pop_also_Reverse_string();
    }
}