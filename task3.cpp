#include<iostream>
using namespace std;

int main()
{
    int row = 5;
    for(int x = 1 ; x <= row ; x++)
    {
        for(int z = 1 ; z <= (row-x) ; z++)
        {
            cout<<" ";
        }
        for(int y = 1 ; y <= x ; y++)
        {
            cout<<"$";
        }

        cout<<endl;
    }

    for(int x = 1 ; x <= row ; x++)
    {
        for(int y = 1 ; y <= x ; y++)
        {
           cout<<" ";
        }

        for(int z = 1 ; z <= (row-x) ; z++)
        {
            cout<<"&";
        }
        cout<<endl;
    }
}