//A created file to fetch its data?
#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

int main()
{
    //to fetch the file, open it.
    // ofstream fin;
    // //int tm;
    // //Opening the file
    // fin.open("Checking file.txt");

    // fin.close();
    ifstream read;
    //vector<int> a;
    char a;
    read.open("Checking file.txt");
    while(read>>a)
    {
        cout<<a<<" ";
    }
    read.close();

    //Now, i try to make a own's file
    ofstream ff;

    //char ch;
    ff.open("new one.txt");
    // while(cin>>a)
    // {
    // ff>>a;

    // while(read>>a)
    // {
        ff<<a;
    



    
    ff.close();

    // ifstream copy;
    // copy.open("new one.txt");
    // //copy>>a;
    // while(copy>>a)
    // {
    //     //copy<<a<<' ';
    // }
    // copy.close();
}