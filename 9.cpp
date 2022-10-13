/*
9. Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.
*/
#include<iostream>
using namespace std;
class Bill
 {
    private:
       int unit;
       float bill;
    public:
       void setBill(int u)
        {
          unit=u;
        }
       void calculateBill()
        {
          if(unit<=100) 
            bill=unit*1.2;
          else if(unit>100 && unit<=200)
            bill=(120+(unit-100)*2);
          else 
            bill=(320+(unit-200)*3);
        }
       void displayBill()
        {
            cout<<"Electricity Bill for "<<unit<<" units is: "<<bill;
            cout<<endl;
        }
       Bill()
        {
            unit=0;
            bill=0;
        }
 };
 int main()
 {
    Bill b1,b2,b3;
    b1.setBill(150);
    b2.setBill(360);
    b3.setBill(260);
    b1.calculateBill();
    b2.calculateBill();
    b3.calculateBill();
    b1.displayBill();
    b2.displayBill();
    b3.displayBill();
    return 0;
 }