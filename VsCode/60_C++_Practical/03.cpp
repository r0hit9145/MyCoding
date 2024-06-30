//Write a program to find the next date using unary increment operator
#include<iostream>
using namespace std;

class Date
{
    private:
    int day, month, year;
    public:
    
    Date(int d, int m, int y): day(d), month(m), year(y){};

    //Overloading unary operator
    void operator ++()
    {
        ++day;
        if(day>30)
        {
            day=1;
            month++;
        }

        else if(month>12)
        {
            month=01;
            ++year;
        }
    }

    void Display_next_date()
    {
        cout<<day<<" / "<<month<<" / "<<year<<endl;
    }
};



int main()
{
    Date current_data(30, 11, 2023);

    //Operator called -----> Unary
    ++current_data;
    cout<<"Current date : ";
    current_data.Display_next_date();
}
