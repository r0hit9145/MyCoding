#include<iostream>
using namespace std;

class Matrix
{
    public:
    int real, imag;

    Matrix(int r=0, int i=0)
    {
        this->real=r;
        this->imag=i;
    }
    void operator+(Matrix &obj)
    {
        Matrix res;
        res.real= this->real+obj.real;
        res.imag= this->imag+obj.imag;
        //cout<<real<<" +"<<" i"<<imag<<endl;
        //return res;
        cout<<res.real<<" + "<<" i"<<res.imag<<endl;
    }


    // void printing()
    // {
    //     cout<<real<<"+ "<<" i"<<imag<<endl;
    // }
};

int main()
{
    Matrix m1(2, 3), m2(4, 6);
    //Matrix m3=m1+m2;
    m1+m2;
    //m3.printing();
    //printing();
    // m3=m1+m2;
}