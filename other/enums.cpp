//We will learn about enums
//enums is a user definied data type
#include <iostream>
using namespace std;

int main()
{
    enum banks
    {
        baroda,
        indian,
        sbi,
        citi
    };
    banks b1, b2, b3, b4;
    b1 = baroda;
    b2 = indian;
    b3 = sbi;
    b4 = citi;
    cout << b1 << "\t" << b2 << "\t" << b3 << "\t" << b4 << endl;
    return 0;
}