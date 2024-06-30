// Inheritance
#include <iostream>
using namespace std;

class Human
{
    public:
    //private:
    int height = 5;
    int age;
    int weight = 60;
    //private:
    // getdata calling.
    int getAge()
    {
        return this->age;
    }

    // setdata calling.
    void setAge(int age)
    {
        this->age = age;
    }
};

// inherieted from human class to child class

class Male : public Human
{
    string color = "Yellow";

    void getColor()
    {
        cout << "Getcolor is called :\n"<< endl;
        //cout<<age;
    }
};

/*
base class              derived class           result
public                  public                  public
private                 public                  private
protected               public                  protected

protected               private                 private
protected               public                  protected
protected               protected               protected
*/

// int main body
int main()
{
    //statically memory allocation
    class Male m1;
    //Dynamically memory allocation
    class Human *h1= new Human;
    cout<<(*h1).age;
    cout << m1.age << endl;
    cout << m1.height << endl;
    cout << m1.weight << endl;
    cout << "Calling function :\n"<< endl;
    m1.setAge(23);
    cout<<"The age is :"<<m1.getAge();
    //we've also to release memory in dynamcic
    delete h1;
}