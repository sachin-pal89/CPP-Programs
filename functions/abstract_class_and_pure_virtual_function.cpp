// we will how we can make a pure virtual function within a abstract class
#include<iostream>
using namespace std;

class A                                 // this is abstract base class since it is not use to call any member or method of it
                                        // it is only use to have a pure virtual function and to inherited derived classes
{
       public:
         int s;
         A(int a): s(a)
         { };
         virtual void display()=0;      // this call pure virtual function
};

class B : public A
{
    int c;
    public:
         B(int a,int b) : A(a), c(b)    // here we have used concepts of constructor in derived class and listing in constructor
         { };
         void display()                           // we compulsorily redefine this function within a derive class if it is pure virtual
                                                  // function in base class
         {
             cout<<"\nClass B value "<<c<<endl;
         }
};

class C : public A
{
      int e;
      public:
         C(int a,int f):A(a),e(f)       // same concept here
         { };
         void display()
         {
             cout<<"\nClass C value "<<e<<endl;
         }
};


int main()
{
    A *poi[2];
    B obj_b(55,88);
    C obj_c(55,22);

    poi[0]= &obj_b;
    poi[0]->display();

    poi[1]= &obj_c;
    poi[1]->display();

    return 0;
}