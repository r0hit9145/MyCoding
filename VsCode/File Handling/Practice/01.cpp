//using ofstream-creation then get the data of file.
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream f;

    //Which types of data, you want to write integer.
    int x;

    //creation of the file
    f.open("Checking file.txt");

    while(true)
    {
        cin>>x;
        if(x==-1)
        {
            break;
        }
        //written inside the file.
        f<<x<<" ";
        cout<<x<<" "<<endl;
    }

    //Now, close the file
    f.close();

    //Now, fetch the file.
    ifstream st;

    //Before to open it.
    st.open("Checking file.txt");

    while(st>>x)
    {
    cout<<x<<" ";
    }
    st.close();

}