//Hash mapping -- time complexity 
/*
Inbuild stuffs
map----> (ordered)----> 0(logn)

unordered_map-----> 0(1)
*/

#include<iostream>
//inbuild the library
#include<map>
//unordered map
#include<unordered_map>
using namespace std;

int main()
{
    //Creation of Unordered map
    unordered_map<string, int> m;// <babbar-string, 3-integer>

    //Insertion---> pair 

    //1.
    //How to make a pair? 
    pair<string,int> p= make_pair("babbar", 3);

    //here going to insert
    m.insert(p);

    //2.      or
    pair<string, int> pair2("love", 2);\
    m.insert(pair2);

    //3.      or
    m["mera"]=1;

    //what will happen?
    m["mera"]=2;// only updation rather than duplicy. bcoz unique key.

    return 0;
    
}
