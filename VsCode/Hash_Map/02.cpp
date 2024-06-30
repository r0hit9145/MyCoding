//Hash mapping -- time complexity 
/*
Inbuild stuff
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






    // Searching?
    cout<<m["mera"]<<endl;// 0(1)
    
    //or

    cout<<m.at("babbar")<<endl;

    // but?

    //terminate called after throwing an instance of 'std::out_of_range'
    //what():  _Map_base::at

    //cout<<m.at("Mywork")<<endl;







    //but even through also

    cout<<m["Mywork"]<<endl;//0
    //now?
    cout<<m.at("Mywork")<<endl;//0







    

                      //size checking

    cout<<m.size()<<endl;

    // To checking presence
    cout<<m.count("Mywork")<<endl;


    //Delete

    m.erase("love");
    cout<<m.size()<<endl;
    return 0;
    
}