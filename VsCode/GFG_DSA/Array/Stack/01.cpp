//Check vaild parenthesis or not? 
//       Tc-- 0(n)
#include<iostream>
#include<stack>
using namespace std;


bool is_Valid_Balanced(string str)
{
    stack <char> st;
    //I nedd a for loop
    for(int i=0; i<str.size(); i++)
    {
        //Before, we've to check all opening brackets...................
        if(str[i]=='[' || str[i]=='(' || str[i]=='{')
        {
            st.push(str[i]);
        }
        else
        {
        //suppose if stack is empty?
        if(st.empty())
        {
            return false;
        }
        

        //i need a character to store or fetch closing brackets....................
        char c;
        //Now, check , which element is at top position
        c=st.top();
        //once storing top in c then poped out it.
        st.pop();

        //Now, we have to check combined barackets........
        if((str[i]==']' && c=='[') || (str[i]==')' && c=='(') || (str[i]=='}' && c=='{'))
        {
            //return true;
            //cout<<str[i]<<" "<<c<<endl;
            //swap(str[i],c);
            //cout<<str[i]<<" "<<c<<endl;
        }
        else 
        {
            return false;
        }
        // if(str[i]==')' && c=='(')
        // {
        //     //return true;
        //     cout<<str[i]<<" "<<c<<endl;
        // }

        // if(str[i]=='}' && str[i]=='{')
        // {
        //     return true;
        // }
        }
    }
    if(st.empty())
        {
            return true;
        }
        else return false;
}

int main()
{
    string str="{([])}";//[({[([{}])]})}";

    //is_Valid_Balanced(str);
    if(is_Valid_Balanced(str))
        cout<<"Balanced parenthesis..";
    
    else
    {
    cout<<"Not Balanced parenthesis.....";
    }
}


//Something went wrong....


// //////////trial
// //{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends

// class Solution
// {
//     public:
//     //Function to check if brackets are balanced or not.
//     bool ispar(string x)
//     {
//         // Your code here
//         //int i;
//         stack<char> st;
//         for(int i=0; i<x.size(); i++)
//         {
//         if(x[i]=='{' or x[i]=='(' or x[i]=='[')
//         {
//             st.push(x[i]);
//         }
        
//         else
//         {
//             if(st.empty())
//             {
//                 return false;
//             }
            
//             char c;
//             c=st.top();
//             st.pop();
//             if(x[i]==']' && c=='[')
//             {
//                 return true;
//             }
            
//             if(x[i]==')' && c=='(')
//             {
//                 return true;
//             }
            
//             if(x[i]=='}' && c=='{')
//             {
//                 return true;
//             }
//         }
//         }
//         return st.empty();
//     }

// };

// //{ Driver Code Starts.

// int main()
// {
//    int t;
//    string a;
//    cin>>t;
//    while(t--)
//    {
//        cin>>a;
//        Solution obj;
//        if(obj.ispar(a))
//         cout<<"balanced"<<endl;
//        else
//         cout<<"not balanced"<<endl;
//    }
// }