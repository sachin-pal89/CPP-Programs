// we will create a destructor here and see its working
#include<iostream>
using namespace std;

class object
{  
    int a;
    static int i;
    public:
      void val_a();
      object(){  // a constuctor
          i++;
          cout<<"\nobj"<<i<<endl;
      }
      ~object(){  // a destructor
          cout<<"Destructor get call for obj"<<i<<endl;
          cout<<"\n";
          i--;
      }
};
int object::i=0;

void object::val_a()
      {
          a=20;
          cout<<a<<endl;
      }

int main()
{   
    object obj1; // here onj1 get intialise
    {   
        object obj2;  // here the obj2 get intialise
        
    }  // here obj2 get destructed by calling destructor
    
    obj1.val_a();

    return 0;
}  // after this point obj1 get destructed by calling destructor

