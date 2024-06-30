#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    
    // Constructor
    Node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
};

// CCLL
Node *CirculLL(Node *head, vector<int> &arr)
{
    head= new Node(arr[0]);
    Node *mover=head;// both are at same point.
    for(int i=1; i<arr.size(); i++)
    {
        // temp- never ever to temper head.
        Node *temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
        if(temp->next==nullptr)
        {
            temp->next=head;
        }
    }
    return head;
}

// printed the Circular linked list.
void print(Node *head){
    while(head!=nullptr){
        cout<<head->data;
        head=head->next;
    }
}


int main()
{
    Node *head=NULL;
    vector<int> arr={3, 5, 10};
    head=CirculLL(head,arr);
    print(head);
    return 0;
}










































// // Deleted Kth index - DLL.
// #include<iostream>
// #include<vector>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *next;
//     Node *back;

//     Node(int val): data(val), next(nullptr){}

//     Node(int val, Node *next1, Node *back1)
//     {
//         data=val;
//         next=next1;
//         back=back1;
//     }
// };

// // DLL
// Node *DLL(Node *head, vector<int> &arr){
//     head=new Node(arr[0]);
//     Node *prev=head;
//     for(int i=1; i<arr.size(); i++)
//     {
//         Node *temp=new Node(arr[i], nullptr, prev);
//         prev->next=temp;
//         prev=temp;
//     }
//     return head;
// }


// // kth index deleted.
// Node *delKth(Node *head, int k)
// {
//     Node *prev=head;
//     int cnt=0;
//     Node *temp=head->next;
//     while(temp!=nullptr)
//     {
//         cnt++;
//         if(cnt==k)
//         {
//             // alag se
//             Node *deleted=prev;
//             prev=prev->back;
//             prev->next=temp;
//             temp->back=prev;

//             // finally deleted the node.
//             deleted->next=nullptr;
//             deleted->back=nullptr;
//             delete deleted;
//         }
//         prev=prev->next;
//         temp=temp->next;
//     }
//     return head;
// }
// // printed.
// void print(Node *head)
// {
//     while(head!=nullptr)
//     {
//         cout<<head->data<<" ";
//         head=head->next;
//     }
//     cout<<endl;
// }


// int main()
// {
//     vector<int> arr={12, 13, 45, 56, 55, 78, 99};
//     Node *head=nullptr;
//     head=DLL(head, arr);
//     print(head);

//     // deletedKth
//     int k=6;
//     head=delKth(head, k);
//     print(head);
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[10]={2, 0, 4, 0, 1};
//     int n; //n=5

//     for(int i: arr)
//     {
//         cout<<i<<"\n";
//     }
//     /*
//     40/4=10 
//     */
//     // int first=0;
//     // int second=1;
//     // if(n%2==0)
//     // {
//     //     cout<<"mein hu even position\n";
//     //     for(int i=0; i<n/2; i++)
//     //     {
//     //         swap(arr[first], arr[second]);
//     //         first=first+2;
//     //         second=second+2;
//     //     }
//     // for(int i=0; i<n; i++)
//     // {
//     //     cout<<arr[i]<<" ";
//     // }
//     // }
// }
















// // //Alternating number finding if even or odd.
// // #include<iostream>
// // using namespace std;

// // int main()
// // {
// //     int arr[10]={2, 0, 4, 0, 1};
// //     int n; //n=5
// //     /*
// //     40/4=10 
// //     */
// //     int first=0;
// //     int second=1;
// //     if(n%2==0)
// //     {
// //         cout<<"mein hu even position\n";
// //         for(int i=0; i<n/2; i++)
// //         {
// //             swap(arr[first], arr[second]);
// //             first=first+2;
// //             second=second+2;
// //         }
// //     for(int i=0; i<n; i++)
// //     {
// //         cout<<arr[i]<<" ";
// //     }
// //     }
// //     else
// //     {
// //         cout<<"Mein hu odd number :\n";
// //         for(int i=0; i<((n-1)/2); i++)
// //         {
// //             swap(arr[first], arr[second]);
// //             first=first+2;
// //             second=second+2;
// //         }
// //        for(int i=0; i<n; i++)
// //         {
// //         cout<<arr[i]<<" ";
// //         }
// //     }
// // }
























// // // #include<iostream>
// // // using namespace std;

// // // //function using a factorial calculation.
// // // //this is called function.
// // // string rev_string(string str)
// // // {
// // //     int i;
// // //     int length= str.length();
// // //     cout<<length<<endl;
// // //     for(int i=0; i<(length/2); i++)
// // //     {
// // //        // swap(str[i], str[length-i-1]);
// // //        char temp= str[i];
// // //        str[i]= str[length-i-1];
// // //        str[length-i-1]=temp;
// // //         //cout<<str[i]<<" ";
// // //     }
// // //         return str;
// // // }

