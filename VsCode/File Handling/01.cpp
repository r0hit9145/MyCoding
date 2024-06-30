//Using file handling
/*
first-- Creation of 'ofstream'
*/
#include<iostream>
//ifstream, ofstream, fstream
#include<fstream>
using namespace std;

int main()
{
    //Creation of ofstream class object
    ofstream t;

    long long int check;


    //first open the file
    t.open("Manisha.docx");


    //Execute the file via looping
    while(true)
    {
        //Read the line from standard input.
        cin>>check;


        //Press -1 to exit.
        if(check==-1)
        {
            break;
        }

        //Write line in file
        t<<check<<endl;
    }

    //close the file.
      t.close();

      //Now, we're going to read data of the file.
      ifstream read1;

      //Firstly open to the file
      read1.open("Simple text.txt");

      while(read1>>check)
      {
        cout<<check<<"\n ";
      }

      //close the file
      read1.close();

      return 0;
}