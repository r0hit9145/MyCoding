//Using access modifiers..
#include<iostream>
using namespace std;
class Guitar{
    //properties.
    public://code challenge accessing the elements.
    int string =6;
    char name='accousic';

};
int main()
{
    //creation of object.
    Guitar play;
    cout<<"Size of : "<<sizeof(play);
    cout<<"string is :"<<play.string<<endl;
    cout<<"Name is :"<<play.name<<endl;
}