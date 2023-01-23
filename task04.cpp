#include<iostream>
using namespace std;

void amplify(int num);

int main()
{
    int number;

    cout<<"Enter the number: ";
    cin>>number;

    amplify(number);
}

void amplify(int num)
{
    int count = 0;
    int value = 0;

    for(int x = 1 ; x <= num ; x++)
    {
        count++;

        if(count%4 == 0)
        {
          value=count*10;
          cout<<value<<endl;
          continue;
        }

        cout<<count;
        cout<<endl;
    }
}