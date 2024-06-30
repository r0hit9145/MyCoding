#include<iostream>
#include<fstream>
using namespace std;
int main()
{int m;
    ofstream fout1;
    fout1.open("abc.txt");
    m=8409;
    fout1<<m;
   // cout<<m;
    fout1.close();

    ofstream fout;
    fout.open("manisha.txt");
    fout<<m;
    fout.close();

    ifstream fink;
    fink.open("manisha.txt");
    
    fink>>m;
    cout<<m;
    
    fink.close();
    return 0;

}