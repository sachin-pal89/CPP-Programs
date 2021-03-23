// here we will learn how can we assign value to class data member from a argument of data function of same name
// this is done by using " this " pointer 
// we can also return the pointer so as to use it further

#include<iostream>
using namespace std;

class Boy
{
    int age;
    public:
         void Setage(int);
         void Displayage(void);
};

void Boy::Setage(int age)
{
    this->age=age;   // here we make use of " this " pointer to assign data member 'age' the value of argument 'age'
                     // since we have 'this' which is pointer we can also get it's value i.e a object when we return 'this'
}

void Boy::Displayage()
{
    cout<<"\nYour age is "<<age<<" years "<<endl;
}

class Girl
{
    int std;
    public:
       Girl & Setstd(int std)        // here we use reference of class so as to get an pointer in written
       {
           this->std=std;
           return *this;          // this statement would return the value stored by pointer
                                  // ans as we known pointer store the objects and thus we will be getting an object
       }
       void Givestd(void)
       {
           cout<<"\n Girl you study in "<<std<<" standard "<<endl;
       }
};

int main()
{   
    int a,b;
    cout<<"\nEnter boy's age "<<endl;
    cin>>a;
    cout<<"\nEnter standard in which girl study "<<endl;
    cin>>b;

    Boy b1;
    b1.Setage(a);
    b1.Displayage();

    Girl g1;
    g1.Setstd(b).Givestd();          // since Setstd() function return us an object we can use this object to call another function
    return 0;
}