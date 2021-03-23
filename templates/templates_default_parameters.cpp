// here we will see how we can set default parameters for template class
#include<iostream>
#include<string>
using namespace std;

template <class T1=int,class T2=char>    // here we have by default set the type of class as int and char
class A
{
    public:
      T1 a;
      T2 b;
      A(T1 x,T2 y):a(x),b(y){}
      void display()
      {
          cout<<"\nFirst term is "<<a<<endl;
          cout<<"\nSecond term is "<<b<<endl;
      }
};

int main()
{   
    A<> obj(66,'y');    // see here if we not specify the type of class then we can use int and char as a type 
    obj.display();

    cout<<endl;

    A<float,int> obj2(33.2,44);        // here as we mention the type default value of type would not be taken
    obj2.display();

    A<float> obj3(3.2,'d');          // since we have mention only one type thus it would be assign to first class type i.e T1 and T2 
                                     // would get default type in this case it is char
    obj3.display();
    return 0;
}