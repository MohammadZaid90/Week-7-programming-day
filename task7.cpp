#include<iostream>
using namespace std;

int main()
{
    int num;
    int ent;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;

    cout<<"Enter the iteration you want: ";
    cin>>ent;

    for(int x = 1 ; x <= ent ; x++)
    {
        
       cout<<"Enter the number "<<x<<": "<<endl;
        cin>>num;

        if(num%2 == 0)
        {
            count1++;
            cout<<count1;
        }

        if(num%3 == 0)
        {
            count2++;
        }

        if(num%4 == 0)
        {
            count3++;
        }
    }

    int p1 = count1;
    int p2 = count2;
    int p3 = count3;

    float per1 = (count1*100)/ent;
    float per2 = (count2*100)/ent;
    float per3 = (count3*100)/ent;


    cout<<"p1 = "<<per1<<endl;
    cout<<"p2 = "<<per2<<endl;
    cout<<"p3 = "<<per3<<endl;
}