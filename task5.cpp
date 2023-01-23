#include<iostream>
using namespace std;

int triangularSequence(int number);

int main()
{
    int number;
    cout<<"Enter the number: ";
    cin>>number;

    int ans = triangularSequence(number);
    cout<<ans;
}

int triangularSequence(int number)
{
    int seq = 0;

    for(int x = 0 ; x <= number ; x++)
    {
        seq = seq+x;
    }

    return seq;
}