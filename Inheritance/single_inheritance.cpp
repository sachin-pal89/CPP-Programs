// here we make use of single inheritance its flow is
//                         class A
//                            |
//                            |
//                            |
//                         class B
#include <iostream>
using namespace std;

class Boss // This is the base class
{
    float Deal; // This is the private memeber of base class thus can't be inherited
public:
    float no_investor, no_branches;
    float Client(float a);
    float investor(float b); // This are public memeber 0f base class and thus can be inherited
    float branches(float c);
};

float Boss ::Client(float a)
{
    Deal = a;
    return Deal;
}

float Boss::investor(float b)
{
    no_investor = b;
    return no_investor;
}

float Boss::branches(float c)
{
    no_branches = c;
    return no_branches;
}

class Employee : public Boss // This is the Employee class were visibility of Boss class is public
{
    int no_employee;

public:
    int work; // thus all public memeberr of base class can be use as public member of Employee class
    void get_employee_id(int x);
    void assigned_work(int a);
    void print();
};

void Employee::get_employee_id(int x)
{
    no_employee = x;
}

void Employee::assigned_work(int a)
{
    // we can't use Deal directly since it is not inheritated
    // thus we use Client() to access it since Client() is public memeber
    work = (Client(a) / 4) + (no_investor / 2) + (no_branches = 2);
}

void Employee ::print()
{
    cout << "\nEmployee number " << no_employee << "s has " << work << " work to do " << endl;
}
int main()
{
    float a, b, c, d;
    int n;

    cout << "\nHow many Bosses we have here for assigning work " << endl;
    cin >> n;

    for (int i = 1; i < n + 1; i++)
    {
        cout << "\nEnter the no of Clients of Boss" << i << endl;
        cin >> a;

        cout << "\nEnter the no of investor of Boss" << i << endl;
        cin >> b;

        cout << "\nEnter the no of branches of Boss" << i << endl;
        cin >> c;

        cout << "\nEnter Employee number of Employee to whom work is to be assigned " << endl;
        cin >> d;

        Employee e1;

        // Thus we can call all public member of Boss and Employee by object of Employee class only
        e1.Client(a);
        e1.investor(b);
        e1.branches(c);
        e1.get_employee_id(d);
        e1.assigned_work(a);
        e1.print();
    }
    return 0;
} // This the case of single inheritance
  // here we have created only one derived class i.e. Employee
  // from base class i.e. Boss