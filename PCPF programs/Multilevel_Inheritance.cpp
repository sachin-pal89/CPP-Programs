#include<iostream>
#include<string>
using namespace std;

class Country{
    public:
        string c = "INDIA";
};

class State : public Country {
    public:
       string s = "MAHARASHTRA";
};

class District : public State {
    public:
       string d = "THANE";
};

class City : public District {
    public:
       string ci = "NAVI MUMBAI";
};

int main()
{
    City c1;
    cout<<"\nFull Address is: "<<c1.ci<<", "<<c1.d<<", "<<c1.s<<", "<<c1.c<<endl;
    return 0;
}