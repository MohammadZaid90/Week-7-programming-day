#include<iostream>
using namespace std;

int main()
{
    int row;

    cout<<"Enter the rows: ";
    cin>>row;

    for(int x = row ; x > 0 ; x--)
    {
        for(int y = 1 ; y <= x ; y++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
}