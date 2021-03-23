// We will learn about static member(variable) and static method(function)
#include <iostream>
using namespace std;

class food
{
    float plates;
    static float quantity;

public:
    float per_dish;
    void no_plates(void)
    {
        cin >> plates;
    }
    void per_plate(void);
    void amount(void);
};

float food::quantity = 100;

void food::per_plate()
{
    cout << "Enter the no of plate of dishes " << endl;
    no_plates();

    per_dish = (quantity / plates);
    cout << "\nEach Sweet per plate is " << per_dish << endl;
}

void food::amount()
{
    per_dish = (quantity / plates) * 30;
    cout << "\nThe cost of sweet per plate is " << per_dish << endl;

    cout << "\nThe total cost of all dish is " << (plates * per_dish) << endl;
}

int main()
{
    food gulab_jamun;
    gulab_jamun.per_plate();
    gulab_jamun.amount();
    return 0;
}