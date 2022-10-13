// 5. Define a class Date and write a program to Display Dateand initialise date object using Constructors.

#include<iostream>
using namespace std;
class Date
{
    private:
       int day,month,year;
    public:
       void setDate(int x,int y,int z)
        {
            day=x;
            month=y;
            year=z;
        }
       void displayDate()
        {
            cout<<"Date is: "<<day<<"/"<<month<<"/"<<year;
            cout<<endl;
        }
       Date()
        {
            day=0;
            month=0;
            year=0;
        }
};
int main()
{
    Date d1,d2,d3;
    d1.setDate(12,10,2022);
    d2.setDate(24,10,2022);
    d1.displayDate();
    d2.displayDate();
    d3.displayDate();
    return 0;
}