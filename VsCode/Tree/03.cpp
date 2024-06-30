//Using for loop condition but connecting(nodes) is pending
#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *l;
    node *r;

    node(int d)
    {
        data=d;
        l=r=NULL;
    }

    void Preorder(node* tm)
    {   
        if(tm==nullptr)
        {
            return ;
        }

        cout<<tm->data<<endl;
        cout<<tm->l<<" "<<endl;
        cout<<tm->r<<" "<<endl;

    }
};


int main()
{
    system("cls");
    int data;
    if(data==-1)
    return 0;
    for(int i=0; i<5; i++)
    {
    cout<<"Enter your data : "<<endl;
    cin>>data;
    
    node *root= new node(data);
    node *temp= root;
    root->Preorder(temp);
    }
}