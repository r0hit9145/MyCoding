// // // //write a program to calculate a simple interest.
// // // /*#include<iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int simple_in, principle,rate,time;
// // //     //simple interest calculated.
// // //     cout<<"Enter the numbers :"<<simple_in<<endl;
// // //     cin>>principle>>rate>>time;
// // //     simple_in=(principle*rate*time)/100;
// // //     cout<<"My simple interest is :"<<simple_in;
// // // } 
// // // //write a program to calculate an avgerage of the num.
// // // #include<iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int avg,a,b,c;
// // //     cout<<"Enter the numbers of avg :"<<a<<b<<c<<endl;
// // //     cin>>a>>b>>c;
// // //     avg=(a+b+c)/3;
// // //     cout<<"The average num of is :"<<avg;
// // // }*/

// // // //write a program to calculate a num is even or odd.
// // // #include<iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     //input-
// // //     int cal_evnodd;
// // //     bool ch='a';//code challenge.
// // //     //int ch1="apple";
// // //     cout<<"Enter the number :"<<endl;
// // //     cout<<ch<<endl;
// // //     //cout<<ch1<<endl;
// // //     cin>>cal_evnodd;
// // //     //if(cal_evnodd%2==!1)
// // //     //without conditinal operators.--> code challenge.
// // //     if(!(cal_evnodd&1))//bitwise AND
// // //     cout<<"Even :"<<endl;
// // //     else
// // //     cout<<"Odd :"<<endl;
// // // }

// //          //date- 14/09/2023

// // //write a program to print a max number?
// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //    int num;
// //    cout<<"Enter the numbers :"<<endl;
// //    cin>>num;
// //    for(int first=0; first<=num; first++)
// //    {
        
// //    }
// // }
// #include<iostream>
// using namespace std;
// int main()
// {
//    int num, extra=0, rem;
//    cout<<"Enter the number :"<<endl;
//    cin>>num;
//    while(num>0)
//    {
//          rem= num%2;
//          //rem=extra+rem;
//          num=num/2;
//          cout<<rem;
//    }
// }
// write a program of decima to binary number--
#include<iostream>
using namespace std;
int main()
{
      int num,save, save1;
      cout<<"Enter the number :"<<endl;
      cin>>num;
      while(num>0)
      {
            save= num%2;
            num= num/2;
            save1= num%10;
            save1= num/10;
            cout<<save<<endl;
            cout<<save1;
      }
}