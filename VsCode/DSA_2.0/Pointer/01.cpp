//normal pointer


// //pointer concepts
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num=33;
//     int *ptr= &num;
//     //*ptr= &num// it's true.
//     cout<<num<<endl;//normal value;
//     cout<<&num<<endl;//address of num;
//     cout<<"Value of :"<<*ptr<<endl;//33;
//     cout<<"Address of :"<<ptr;//:0x61ff08 hexadecimal garbage address.
//     cout<<"one more :"<<*(*(ptr));
// }  

// size of address checking.....

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num=33;
//     int *ptr= &num;
//     double d=34;
//     double *dr= &d;
//     //*ptr= &num// it's true.
//     cout<<"Size of integer- num :"<<sizeof(num)<<endl;
//     cout<<"size of pointer- ptr :"<<sizeof(ptr)<<endl;
//     cout<<"size of double- dr :"<<sizeof(d);

// } 


//kheloooo with its. and to practise.

// #include<iostream>
// using namespace std;
// int main()
// {
//     //wrong or gahtiya pratice that means to point a garbage value but run perfectly.  
//     int *ptr;
//     cout<<*ptr<<endl;
//     //even though is good practise.
//     int *ptr1= 0;
//     cout<<*ptr1<<endl;
//     int a=23;
//     int *b= &a;
//     cout<<b<<endl;
//     int c=5;
//     int e=c;
//     e++;
//     cout<<c;//
    
//     //****************very very important concept****************

//     //when b=a; //then store sperate same copy exactly.
//     int a_=2;
//     int *b_=&a_;
//     b_++;
//     cout<<"value of a is :"<<a_<<endl;
//     //after increament of b:
//     cout<<"Value of b is :"<<b_<<endl;// inside copy of a;

     
//     //but Here, in pointer assign a original value during the time.

//     //when x=ptr; //then same value indicated value.
//     int x= 2;
//     int *ptr2=&x;
//     (*ptr2)++;
//     cout<<"value of a is :"<<x<<endl;
//     //after increament of b:
//     cout<<"Value of b is :"<<ptr2<<endl;// inside copy of a;
// } 



#include<iostream>
using namespace std;
int main()
{
    int a=23;
    int b=44;
    int c=b+1;
    cout<<c<<endl;
    int *t= &a;
    int store= *t++;
    cout<<store<<endl;
    // cout<<a<<endl;//23
    // cout<<&a<<endl;//100
    // cout<<*ptr<<endl;//23
    // cout<<ptr<<endl;//123
    // cout<<*ptr1<<endl;//23
    // cout<<&ptr1;//1234

    // important concept
    double ch=23;
    double *ch1= &ch;
    cout<<sizeof(*ch1);
    //cout<<g<<endl;
    //cout<<*v<<endl;
}