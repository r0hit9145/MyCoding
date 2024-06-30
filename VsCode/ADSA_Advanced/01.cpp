//creating a linked_list
#include<iostream>
using namespace std;

//using class

class Node
{
    public:
    int data;
    int *next;
    //making a constructor
    Node (int data)
    {
        cout<<"Constructor called :\n";
        this->data= data;
        this->next= NULL;
    }

};

//int main body
int main()
{
    class Node* node1= new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next;
    return 0;
}