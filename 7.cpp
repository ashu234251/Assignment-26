/*
7. Define a class Box and write a program to enter length, breadth and height and
initialise objects using constructor also define member functions to calculate volume
of the box.
*/
#include<iostream>
using namespace std;
class Box
{
    private:
       int length,breadth,height,volume;
    public:
       void setData(int x,int y,int z)
        {
            length=x;
            breadth=y;
            height=z;
        }
       void Volume()
        {
            volume=length*breadth*height;
        }
       void displayData()
        {
            cout<<"Volume of Cube is: "<<volume;
            cout<<endl;
        }
       Box()
        {
            length=0;
            breadth=0;
            height=0;
            volume=0;
        }
};
int main()
{
    Box b1,b2,b3;
    b1.setData(5,3,6);
    b2.setData(3,8,11);
    b1.Volume();
    b2.Volume();
    b1.displayData();
    b2.displayData();
    b3.displayData();
    return 0;
}