// In this program we will perform multiple inheritance with class
// It can be demonstrated as
//  
/*                     class A            class B          class C  
                          |                  |                |
                          |                  |                |
                          -------------------------------------
                                         |
                                         |
                                        class D
*/
#include<iostream>
using namespace std;
class Student1            // first base class
{
    protected:
         int roll_no;
         float math,physics,chem;
    public:
          void set_roll_no(int a);
          void set_marks(float m,float n,float o);     
};

void Student1::set_roll_no(int a)
{
    roll_no=a;
}

void Student1::set_marks(float m,float n,float o)
{
    math=m;
    physics=n;
    chem=o;
}

class Student2             // second base class
{
    protected:
        int roll_no2;
        float math2,physics2,chem2;
    public:
        void set_roll_no2(int q);
        void set_marks2(float w,float e,float r);
};

void Student2::set_roll_no2(int q)
{
    roll_no2=q;
}

void Student2::set_marks2(float w,float e,float r)
{
    math2=w;
    physics2=e;
    chem2=r;
}

class StudentAVG : public Student1, public Student2            // derived class of base class Student1 and Student2
{
    public:
       float avg;
       void print(void);
};

void StudentAVG:: print()
{
    float avg_math,avg_phy,avg_chem;
    
    avg_math=(math+math2)/2;
    avg_phy=(physics+physics2)/2;
    avg_chem=(chem+chem2)/2;

    avg=(avg_math+avg_phy+avg_chem)/3;

    cout<<"\nRoll no os student 1 is "<<roll_no<<endl;
    cout<<"\nand that of student 2 is "<<roll_no2<<endl;
    cout<<"\nAvgerage marks of both student in physics is "<<avg_phy<<endl;
    cout<<"\nAvgerage marks of both student in mathematics is "<<avg_math<<endl;
    cout<<"\nAvgerage marks of both student in chemistry is "<<avg_chem<<endl;

    cout<<"\nAvgerage marks of both student i total is "<<avg<<endl;
    
}
int main()
{
    StudentAVG savg1;
    savg1.set_roll_no(56);
    savg1.set_marks(99,90,89);
    savg1.set_roll_no2(55);
    savg1.set_marks2(90,99,92);
    savg1.print();
    return 0;
}