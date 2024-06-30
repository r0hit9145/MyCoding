//WAP to add 2 arrays using friend function and operator overloading.
#include<iostream>
using namespace std;


class _1
{
    private:
    int private_arr1;
    int private_arr2;
    int size;
    public:
    
    //Using friend function
    friend void friend_fn(_2 &obj);
};


class _2
{
    public:

    void friend_fn(_1 &obj)
    {
        //cout<<"Private member of _1_ : "<<obj.private_arr1<<endl;
    }
};

int main()
{
    cout<<"Enter the first and second array's size : "<<endl;
    int n, s;
    cin>>n>>s;
    _1 obj;

    _2 second(obj);

}