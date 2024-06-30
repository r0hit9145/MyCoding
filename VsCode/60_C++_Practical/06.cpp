//WAP that adds 2 complex numbers. the object must be 
//passed by reference and the result must be passed by value.
#include<iostream>
using namespace std;

class Complex
{
    public:
    float real, imag;
    //int real2, imag2;

    Complex(float r=0, float i=0): real(r), imag(i){};


    Complex (double r, double i): real(r), imag(i){};
    
    //Adding two complex numbers-- //Call by reference 
    static Complex addcomplex(const Complex &c1, const Complex &c2)
    {
        Complex result;
        result.real= c1.real+ c2.real;
        result.imag= c1.imag+ c2.imag;

        return result;
    }

    void display()
    {
        cout<<real<<" + "<<" i"<<imag<<endl;
    }  
};

int main()
{
    Complex c1(2.0, 3.7), c2(3.0, 2.4);

    Complex sum= sum.addcomplex(c1, c2);

    sum.display();
}