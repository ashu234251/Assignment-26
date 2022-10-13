// 10. Define a class StaticCount and create a static variable. Increment this variable in a function and call this 3 times and display the result.

#include<iostream>
using namespace std;
class StaticCount
{
    private:
       static int i;
    public:
       void test()
       {
         i++;
       }
       void displayResult()
       {
         cout<<"Hello Everyone."<<endl;
         cout<<"Value of i has become: "<<i<<endl;;
       }
};

int StaticCount :: i=0;

int main()
{
  StaticCount s1,s2;
  s1.test();
  s1.test();
  s1.test();
  s1.displayResult();
  s2.displayResult();
  return 0;
}