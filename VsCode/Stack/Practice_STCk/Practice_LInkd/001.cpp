//Implementing a stack using queue data structure
#include<iostream>
using namespace std;

class NewStack
{
    public:
    int data;
    NewStack *next;

    //Using a constructor to create a new node
    NewStack(int data)
    {
        this->data= data;
        this->next=NULL;
    }


    void push(NewStack *root, int data)
    {
        NewStack *create = new NewStack(data);
        create->next= root;
        root= create;
        cout<<create->data<<" "<<endl;
    }
};



int main()
{
    //NewStack obj();
    //Stating the root is Null-pointer.
    NewStack *root= NULL;
    cout<<"My stack's data using  queue : "<<endl;
    //Now, push the data
    int size_data;
    cout<<"Enter your size to insert the stack elements : "<<endl;
    cin>>size_data;
    for(int i=0; i<size_data; i++)
    {
        int a;
        cin>>a;
        root->push(root, a);
    // root->push(root, 12);
    }

}