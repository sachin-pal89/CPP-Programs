// here we will see how nesting of member function is done
#include<iostream>
using namespace std;

class output
{
    int num;
    int multiple;
   public:
    int cube;
    void cube_no(void);
    void multiply(void);
};

void output::cube_no()
{
   cout<<"Enter the number whose cube is to be found "<<endl;
   cin>>num;
   
   cout<<"\nThe cube of "<<num<<" is "<<(num*num*num)<<endl;
}

void output::multiply()
{   
    cube_no();  // here we have done nesting of function,
                // we created a function and defined it and then call it inside a member function of its own class

    cout<<"\nEnter the number whose multiple is to be found "<<endl;
    cin>>num;

    cout<<"\nEnter the number which is to be multiplied which given number "<<endl;
    cin>>multiple;

    cout<<"\n"<<num<<"*"<<multiple<<" = "<<(num*multiple)<<endl;
}

int main()
{
    output answer;
    answer.multiply();
    return 0;
}