//Practice linked list
#include<iostream>
using namespace std;


class Node
{
    public:
    int data;
    Node *next_pointer;

    Node(int data=0): data(data), next_pointer(NULL){}

    void *Creating_list(Node **head_ref, int val)
    {

        // if(*head_ref==NULL)
        // {
        //     cout<<"list at the end position : "<<endl;
        // }

        //Allocate node
        Node *new_Node= new Node();

        //put the data into new node
        new_Node->data= val;

        //next_pointer as a head pointer
        new_Node->next_pointer= *head_ref;

        //head_ref as moved to the next pointer-> new_Node
        *head_ref= new_Node;
        
        //Printing the nodes
        cout<<new_Node->data<<" "<<endl;
        //cout<<new_Node->next_pointer<<endl;

        // for(int i=0; i<5; i++)
        // {
        //     cout<<new_Node->data<<" "<<endl;
        // }

        //cout<<new_Node->next_pointer<<endl;
    }

    void At_end_Position(Node *head_ref, int Ed)
    {
        // end= next_pointer;
        // end->data= Ed;
        // cout<<"At the end of position : "<<end->data<<endl;
        // cout<<end;


        
        Node *at_end= new Node();
        at_end->data= Ed;

        at_end->next_pointer= head_ref;

        //head_ref= at_end;

        if(head_ref==NULL)
        {
            cout<<"List is empty :"<<endl;
        }
        else
        {
            Node *tmp= new Node();
            while(tmp->next_pointer!=NULL)
            {
                tmp= tmp->next_pointer;
            }

            //add at the end position 
            tmp->next_pointer= at_end;
        }
        cout<<at_end->data<<" "<<endl;
    }


};

int main()
{
    Node *root= NULL;
    //cout<<root->data<<endl;
    //Five input data
    for(int i=0; i<5; i++)
    {
        int val;
        cout<<"Enter inset node : "<<endl;
        cin>>val;

        root->Creating_list(&root, val);
    }
    int End= 23;
    root->At_end_Position(root,End);
    //cout<<root->data<<endl;
    //cout<<root->next_pointer->data<<endl;
}