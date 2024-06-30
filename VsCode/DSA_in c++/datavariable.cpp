/*to print and identify various types of data
variables.- int,char,float,double,long,unsinged
bool-(true-1, false-0)
*/

/*#include<iostream>
using namespace std;
int main()
{
    int a=12; char c='b';
    float f=1.2;
    double d=2.3;
    bool bo =true;
    cout<<a<<endl;//integer data
    cout<<c<<endl;//character data
    cout<<f<<endl;//float data
    cout<<d;<<endl//double data
    //cout<<bo;
}*/

/*Experiment on these data variables.---------- (Integer)
               type-1
*/
/*
#include<iostream>
using namespace std;
int main()
{
    //first of that variables experiement.
    //error: expected unqualified-id before numeric constant
     //int 1=23;

    //int 1_a=23;//error: unable to find numeric literal operator 'operator""_a'
    int a_variable =23;//perfectly run.!!

    int _variable ='a';//this would be performed a ascii value.
    
    cout<<a_variable<<endl;
    
    cout<<_variable<<endl;
}*/

/*Experiment on these data variables.---------- (character)
*/
                   //type-2
/*#include<iostream>
using namespace std;
int main()
{
    char a='2';
    char d='abc'//totally wrong intialization!!
    bool ab=true;
    bool _d=0;//code challenge!!
    char _= 'A';//code challenge!!
    char _a='@';//it is integer value but outputing as char.
    char variable= '97';//warning: overflow in implicit constant conversion [-Woverflow]
    char a_char='achkjkhk';//code challenge!!
    cout<<_a<<endl;
    cout<<a;
    cout<<endl;
    cout<<variable<<endl;
    cout<<a_char<<endl;
    cout<<_<<endl;
    cout<<ab<<endl;
    cout<<_d;

}*/

/*Experiment on these data variables.---------- (float, double, sizeof)
*/
                     //type-4

#include<iostream>
using namespace std;
int main()
{
    float f=1.2;
    char ch='c';
    int ch1= sizeof(ch);//integer format as returning value
    //integer
    float _float= 4343.01;//code challenge!!
    float _1=23.00;//code challenge!!
    double d=1;
    int size= sizeof(f);
    float _size=sizeof(d);//wrong but challenging task!!
    cout<<f<<endl;
    cout<<_float<<endl;
    cout<<d<<endl;
    cout<<_1<<endl;
    cout<<"size of f :"<<size<<endl;
    cout<<"size of d :"<<_size<<endl;
    cout<<"size of character :"<<ch1;

}
