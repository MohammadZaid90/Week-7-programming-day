#include<iostream>
using namespace std;

int main()

{
    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;

    for(int x = 1 ; x <= row ; x++)
    {
        for(int y = 1 ; y <= x ; y++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
}