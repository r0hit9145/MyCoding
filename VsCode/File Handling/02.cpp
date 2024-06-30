//file handling
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //Creation of the file.
    ofstream t;
    
    int check;
    //open this
    t.open("Simple one.txt");
    
    while(true)
    {
        cin>>check;
        if(check==-1)
        {
            cout<<"Exit: ";
            break;
        }
        t<<check<<endl;
    }
    
    //closing the file
    t.close();
    
    
    //first open the file
    ifstream fin;
    
    //open the file.
    fin.open("Simple one.txt");
    
    while(fin>>check)
    {
        cout<<check;
    }
    
    //close the file
    fin.close();
}