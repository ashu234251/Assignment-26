/* Define a class student and write a program to enter student details using constructor
 and define member function to display all the details.
*/
#include<iostream>
using namespace std;

#include<string.h>
class Student
{
    private:
       long long int roll,mob_no;
       char name[30];
    public:
       void setStudent(long long int r,long long int m,char n[])
        {
            roll=r;
            mob_no=m;
            strcpy(name,n);
        }
       void displayStudent()
        {
            cout<<"Name= "<<name<<"   Roll Number- "<<roll<<"   Mobile Number- "<<mob_no;
            cout<<endl;
        }
       Student()
        {
            strcpy(name,"\0");
            roll=0;
            mob_no=0;
        }
};
int main()
{
    Student s1,s2,s3;
    s1.setStudent(1702713025,8433007250,"Ashish Varshney");
    s2.setStudent(1702713001,9719440301,"Abhay Jaiswal");
    s1.displayStudent();
    s2.displayStudent();
    s3.displayStudent();
    return 0;
}