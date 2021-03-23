// In this program we will make use of copy constructor to use the values of other objects
#include <iostream>
using namespace std;

class force
{
    float mass, acc;

public:
    force()
    {
        mass = 100;
        acc = 9.8;
    }
    force(float a, float b);
    // If  copy constructor is not define than compiler would create it's own copy constructor
    force(force obj1, force obj2);  //This is a copy consturctor which make use of values of two objects
    void print_force();
};

force::force(float a, float b)
{
    mass = a;
    acc = b;
}

force::force(force obj1, force obj2)
{   
    cout<<"\nIts a copy constructor "<<endl;
    mass = ((obj1.mass + obj2.mass) / 2);
    acc = ((obj1.acc + obj2.acc) / 2);
}

void force::print_force()
{
    cout << "\n"
         << (mass * acc) << "N" << endl;
}

int main()
{
    float m, a;
    force f1, f2,f5,f3(f1,f2);  //Here f3(f1,f2) get initialise and thus copy constuctor get assign to it
                                //but it will consist of default constructor value as f1,f2 get initialise

    cout << "\nEnter the value of mass and acceleration for first force " << endl;
    cin >> m >> a;
    cout << "\nValue of first force is " << endl;
    f1=force(m,a);      //Dynamically allocating value at run time
    f1.print_force();   

    
    cout << "\nValue of second force is " << endl;
    f2 = force(40, 55.3);    //Here the data was alredy intialise and thus compiler get it at compile time
    f2.print_force();
    
    cout<<"\nValue of third force is "<<endl;
    f3.print_force();        //Here we will get the value according to default constructor value of f1,f2
 
    cout<<"\nValue of fourth force is "<<endl;
    force f4 = f2;    //This is only assigment of object f2 value to f4 
    f4.print_force();

    cout<<"\nValue of fifth force is "<<endl;
    f5=force(f1,f2);     //This will call copy constructor with objects f1,f2 which have the assigned value after intialization
    f5.print_force();   

    
    cout<<"\nValue of sixth force is "<<endl;  
    force f6(f3,f4);     //this will also call copy constructor with object f3,f4
    f6.print_force(); 

    return 0;
}