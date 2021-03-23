// here we will overload template function and lets see it
#include <iostream>
using namespace std;

template <class T>
void fun(T a) // here we can see that we define Template type of var
{
    T x = a;
    cout << "\nValue of first fun() is " << x << endl;
}

void fun(int b) // here we define type as integer for var
{
    int y = b;
    cout << "\nValue of second fun() is " << y << endl;
}

int main()
{
    fun(9); // when this is call it will use the exact matching fun()

    fun<char>('v'); // here it will by default go with the template fun()
    return 0;
}