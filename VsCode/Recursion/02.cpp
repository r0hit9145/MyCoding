#include<iostream>
using namespace std;

void reachHome(int intial, int destination)
{
    if(intial==1)
    {
        cout<<"Okay Bye:"<<endl;
    }
    //base case
    if(intial== destination)
    {
        cout<<"Pooch Gaya Ghar :"<<endl;
        return ;
    }
    //recursive approach
    intial++;
    reachHome(intial, destination);
    cout<<"Intial-->"<<intial<<" Destination-->"<<destination;
    cout<<endl;

}


int main()
{
    system("cls");
    int intial=0;
    int destination;
    cin>>destination;
    cout<<endl;
    reachHome(intial, destination);
}