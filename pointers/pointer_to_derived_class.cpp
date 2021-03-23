// here we will how to deal with pointer to derived class
#include<iostream>
using namespace std;

class A
{
    public:
       int a;
       void display(int q)
       {
           a=q;
           cout<<"\nBase class function value "<<a<<endl;
       }
};

class B : public A
{
    public:
        int b;
        void display(int w)
        {
            b=w;
            cout<<"\nDerived class function value "<<b<<endl;
        }
};

int main()
{
    int s;
    cout<<"\nEnter "<<endl;
    cin>>s;

    A *p;
    A obj_a;
    B obj_b;
    p = &obj_b;       // here we have assign the object of derived class to pointer of base class
    p->display(s);   // since pointer is of base class it can only access public member of base class and not derived class one
                     // also it show the output of base class function here

    B *q;
    B x;
    q = &x;            // here we have assign the object of derived class to pointer of derived class
    q->display(s);    // here it will show the output of derived class function since pointer "q" is of derived class type

   /*
    here we see that we can't assign object of base class to a pointer of derived class
    B *w;
    A obj_a2;
    w = &obj_a2;       
    w->display(s);
    */
    return 0;
}