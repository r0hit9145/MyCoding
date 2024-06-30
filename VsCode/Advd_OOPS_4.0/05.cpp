//Private Destructor in C++

// CPP program to illustrate

// Private Destructor

#include <iostream>
using namespace std;

class Test {
private:
	~Test() {
        cout<<"destructor is called:";
    }
};

// Driver Code
int main()
{
	Test* t = new Test;
	//delete t;
}