#include<iostream>
using namespace std;

class Pro
{
    public:
    int data=10;
    Pro *next= NULL;


};

void Inserting_node()
{
    Pro *create= new Pro;
    Pro *head= create;
    create->next= head;
    head= create;
}

void Printing_node()
{
    //int data= 10;
    Pro *create= new Pro;
    Pro *head= create;
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head= head->next;
    }
}




int main()
{
    Pro *create;
    Inserting_node();
    Printing_node();

    // Pro *headpointer= create;
}