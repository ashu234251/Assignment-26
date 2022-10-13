// 4. Define a class Counter and Write a program to Show Counter using Constructor.

#include<iostream>
using namespace std;
class Counter
{
  private:
    static int count;
  public:
    Counter()
     {
        count++;
        cout<<"Value of Count has become: "<<count;
        cout<<endl;
     }
     
};

int Counter :: count=0;
int main()
{
    Counter c1,c2,c3;
    return 0;
}