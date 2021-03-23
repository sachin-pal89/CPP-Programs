// In this we will make use of constructor in the class
#include <iostream>
using namespace std;

class sum
{
    int a, b;

public:
    sum(void); // here the constructor is default constructor since no argument is passed
               // Here constuctor will have same name as that of class
               // constuctor don't have return type
};

sum::sum()  // constuctor declaration
{
    a = 10;
    b = 12;
    cout << "\nSum of two number would be " << a + b << endl;
}

int main()
{
    sum s1, s2; // here constuctor will get automatically  invoked and give the desired output 
                // also here due to two object constuctor get invoked two times
    return 0;
}