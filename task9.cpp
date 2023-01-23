#include<iostream>
using namespace std;

int main()
{
    int row = 15;
    for(int x = 1 ; x <= row ; x++)
    {
        for(int y = 1 ; y <= x ; y++)
        {
            cout<<"*";
        }

        for(int z = 1 ; z <= (row-x) ; z++)
        {
            cout<<" ";
        }

        for(int l = 1 ; l<= (row-x) ; l++)
        {
            cout<<" ";
        }

        for(int k = 1 ; k <= x ; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}