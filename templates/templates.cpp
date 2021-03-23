// here we will created a template
#include<iostream>
using namespace std;

template < class T >    // this is how we create a class from template
class A
{
    int a;
    public:
        A<T>(T n):a(n){};
        T multi(void )
        {
            return a*a;
        }
};

int main()
{   
    int n;
    cout<<"\nHow many number you want to square"<<endl;
    cin>>n;

    A<int> *p[n];                       // whenever a class in intializes we have to mention a type of class i.e. class<type>
    for(int i=0;i<n;i++)
    {   
        int x;
        cout<<"\nEnter the term"<<i+1<<endl;
        cin>>x;
        p[i]= new A<int>(x);
    }

    for(int i=0;i<n;i++)
    {   
        cout<<endl;
        cout<<"Square of term"<<i+1<<" is "<<endl;
        cout<<p[i]->multi()<<endl;
    }
}