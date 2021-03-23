//Here we will make a friend function which can be friend of multiple classes and thus can access their data
// without being a part of any of those classes
#include <iostream>
using namespace std;

// Forward declaration
class girl;

class boy
{
    int age;
    friend void first_adult(boy, girl);  // here we have created the friend function which use both classes data and get the work done

public:
    void get_age(int b)
    {
        age = b;
    }
    void adult_age()
    {
        if ((18 - age) > 0)
        {
            cout << "\nThe boy will become adult after " << (18 - age) << " year " << endl;
        }
        else
        {
            cout << "\nHe is not a child anymore " << endl;
        }
    }
};

class girl
{
    int age1;
    friend void first_adult(boy, girl);

public:
    void get_age(int g)
    {
        age1 = g;
    }
    void adult_age()
    {
        if ((18 - age1) > 0)
        {
            cout << "\nTHe girl will become adult after " << (18 - age1) << " year " << endl;
        }
        else
        {
            cout << "\nShe is not a child anymore " << endl;
        }
    }
};

void first_adult(boy b1, girl g1)
{
    int adult;
    adult = b1.age - g1.age1;

    if ((g1.age1 <= 18) && (b1.age <= 18))
    {
        if (adult > 0)
        {
            cout << "\nBoys will become adult while the Girl need to wait for " << adult << " years  more " << endl;
        }
        else if (adult < 0)
        {
            cout << "\nGirl will become adult while the Boy need to wait for " << g1.age1 - b1.age << " years  more " << endl;
        }
        else
        {
            cout << "\nBoth will be adult together " << endl;
        }
    }
    else if ((b1.age < 18) && (g1.age1 >= 18))
    {
        cout << "\nDont compare yourself boy to this lady " << endl;
    }
    else if ((b1.age >= 18) && (g1.age1 < 18))
    {
        cout << "\nGirl enjoy you are younger than the gentleman " << endl;
    }
    else
    {
        cout << "\nGoto to your childhood first " << endl;
    }
}

int main()
{
    int boys, girls;
    cout << "\nEnter the age of boy " << endl;
    cin >> boys;

    boy b1;
    b1.get_age(boys);
    b1.adult_age();

    cout << "\nEnter the age of girl " << endl;
    cin >> girls;

    girl g1;
    g1.get_age(girls);
    g1.adult_age();

    first_adult(b1, g1);
    return 0;
}