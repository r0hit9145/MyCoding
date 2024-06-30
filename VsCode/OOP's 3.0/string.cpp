
//reverse a string in string type ;
#include<iostream>
using namespace std;

//function using a factorial calculation.
//this is called function.
string rev_string(string str)
{
    int i;
    int length= str.length();
    cout<<length<<endl;
    for(int i=0; i<(length/2); i++)
    {
       // swap(str[i], str[length-i-1]);
       char temp= str[i];
       str[i]= str[length-i-1];
       str[length-i-1]=temp;
        //cout<<str[i]<<" ";
    }
        return str;
}

//int main()
int main()
{
    string name;
    cout<<"enter the string as your wish:\n";
    cin>>name;
    //a function calling to its called definition.
    string name1= rev_string(name);
    cout<<"My string is that:"<<name1<<endl;
}