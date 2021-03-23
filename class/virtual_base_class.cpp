// In this program we make use of virtual base class concept
// in inheritance when we come across condition like
/*           
                                                    class A
                                        ________________|____________________
                                       |                                     |
                                    class B                               class C
                                       |_____________________________________|
                                                        |
                                                      class D
*/
// here  a memeber of class A get inheritated to class B,class C
// now as class D get inheritated from class B and class C
// then a member of class A may get two times in class D and thus to avoid we use virtual base class

#include<iostream>
using namespace std;

class A
{
    protected:
        int age;         // this age is the data member which get inheritated in both class B and C
    public:
         void get_age(int a)
         {
             age=a;
         }
         void  display_age(void)
         {
             cout<<"\nYour age is "<<age<<endl;
         }

};

class B : virtual public A           // thus to avoid age to get into class D two time we 
                                     // declare class as virtual base class for B and C classes
{    
     protected:
          int class_student;
     public:
           void get_class(int b)
           {
               class_student=b;
           }
           void  display_class()
           {
               cout<<"\nYour class is "<<class_student<<endl;
           }
    
};

class C : virtual public A
{
    protected:
         int roll_no;
    public:
         void get_roll_no(int c)
         {
             roll_no=c;
         }
         void display_roll_no()
         {
             cout<<"\nYour roll no is "<<roll_no<<endl;
         }
};

class D : public B, public C
{
        public:
             void print()
             {
                 display_age();
                 display_class();
                 display_roll_no();
             }
};

int main()
{   
    int a,b,c;

    cout<<"\nEnter your age,standard in which you are studying and your roll number "<<endl;
    cin>>a>>b>>c;
    D d1;
    d1.get_age(a);
    d1.get_class(b);
    d1.get_roll_no(c);
    d1.print();
    return 0;
}