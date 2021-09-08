#include<iostream>
#include<string>
using namespace std;

class Vehicle {
    public:
       int year_of_release = 2021;
};

class Two_Wheeler : public Vehicle {
    public:
       string brand_name = "Bajaj V15";
};

class Four_Wheeler : public Vehicle {
    public:
       string brand_name = "MG Hector";
};

int main()
{
    Two_Wheeler t1;
    Four_Wheeler f1;

    cout<<"Two wheeler: "<<endl;
    cout<<"Name: "<<t1.brand_name<<endl;
    cout<<"Year of release: "<<t1.year_of_release<<endl;

    cout<<"\nFour wheeler: "<<endl;
    cout<<"Name: "<<f1.brand_name<<endl;
    cout<<"Year of release: "<<f1.year_of_release<<endl;
}