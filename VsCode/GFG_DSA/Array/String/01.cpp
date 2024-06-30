// //Check whether is balanced or not?
// //{([])}-- if return true else return false.

// //           TC--------> 0(n)

// //brute force approach----

// #include<iostream>
// #include<vector>
// using namespace std;

// class Modi
// {
//     public:
//     void Pair_balanced(char ch[], int n)
//     {
//         int first=0; int end=n-1;
//         while(first<=end)
//         {
//             //cout<<ch[end]<<endl;
//             //checking whether is balanced or not
//             if(ch[first]=='{' && ch[end]=='}')
//             {
//                 cout<<"Balanced : "<<ch[first]<<" "<<ch[end]<<endl;
//                 // first++;
//                 // end--;
//             }
//             first++;
//             end--;
//             if(ch[first]=='(' && ch[end]==')')
//             {
//                 cout<<"Balanced : "<<ch[first]<<" "<<ch[end]<<endl;
//             }
//             first++;
//             end--;
//             if(ch[first]=='[' && ch[end]==']')
//             {
//                 cout<<"Balanced : "<<ch[first]<<" "<<ch[end]<<endl;

//             }
//             //cout<<"j";

//            // cout<<ch[first];
//         }

//         // while(first<end)
//         // {
//         //     cout<<ch[first]<<" ";
//         //     first++;
//         // }
//     }

// };


// int main()
// {
//     Modi ob;
    
//     //Vector form
//     char input[6]= { '{',  '(',  '[',  ']',  ')',  '}' };
//     //vector<string> ch(input.begin(), input.end());
//     int n= 6;//sizeof(input)/sizeof(string);
//     //if(input[0]==input[5])
//     //cout<<input[0]<<" "<<input[5]<<endl;
//     ob.Pair_balanced(input, n);

//     return 0;
// }


// TC---------> 0(n**2)
#include<iostream>
using namespace std;

class Check
{
    public:
    //intialization 
    void Balancing_brackets(char arr[], int n);
};

void Balancing_brackets(char arr[], int n)
{
    int i,j;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]=='(' && arr[j]==')')
            {
                //break;
                goto p;
            }
            else if(arr[i]=='{' && arr[j]=='}')
            {
                //break;
            }
            else
            {
            //break;
            }
        }
        p:
        cout<<"Balancing : "<<arr[i]<<' '<<arr[j]<<endl;
    }
}

int main()
{
    char ch[]= { '(' ,  '}' , ']' , ')' , '{' , '[' };
    int n=sizeof(ch)/sizeof(char);

    Balancing_brackets(ch, n);
}