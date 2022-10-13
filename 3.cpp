// 3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.

#include<iostream>
using namespace std;
class Cube
{
    private:
       int side,v;
    public:
       void setSide(int x)
        {
            side=x;
        }
       void Volume()
        {
            v=side*side*side;
        }
       int getVolume()
        {
            return v;
        }
       void showVolume()
        {
            cout<<"Volume of Cube with size "<<side<<" is: "<<v;
            cout<<endl;
        }
       Cube()
        { 
           side=0;
           v=0;
        }
};
int main()
{
    Cube c1,c2,c3;
    c1.setSide(5);
    c2.setSide(6);
    c1.Volume();
    c2.Volume();
    c1.showVolume();
    c2.showVolume();
    c3.showVolume();
    cout<<endl;
    return 0;
}