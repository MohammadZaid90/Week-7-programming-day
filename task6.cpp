#include<iostream>
using namespace std;

void calculatePatient(int day);

int main()
{
    int day;

    cout<<"Enter the Days you want calculation: ";
    cin>>day;

    calculatePatient(day);
}

void calculatePatient(int day)
{
    int patientCount = 0; 
    int patient;
    int doctor = 7;
    int treated = 0;
    int untreated = 0;
    int count = 1;

    cout<<"Enter the number of patient according to days: "<<endl;
        for(int x = 1 ; x <= day ; x++)
        {
            cin>>patient;

            if(patient < doctor)
            {
                doctor = patient;
            }
                if((count%3 != 0) || (count%3 == 0 && untreated < treated))
                {
                    patientCount = patient - doctor;
                    untreated = untreated + patientCount;
                    treated = treated + doctor;
                } 

            else if(count%3 == 0 && untreated > treated)
            {
                doctor = doctor + 1;
                patientCount = patient - doctor;
                untreated = untreated + patientCount;
                treated = treated + doctor;
            }
            
            count++;
        }
            cout<<"Treated Patients: "<<treated<<endl;
            cout<<"Untreated Patients: "<<untreated<<endl;
}