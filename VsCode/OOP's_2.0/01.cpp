// automatically constructor called :
#include<bits/stdc++.h>
using namespace std;

struct Hero{
    public:
    Hero()
    {
        cout<<"Constructor called :"<<endl;
    }
};

int main()
{
    system("cls");
    cout<<endl<<"Hi!, this is statically :"<<endl;
    //statically allocation ;
    Hero ramesh;
    // //invaild bcoz it's auto called ;
    // ramesh.Hero();
    
    //Dynamically allocation:
    cout<<"Hi!, this is dynamically :";
    Hero *b= new Hero();
    cout<<"Hellor constructor both:"<<endl;
}