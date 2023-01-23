#include<iostream>
using namespace std;

void averagePrice(float cargo);

int main()
{
    float cargo;
    cout<<"Enter the  number of cargo: ";
    cin>>cargo;

    averagePrice(cargo);
}

void averagePrice(float cargo)
{
    float ton,percentBus,percentTruck,percentTrain,averagePrice;
    int countbus = 0;
    int counttruck = 0;
    int counttrain = 0;
    int countton = 0;

    for(int x = 1 ; x <= cargo ; x++)
    {
        cout<<"Enter the tonnage "<<x<<":";
        cin>>ton;

        if(ton <= 3)
        {
            countbus = countbus+ton;
        }

        if(ton > 3 && ton <= 11)
        {
            counttruck = counttruck + ton;
        } 

        if(ton > 11)
        {
            counttrain = counttrain + ton;
        }

        countton = countton + ton;      
    }

    percentBus = (countbus*100)/countton;
    percentTruck = (counttruck*100)/countton;
    percentTrain = (counttrain*100)/countton;

    averagePrice = (countbus * 200 + counttruck * 175 + counttrain *120)/countton;

    cout<<averagePrice<<endl;
    cout<<percentBus<<"%"<<endl;
    cout<<percentTruck<<"%"<<endl;
    cout<<percentTrain<<"%"<<endl;
}