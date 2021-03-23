// here we will use an array to make run multiple objects easliy
#include<iostream>
using namespace std;

class student
{
    int id;
    int roll_no;
    static int i;
   public:
     int grade;
     void result();
     void info();
};

int student::i=1;

void student::info()
{
    cout<<"enter student "<<i<<" id "<<endl;
    cin>>id;

    cout<<"enter student "<<i<<" roll number "<<endl;
    cin>>roll_no;

    result();
    i++;
}

void student::result()
{
    float marks;
    cout<<"enter the marks obtain by student"<<i<<" out of 100"<<endl;
    cin>>marks;
    
    cout<<"\nstudent has id "<<id<<endl;
    cout<<"\nstudent has roll_no "<<roll_no<<endl;
    float percent=((marks/100)*10);
    cout<<"\nthe cgpa obtain by student "<<i<<" is "<<percent<<"cgpa"<<endl;
}

int main()
{
    student result_of[10];// here we have created a array object result_of which are 10 objects which are called simultaneously by for loop
    for(int i=0;i<10;i++)
    {
        result_of[i].info();
        cout<<"\n";
    }
    return 0;
}