// // // //int main()
// // // int main()
// // // {
// // //     string name;
// // //     cout<<"enter the string as your wish:\n";
// // //     cin>>name;
// // //     //a function calling to its called definition.
// // //     string name1= rev_string(name);
// // //     cout<<"My string is that:"<<name1<<endl;
// // // }

























// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main()
// // // {
// // //     int arr[5]= {1, 2, 1, 4, 1};
// // //     int result=0;
// // //     int i=0;
// // //     for(int i=0; i<5; i++)
// // //     {
// // //         arr[i]= (arr[i])^(arr[i+1]);
// // //     }
// // //     cout<<arr[i];

// // // }










// // // // #include<bits/stdc++.h>
// // // // using namespace std;

// // // // class Student{
    
// // // //     int first=12;
// // // //     int second=23;
// // // //     public:
// // // //     // int putdata(int first, int second)
// // // //     // {
// // // //     //     cout<<endl<<"Inside the class even inside the fun- putdata()"<<endl;
// // // //     //     int sum;
// // // //     //     first= first;
// // // //     //     second= second;
// // // //     //     sum= first+second;
// // // //     //     return sum;
// // // //     //     cout<<endl<<"Here, we're returning the value of sum :"<<endl;
// // // //     //     //cout<<"this->"<<this;
// // // //     // }

// // // //     //parameterised constructor
// // // //     Student(int f, int s)
// // // //     {
// // // //             cout<<endl<<"this->"<<this<<endl;
// // // //             first= f;
// // // //             second= s;
// // // //             int sum= f+s;
// // // //             cout<<endl<<"The sum is :"<<sum;
// // // //     }
// // // // };

// // // // int main()
// // // // {
// // // //     Student s1(10,50);
// // // //     cout<<endl<<"Inside the main function :"<<endl;
// // // //     cout<<&s1;
// // // //     //cout<<&s1;
// // // //     //int sum= s1.putdata(2,3);
// // // //     //int sum= putdata(2, 3);
// // // //     //cout<<sum;
// // // //     return 0;
// // // // }



































// // // // // wap to print a number into a one form like 756 = 7+5+6=> 18 then 1+8= 9;
// // // // #include<bits/stdc++.h>
// // // // using namespace std;

// // // // void Oneorder(int a)
// // // // {
// // // //     int sum=0;
// // // //     cout<<endl<<"Inside the function, and using 1- While loop :"<<endl;
// // // //     while(a>0)
// // // //     {
// // // //         sum= a%10+sum;
// // // //         a= a/10;
// // // //     }
// // // //     cout<<sum<<endl;
// // // //     cout<<endl<<"Here, using the second while-loop"<<endl;
// // // //     int num2=sum;

// // // //     int sum2=0;
// // // //     while(num2>0)
// // // //     {
       
// // // //         sum2= num2%10+sum2;
// // // //         num2= num2/10;
// // // //     }
// // // //     cout<<endl<<"The number in one form :"<<sum2;
// // // // }
// // // // int main()
// // // // {
// // // //     int num;
// // // //     cout<<"Enter your choice :"<<endl;
// // // //     cin>>num;
// // // //     cout<<endl<<"Inside the main function () :"<<endl;

// // // //     Oneorder(num);
// // // // }



// // // // //set or get to print order using class & obj.
// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // class student{
// // // //     int age;
// // // //     string f;
// // // //     string last;
// // // //     int standard;
    
// // // //     public:

// // // //     void setdata(int a, string st, string e, int d)
// // // //     {
// // // //         cout<<endl<<"Setdata() called :"<<endl;
// // // //         age=a;
// // // //         f=st;
// // // //         last=e;
// // // //         standard=d;
// // // //     }

// // // //       void getdata()
// // // //     {
// // // //         cout<<endl<<"getdata() called :"<<endl;
// // // //         cout<<age<<endl;
// // // //         cout<<f<<endl;
// // // //         cout<<last<<endl;
// // // //         cout<<standard;
// // // //     }
    
    
// // // // };

// // // // int main()
// // // // {
// // // //     student s1;
// // // //     cout<<endl<<"Indise the main fun():"<<endl;
// // // //     s1.setdata(21, "shivani", "jangid", 1);
// // // //     s1.getdata();
// // // //     return 0;
// // // // }








// // // // // a program of area calculate
// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // class Rectangle{
// // // //     private:
// // // //     int length;
// // // //     int breadth;

// // // //     public:
// // // //     int getArea()
// // // //     {
// // // //         length= 4;
// // // //         breadth= 20;
// // // //     return length*breadth; 
// // // //     }
// // // // };

// // // // int main()
// // // // {
// // // //     Rectangle r1;
// // // //     int rec= r1.getArea();
// // // //     cout<<"Area of a rectangle = "<<rec;
// // // // }
