//file handling concept
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
    ofstream fout("Chw file.txt");

    string name;
    //Open the file
    //fout.open("Creating f file.txt");

    cout<<"Enter your name : "<<endl;
    //cin>>name;
    getline(cin, name);

    fout<<"My name is : "<<name;

    fout.close();



    ifstream fin;
    fin.open("Chw file.txt");

    string name1;
    // getline(fin, name);
    getline(fin, name1);

    cout<<name1<<" ";
}