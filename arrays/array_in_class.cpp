// here we will learn about how to use array in class
#include<iostream>
using namespace std;

class table
{
    int multiple[20];// here we use array as a class member/variable
    int square[10];
   public:
    int num;
    void multi(void);
    void square_of(void);
    void display(void);
};

void table::square_of()
{    
     cout<<"The square of numbers from 1 to 10 is "<<endl;
     for(int i=0;i<10;i++)
     {
        cout<<(i+1)<<"*"<<(i+1)<<" "<<(square[i]=(i+1)*(i+1))<<endl;
     }
}

void table::multi()
{    int a;
     cout<<"Enter the number whose multiple is to be found"<<endl;
     cin>>a;

     for(int j=0;j<20;j++)
     {
         multiple[j]=(a*(j+1));
     }
}

void table::display()
{  
     
     cout<<"The multiple of number upto 20th time is"<<endl;
     for(int n=0;n<20;n++)
     {
          cout<<multiple[n]<<endl;
     }
     square_of();
}

int main()
{
     table give;
     give.multi();
     give.display();
     return 0;
}



