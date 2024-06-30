//using ofstream to write in an existing file.
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
    //string str="Hello Welcome";
    string str2;
    //Writting in the file.
   // ofstream out("Checking file.txt");
    //out<<str<<" ";
    //cout<<str<<" ";

    ifstream in("Checking file.txt");
    //in>>str2;//must to be added.
    getline(in, str2);
    cout<<str2;
    getline(in, str2);
    cout<<str2;
}
