// In this program we will see how we inherited a class from a already defined class
// and also how that inherited class use the member of the base class
#include <iostream>
using namespace std;

class college
{
    int region_code; // seen it's private member of college class which is the base class it cannot inherited
public:
    static int i;
    int college_code;
    
    void region(int d)
    {
        region_code = d;
        college_code = (region_code + i);
        i++;
    }
    
};

int college::i = 1;

class department : public college // here we have set visibility mode as public so that we can use the member of college class
{
    int depart_code;

public:
    void department_info(int x, int a)
    {   
        depart_code = a;
        region(x);
        cout << "\nCollege code is " << college_code << endl;
        cout << "\nDepartment code is " << depart_code << endl;
    }
};
int main()
{
    int x, y;
    cout << "\nEnter the value of regional code of college " << endl;
    cin >> x;

    department d1, d2;
    cout << "\nEnter the department code " << endl;
    cin >>y;

    d1.department_info(x, y);  
    d2.department_info(x, y);

    //since college_code is a public memeber of department as we have declared college class in  public mode
    cout << "\nCollege code of first college " << d1.college_code << endl;
    cout << "\nCollege code of second college " << d2.college_code << endl;
    return 0;
}