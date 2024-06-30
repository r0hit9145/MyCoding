//file -- ofstream
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;

    fout.open("abc.txt");
    int arr[5]={1, 2, 3, 4, 5};

    
    // int n=sizeof(arr)/sizeof(int);
    // int max=0;
    // for(int i=0; i<n; i++)
    // {
    //     if(arr[i]>max)
    //     {
    //         max=arr[i];

    //     }
    // }
    // fout<<"maximum:"<<max<<endl;

    // fout.close();

    ifstream t;
    
    t.open("abc.txt");

    cout<<"maximum: " ;//<<max;
    t.close();
}