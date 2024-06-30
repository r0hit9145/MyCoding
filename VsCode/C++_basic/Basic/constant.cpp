#include<iostream>
using namespace std;

class A
{
    public:


    char converted_alpha(char ch)
    {
        if(ch>='a' && ch<='z')
        return ch;
        else
        {
            char temp= ch-'A'+'a';
            return temp;
        }
    }

    int palaindrome(char ch[], int size)
    {
        int s=0; int e=size-1;
        while(s<=e)
        {
            if(converted_alpha(ch[s])!=ch[e])
            {
                return false;
            }
            s++;
            e--;
        }
        return 1;
    }
};


int main()
{
    system("cls");
    A obj;
    char ch[30];
    int size;
    cin>>size;
    // cout<<"Enter your size :"<<endl;
    cout<<"Enter your character :";
    for(int i=0; i<size; i++)
    {
        cin>>ch[i];
    }
    cout<<"Palandrome is or not :"<<obj.palaindrome(ch, size);

}


























//write a program using constant keyword
// #include<iostream>
// using namespace std;
// int main()
// {
//     const int int_constant_value=12;
//     cout<<int_constant_value<<endl;
//     string s= "sfjsf";
//     cout<<s;
//     //constant is not allowed.
//     //int_constant_value ++;
//     cout<<int_constant_value<<endl;
// }