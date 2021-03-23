// in inheritance we come across some type of misfunctioning and it is called
// ambiquity in inheritance
#include <iostream>
using namespace std;

class Friend1
{
public:
    void hairstyle(); // this function are present in both base classes
    void eyecolour();
    void height();
};

void Friend1::hairstyle()
{
    cout << "\nFriend1 has black hairs " << endl;
}
void Friend1::eyecolour()
{
    cout << "\nFriend1 has blue eyes " << endl;
}

void Friend1::height()
{
    cout << "\nFriend1 has 6foot 4inch height " << endl;
}

class Friend2
{
public:
    void hairstyle();
    void eyecolour();
    void height();
};

void Friend2::hairstyle()
{
    cout << "\nFriend2 has brown hair " << endl;
}

void Friend2::eyecolour()
{
    cout << "\nFriend2 has black eye " << endl;
}

void Friend2::height()
{
    cout << "\nFriend2 has 6foot 2inch height " << endl;
}

class Friend_combo : public Friend1, public Friend2
{
public:
    void hairstyle()
    {
        Friend1::hairstyle(); // here we specifically define that if hairstyle is asked
                              // call hairstyle() of Friend1 class
    }
    void eyecolour()
    {
        Friend2::eyecolour(); // here we specifically define that if eyecolour is asked
                              // call eyecolour() of Friend2 class
    }

    void height()
    {
        cout << "\nTotal height is 12foot 6inch " << endl;  
    }
};

int main()
{
    Friend_combo fc;
    fc.hairstyle(); // thus object of friend_combo will call hairstyle of friend1
    fc.eyecolour(); // thus object of friend_combo will call eyecolour of friend2
    fc.height();  // here it will call its own function and not the base class ones
    return 0;
}

// in this program ambiqity arises due to function with same name
// thus we basically specifiy which func of base class is to be called by derived class object

// if function is define in derived class then it would overwrite base class function
// and thus call derived class function automatically