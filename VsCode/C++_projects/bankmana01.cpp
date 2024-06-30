//                  *****BANK- MANAGMENT- PROJECT*****
// Including the header files
#include <iostream> // basic read or write the data
#include<conio.h>
using namespace std;

// creating a bank class
class Bank
{
    // access modifiers
public:
    // one main menu-- 1, 2, 3:
    void Main_Menu();

    // Bank management- all details:
    void Bank_Management();

    // one Atm management - all details:
    void ATM_Management();

};

// outside the class- main member function.
void Bank :: Main_Menu()
{
    system("cls");
    int choice;
    //formating as we given:
    p:
    cout << "\n\n\t\t\tControl Panel-";
    cout << "\n\n 1. Bank Management";
    cout << "\n\n 2. ATM Management";
    cout << "\n\n 3. Exit";

    //User - choice?
    cout<<"\n\nEnter your request";
    cin>>choice;
    switch(choice)
    {
        case 1: Bank_Management();
                break;
        case 2: 
                {
                string email; int pin;

                //databse-
                int pincode= 12345;
                string Email= "abc@gmail.com";

                //For the security purpose - before to directly
                cout<<"\n\n\t\t Login Account ";
                //Enter - your E-mail- 1
                cout<<"\n\n E-mail :";
                cin>>(email);

                //Enter your pin code
                cout<<"\n\nEnter your Pin Code :";

                //only 5 digit pin code- loop
                for(int i=0; i<=5; i++)
                {
                    int pin= getch();
                    cin>>pin;
                }
                if(email== Email && pin== pincode)
                {
                ATM_Management();
                break;
                }
            }
        case 3: 
                exit(0);
                break;
        default:
                cout<<"\n\nSorry !, Invaild type - Please try again";
    }
    //reading again-
    //getch();

    //jupming where you want-
    goto p;
}

void Bank :: ATM_Management()
{

}


// int main body
int main()
{
    system("cls");
    // static memory object created:
    Bank bk; // helping, to call
    bk.Main_Menu();
}