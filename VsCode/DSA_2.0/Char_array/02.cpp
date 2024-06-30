//a calculating string length--------->
#include<iostream>
using namespace std;

class length
{
    public:
    void cal_length_string(char name[], int size)
    {
        int i; int length=0;
        for(int i=0; name[i]!='\0'; i++)
        {
            length++;
            //cout<<"Loop mein gaya:"<<endl;
        }
        cout<<"My string length is : "<<length;
    }
};

int main()
{
    length l1;
    char name[20];
    int size=7;
    cout<<"Enter your name:";
    cin>>name;
    l1.cal_length_string(name, size);
}