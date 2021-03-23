//We will Dynamically intialize the objects by using constructor
#include <iostream>
using namespace std;

class Value
{
    int principal, years;
    float rate_of_interest;
    float Money, total_interest;

public:
    //This is were we add a default connstructor which dynamically initialise the object
    Value(){}; 
    Value(int p, int y, float r);
    Value(int p, int y, int R);
    void Get_money();
    void interest_money();
};

Value::Value(int p, int y, float r)
{
    principal = p;
    years = y;
    rate_of_interest = r;
    Money = p;
    for (int i = 0; i < years; i++)
    {
        Money *= (1 + rate_of_interest);
    }
}

Value::Value(int p, int y, int R)
{
    principal = p;
    years = y;
    rate_of_interest = float(R) / 100;
    Money = p;
    Money *= (rate_of_interest);
    total_interest = Money * years;
}

void Value::Get_money()
{
    cout << "\nTotal amount after " << years
         << " is " << Money
         << " with rate of interest " << rate_of_interest << endl;
}

void Value::interest_money()
{
    cout << "\nMoney gained after " << years
         << " is " << total_interest << endl;
}
int main()
{   
    //Here we have are dynamically allocating value to an object and not dynamically intialising 
    //since it get intialize during compilation time but value is assigned at run time

    /* int p,y,R;
    float r;
    cout<<"\nEnter p and y "<<endl;            
    cin>>p>>y;                                   
    cout<<"\nEnter r in float "<<endl;
    cin>>r;
    cout<<"\nEnter R in int "<<endl;
    cin>>R;
    Value a(p,y,r),b(p,y,R); 
    */
   //----------------------------------------------------------------------------------------------------

    Value a, b; //Here the object get dynamically intialise
                //and default constructor Value(){} would be assigned to it

    int p, y;
    float r;
    cout << "\nEnter value of p and y " << endl;
    cin >> p >> y;
    cout << "\nEnter value of float r " << endl;
    cin >> r;
    a = Value(p, y, r); //Here we dynamically set value during run time

    int R;
    cout << "\nEnter value of int R " << endl;
    cin >> R;
    b = Value(p, y, R);

    a.Get_money();
    b.interest_money();

    return 0;
}