/*
1. Define a class Complex to represent a complex number with instance variables a and
b to store real and imaginary parts. Also define following member functions
a. void setData(int,int)
b. void showData()
c. Complex add(Complex)
*/

#include<iostream>
using namespace std;
class Complex
{
  private:
    int a,b;
  public:
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<<"Real= "<<a<<"  Imaginary= "<<b;
        cout<<endl;
    }
    Complex add(Complex A)
    {
        Complex temp;
        temp.a=a+A.a;
        temp.b=b+A.b;
        return temp;
    }
};

int main()
{
    Complex c1,c2,c3;
    c1.setData(4,9);
    c2.setData(-2,2);
    c1.showData();
    c2.showData();
    c3=c1.add(c2);
    c3.showData();
    return 0;
}