//stl program--
/* STL
1. Algorithem
2. Containers
3. Functions
4. Iterators


1. Containers--

                                        "Pairs"

                                pair<int, int> p={x,y};
*/

#include<iostream>
using namespace std;

//Pairing 

void pairing_fun()
{
    pair<int, int> f={1, 3};

    cout<<f.first<<" "<<f.second<<endl<<endl;
}

//Nesting pair ---- pair of pair

void pair_Of_pair()
{
    pair<int, pair<int, int> > p= {1, {2, 3}};

    cout<<p.first<<" -> "<< p.second.first<<" -> "<< p.second.second<<endl;
}

//array== 

void pair_array_using()
{
    pair<int,int> arr[]={ {1, 3}, {2, 5}, {3, 2}, {4, 5} };

    //how to access?
    cout<<arr[1].second<<" "<<arr[2].first<<endl;
}
int main()
{
    system("cls");

    //singal pair
    pairing_fun();

    //nesting of pairs.
    pair_Of_pair();

    //using array form
    pair_array_using();
}