/*
8. Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialise all details using constructor.
*/
#include<iostream>
using namespace std;
class Bank
{
    private:
       int principal,years;
       static float roi;
       float si;
    public:
       void setBank(int p,int y)
        {
            principal=p;
            years=y;
        }
       void SimpleInterest()
        {
            si=(principal*roi*years)/100;
        }
       void displayInterest()
        {
            cout<<"Simple Interest is: "<<si;
            cout<<endl;
        }
       Bank()
        {
            principal=0;
            years=0;
            si=0;
        }
};

float Bank :: roi=8;

int main()
{
    Bank b1,b2,b3;
    b1.setBank(250000,2);
    b2.setBank(450000,4);
    b1.SimpleInterest();
    b2.SimpleInterest();
    b1.displayInterest();
    b2.displayInterest();
    b3.displayInterest();
    return 0;
    
}