//This program would tell us about recursive functions and also about function overloading
#include <iostream>
using namespace std;

long int factorial(int);
float area(float, float);
float area(float);
float area(int, float);

int main()
{
    float a, b, h, l;
    int n, ba;

    cout << "Enter the number whose factorial is to be found " << endl;
    cin >> n;

    cout << "Enter the length and breadth of a rectangle " << endl;
    cin >> l >> b;

    cout << "\nEnter the length of the side of square " << endl;
    cin >> a;

    cout << "\nEnter the base and height of triangle " << endl;
    cin >> ba >> h;

    cout << "\nThe factorial of " << n << " is " << factorial(n) << endl;
    cout << "\nThe area of rectangle is " << area(l, b) << endl;
    cout << "\nThe area of square is " << area(a) << endl;
    cout << "\nThe area of triangle is " << area(ba, h) << endl;
    return 0;
}

long int factorial(int x) // a recursive function
{
    if (x < 2) // a recursive function always has a conditional statement so that we do not get into a loop
    {
        return 1;
    }
    return x * factorial(x - 1); //as we have a function under a function it will continue to perform the function unless and until
                                 // the condition get false
}

float area(float m, float n) // this a function area
{
    return m * n;
}

float area(float o) // this also function area but here there is only one argument
{
    return (o * o);
}

float area(int q, float e) // this is also a area function but here the data type of argumentd varie
{
    return (0.5) * q * e;
}