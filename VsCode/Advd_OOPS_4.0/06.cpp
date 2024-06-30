#include<iostream>
using namespace std;

enum roll
{
    satya= 34,
    rahul= 23,
    nidhi=22,
    dimple= 100,
    daksh=22,
};

int main()
{
    system("cls");
    roll r1;
    cout<<(r1=satya);
}