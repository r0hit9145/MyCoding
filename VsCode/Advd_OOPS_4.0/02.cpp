// a function of friend- 02
#include<iostream>
using namespace std;
class base
{
    private:
    int private_var;
    protected:
    int protected_var;
    public:
    //definition of a base class constructor
    base()
    {
        private_var=23;
        protected_var=34;
    }
    // declared as a friend function.
    friend void friend_function(base &c);
};

//making a global variable
void friend_function(base &b)
{
    cout<<b.private_var<<" "<<b.protected_var;
}

int main()
{
    //constructor called.
    base obj;
    //a function called.
    friend_function(obj);
}