// Here we will  talk about defining function of a class as a friend function of another class
// Also we will see how we can define a whole class as friend of another class
#include <iostream>
using namespace std;

//Forward declaration
class student;

class marksdifference
{
    float total;

public:
    int marks_gap(student, student);
    void greater_marks(student, student);
    // void great(void); This can't access the private data of student since its not a friend function of student class
};

class total
{
    int total;

public:
    void get_total(student, student);
    void print_total(void);
};

class student
{
    int roll_no;
    float marks;
    static int i;

public:
    friend class total;                                           // Here we declare total class as a friend of student class
    friend int marksdifference::marks_gap(student, student);      // Here we have only made two memeber function of class marksdifference
    friend void marksdifference::greater_marks(student, student); // as a friend of class student

    void get_roll_no()
    {
        cout << "\nEnter the roll_no of student" << i << endl;
        cin >> roll_no;
    }
    void get_marks()
    {
        cout << "\nEnter marks of student" << i << endl;
        cin >> marks;
        i++;
    }
};

int student::i = 1;

int marksdifference::marks_gap(student obj1, student obj2)
{
    int differ;
    if (obj1.marks >= obj2.marks)
    {
        differ = (obj1.marks - obj2.marks);
    }
    else
    {
        differ = (obj2.marks - obj1.marks);
    }
    return differ;
}

void marksdifference::greater_marks(student obj1, student obj2)
{
    int i = 1;
    if ((obj1.marks - obj2.marks) > 0)
    {
        cout << "\nStudent" << i << "'s marks is greater than Student" << i + 1 << endl;
    }
    else if ((obj1.marks - obj2.marks) < 0)
    {
        cout << "\nStudent" << i + 1 << "'s marks is greater than Student" << i << endl;
    }
    else
    {
        cout << "\nStudent" << i << "'s marks and Student" << i + 1 << "'s marks are equal" << endl;
    }
    i = i + 1;
}

void total::get_total(student obj1, student obj2)
{
    total = obj1.marks + obj2.marks;
}

void total::print_total()
{
    cout << "\nTotal marks score by both student is " << total << endl;
}
int main()
{
    student s1, s2;
    s1.get_roll_no();
    s1.get_marks();

    s2.get_roll_no();
    s2.get_marks();

    marksdifference m1, m2;
    int x = m1.marks_gap(s1, s2);
    cout << "\nThe difference in marks of student is " << x << endl;
    m2.greater_marks(s1, s2);

    total t1;
    t1.get_total(s1, s2);
    t1.print_total();
    return 0;
}