// In this program we will learn about class and objects
#include<iostream>
using namespace std;

class boys // this is a class boys actually by doing so we create a data type called boys
{
    private: // This are access modifiers and by default they are set as private
        int no_people;
        float avg_spend;
    public:  // This are public access modifiers and they can be call by any part of program
        void members(void) // here we define class member function inside a class
        {
            cin>>no_people;
        }
        void avg_per_person(void);
        void how_many(void);
};

void boys::avg_per_person()  //This his how we define a class member function outside a class
{   
    members();  // this is called nesting member function
    cout<<"Enter the average expenditure by group "<<endl;
    cin>>avg_spend;
    int per_person_spend = avg_spend/no_people;
    cout<<"The average expenditure by single person is "<<per_person_spend<<endl;
}

void boys::how_many()
{   
    cout<<"\nNumber of people in boys group is "<<no_people<<endl;
}

int main()
{
    boys get_info;  // here we create a object get_info of a class boys and this object can use all public member of boys
    cout<<"Enter the nos of people in boys group "<<endl;
    get_info.avg_per_person();
    get_info.how_many();
    return 0;
}