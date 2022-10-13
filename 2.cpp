/*
2. Define a class Time to represent a time with instance variables h,m and s to store
hour, minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time)
*/
#include<iostream>
using namespace std;

class Time
{
    private:
      int h,m,s;
    public:
      void setTime(int x,int y,int z)
      {
        h=x;
        m=y;
        s=z;
      }

      void normalize()
      {
        if(s>=60)
         {
           m=m+s/60;
           s=s%60;
         }
        if(m>=60)
         {
          h=h+m/60;
          m=m%60;
         }
      }

      void showTime()
      {
        cout<<"Hours: "<<h<<"  Minutes: "<<m<<"   Seconds: "<<s;
        cout<<endl;
      }
      Time add(Time T)
      {
        Time temp;
        temp.h=h+T.h;
        temp.m=m+T.m;
        temp.s=s+T.s;
        temp.normalize();
        return temp;
      }
};
int main()
{
    Time t1,t2,t3;
    t1.setTime(2,193,189);
    t2.setTime(3,96,111);
    t1.normalize();
    t2.normalize();
    t1.showTime();
    t2.showTime();
    t3=t1.add(t2);
    cout<<"Sum is: ";
    t3.showTime();
    return 0;
}
