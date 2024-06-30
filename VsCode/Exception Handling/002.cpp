//Bank account--- exception handling
#include<iostream>
//#include<stdexcept>
using namespace std;

int main()
{
    system("cls");
    int a; double bal=1000;
   try
    {
        double amt;

        //Depositing amount;
        cout<<"Enter deposit Amount : "<<endl;
        cin>> amt;

        ch:
        cout<<"Please enter the corrected Amount : "<<endl;
        cin>>amt;


        if(amt<=0)
        {
            cout<<"Invaild deposit Amount : "<<endl;
            //throw invaild_argument("Invaild deposited Amount :\n");
            goto ch;
        }


        bal= bal+amt;
        cout<<"Available balance : "<<bal<<endl;

        //Withdrawal amount;

        double withdw;
        cout<<"Enter withdrawal Amount : "<<endl;
        cin>>withdw;



        if(withdw<=0)
        {
            //cout<<"Sorry, please withdrawal correct Amount : "<<endl;
            throw invaild_argument("Invaild deposited Amount :\n");

        }

        if(withdw>0)
        {
            cout<<"Insufficient balance : "<<endl;
        }




        withdw= bal-withdw;
        cout<<"Available Amount : "<<withdw<<endl;
        
    }

    catch(exception e)
    {
        cout<<e.what()<<endl;
    }
}