#include<iostream>
using namespace std;

class Solution{
    public:
    
    int *check(int *a)
    {
        return a;
    }
};

int main()
{
    Solution s;
    int a;
    cin>>a;
    cout<<s.check(a);
    return 0;
}



































// // Linked list- operation
// /*
// Deletion:
// at the first.
// at the end.
// at the index.
// at the element.
// */
// #include<iostream>
// #include<vector>
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node *next;
    
//     Node(int val): data(val), next(nullptr){}

//     Node(Node *next, int val): next(next), data(val){}
// };

// // // creation of the linked list.
// // // Without loop as like use goto statement- but not best practice.

// // Node *CRRLL(Node * &head, vector<int> & arr)
// // {
// //     head=new Node(arr[0]);
// //     Node *mover=head;
// //     for(int i=1; i<arr.size(); i++)
// //     {
// //         Node *temp=new Node(arr[i]);
// //         mover->next=temp;
// //         mover=temp;
// //     }    

// //     return head;
// // }

// // // Deleting the at end node;
// // Node *deleteEnd(Node * &head)
// // {
// //     Node *temp=head;
// //     while(temp->next->next!=NULL)
// //     {
// //         temp=temp->next;
// //     }
// //     delete temp->next;
// //     //delete temp;
// //     temp->next=NULL;
// //     return head;
// // }

// // // Deleted from the particular position- 0, 1 , 2, 3 which one?
// // Node *DeletedPos(Node *head, int k=3)
// // {
// //     // prev, temp, count;
// //     int cnt=1;
// //     Node *temp=head;
// //     Node *prev=head; // OR prev=NULL;
// //     while(temp!=NULL)
// //     {
// //         if(cnt==k)
// //         {
// //             prev->next=prev->next->next;
// //             delete temp;
// //             break;
// //         }
// //         prev=temp;
// //         temp=temp->next;
// //         cnt+=1;
// //     }
// //     return head;
// // }

// // // deleted the element.
// // Node *DeletELEMENT(Node *head, int key)
// // {
//     // // if key==no;
//     // if(head->data==NULL)return head;

//     // // if key==1 at least one value.
//     // if(head->data==NULL)return head=head->next;


//     // prev, temp, cont-don't need.
//     Node *temp=head;
//     Node *prev=nullptr;
//     while(temp!=NULL)
//     {
//         if(temp->data==key)
//         {
//             prev->next=prev->next->next;// very important note.
//             delete temp;
//             break;
//         }
//         prev=temp;
//         temp=temp->next;
//     }
//     return head;
// }
// void PrinLL(Node * &head)
// {
//     Node *temp=head;

//     while(temp)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }

// int main()
// {
//     Node *head=NULL;
//     vector<int> arr={1, 2, 14, 6};
//     // array into linked list
//     head= CRRLL(head, arr);
//     // PrinLL(head);

//     // deleted node at end position.
//     // head=deleteEnd(head);
//     // PrinLL(head);

//     // deleted at the index.
//     // head=DeletedPos(head, 3);
//     // PrinLL(head);

//     // deleting at the element.
//     head=DeletELEMENT(head, 6);
//     PrinLL(head);
// }






























// // //A stack implementation using linked-list
// // #include<iostream>
// // using namespace std;

// // class Node
// // {
// //     public:
// //     int data;
// //     Node *next;

// //     Node *top=nullptr;

// //     Node(int data=0): data(data), next(NULL){}

// //     void push(int data)
// //     {
// //         Node *newnode= new Node(data);
// //         newnode->next=top;
// //         top= newnode;
// //         cout<<newnode->data<<" ";
// //     }
// // };

// // int main()
// // {
// //     //linked list
// //     Node stack;
// //     stack.push(12);
// //     stack.push(13);
// //     stack.push(14);
// //     stack.push(15);
// //     stack.push(45);
// // }


// #include<iostream>
// #include<string>
// //ro run toupper case function
// #include<cctype>
// using namespace std;

// int main()
// {
//     string str="this is first";
//     //cout<<str[0]<<" ";
//     //return upper;
//     int i;
//     // for( i=0; i<str.length(); i++)
//     // {
//     //     str[0]= toupper(str[0]);
//     //     if(str[i]==' ')
//     //     {
//     //         str[i]=toupper(str[i+1]);
//     //         cout<<str<<" ";
//     //         continue;
//     //     }
//     //     //cout<<str;
//     // }
//     //cout<<str<<endl;
//     for(int i=0; str[i]!='\0'; i++)
//     {
//         if(str[i]==' ')
//         {
//             break;
//         }
//         cout<<"word"<<(i+1)<<" ";
//     }
//     //cout<<<<" ";
// }






















































// // #include<iostream>
// // using namespace std;

// // class faboo
// // {
// //     public:
// //     int a=2;
// //     friend void sum_faboo(faboo & obj);
    
// // };

// // class B: public faboo
// // {
// //     public:
// //     int b=4;
// //     int mean;
// //     int number_of_terms=2;
// //     void sum_faboo(faboo)
// //     {
// //     mean= (a+b)/number_of_terms;
// //     cout<<mean<<endl;
// //     }
// // };

// // int main()
// // {
// //     faboo obj;
    
// //     B obj1;
// //     obj1.sum_faboo(obj);
// //     //obj.sum_faboo();
// //     return 0;
// // }








































































// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //     int arr[]={2,0,1,1,0,2,2,1,0};
// //     int i=0,count1,count0,count2;
// //     count0=count1=count2=0;
// //     while(i<9)
// //     {
// //         if(arr[i]==0)
// //             count0++;
// //         if(arr[i]==1)
// //             count1++;
// //         if(arr[i]==2)
// //             count2++;
        
// //         i++;
// //     }
// //     i=0;
// //     while(i<9)
// //     {
// //         if(count0>0)
// //         {
// //             arr[i]=0;
// //             count0--;
// //         }
// //         else if(count1>0)
// //         {    
// //             arr[i]=1;
// //             count1--;
// //         }
// //         else if(count2>0)
// //         {
// //             arr[i]=2;
// //             count2--;
// //         }
// //         i++;
// //     }

// //     while(i<9)
// //     {
// //         cout<<arr[i]<<" ";
// //         i++;
// //     }
// // }













































// // // #include <iostream>
// // // using namespace std;

// // // class check
// // // {
// // // public:
// // //     void fab(int n)
// // //     {
// // //        for(int i=0; i<n; i++)
// // //        {
// // //          int ans= fabii(i);
// // //          cout<<ans<<"  ";
// // //        }
// // //     }

// // //     int fabii(int n)
// // //     {
// // //         if (n ==0)
// // //         return 0;

// // //         if(n ==1)
// // //         return 1;

// // //         return fabii(n-1)+ fabii(n-2);

// // //     }
// // // };

// // // int main()
// // // {
// // //     check ch;
// // //     int n;
// // //     cout << "Enter the number of terms: ";
// // //     cin >> n;
// // //     cout << "Fibonacci Sequence up to the " << n << "th term: ";
// // //     ch.fab(n);
// // //     cout << endl;
// // //     return 0;
// // // }