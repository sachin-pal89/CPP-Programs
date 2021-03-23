// Here we will perform constructor overloading concepts and also pass default arguments to the consturctors
#include <iostream>
using namespace std;

class Sachin
{
    float marks;
    int roll_no;
    float percent;
    int go;

public:
    Sachin(float a, float b = 100.00) // here we have created a constructor with default arguments
    {
        marks = a;
        percent = (marks / b) * 100;
    }
    Sachin()  // here we overloaded the constructor Sachin
    {

        roll_no = 37;
        
    }
    void Print();
    void Roll_no();
};

void Sachin::Roll_no()
{
    cout << "\nRoll no is " << roll_no << endl;
}

void Sachin::Print()
{

    cout << "\nThe percentage obtain is " << percent << "%" << endl;
}

int main()
{
    Sachin s1(34,56), s2(99), s3;

    s3.Roll_no();
    s1.Print();
    s2.Print();

    return 0;
}