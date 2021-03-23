// here we will see how we can use derived class function by base class pointer which strore address of derived class object
#include<iostream>
using namespace std;

class Midbencher;              // forward decalaration
class Lastbencher;

class Topper
{
    protected:
        int marksT;
        char gradeT;
    public:
        Topper(int,char);
        virtual void display()
        {
            cout<<"\nHere's come the topper "<<endl;
            //cout<<"\nMidbencher marks is "<<objM.marksM<<" and grade is "<<objM.gradeM<<endl;
            //cout<<"\nLastbencher marks is "<<objL.marksL<<" and grade is "<<objL.gradeL<<endl;
        }
};

Topper::Topper(int a,char b)
{
    marksT=a;
    gradeT=b;
}

class Midbencher : public Topper
{    
    public:
     int marksM;
     char gradeM;
         Midbencher(int,char,int,char);
         void display()
         {
             cout<<"\nHere comes Midbencher "<<endl;
             cout<<"His score is "<<marksM<<endl;
             cout<<"His grade is "<<gradeM<<endl;
             cout<<"Has "<<(marksT-marksM)<<" marks less then Topper "<<endl;
         }
};

Midbencher::Midbencher(int a,char b,int c,char d):Topper(a,b)   // constructor of derived class
{
     marksM=c;
     gradeM=d;
}

class Lastbencher:public Topper
{    
    public:
     int marksL;
     char gradeL;
         Lastbencher(int,char,int,char);
         void display()
         {
             cout<<"\nHere comes Lastbencher "<<endl;
             cout<<"His score is "<<marksL<<endl;
             cout<<"His grade is "<<gradeL<<endl;
             cout<<"Has "<<(marksT-marksL)<<" marks less then Topper "<<endl;
         }
};

Lastbencher::Lastbencher(int a,char b,int e,char f):Topper(a,b)
{
    marksL=e;
    gradeL=f;
}

int main()
{    
    int a,c,e;
    char b,d,f;

    cout<<"\nEnter Topper marks and grade"<<endl;
    cin>>a>>b;

    cout<<"\nEnter Midbencher marks and grade "<<endl;
    cin>>c>>d;

    cout<<"\nEnetr Lastbencher marks and grade "<<endl;
    cin>>e>>f;

    Midbencher obj_m(a,b,c,d);
    Lastbencher obj_l(a,b,e,f);
    Topper obj_t(a,b);

    Topper *p[2];
    p[0]= &obj_m;  // first pointer is assigned the address of obj_m which is an object of midbencher class i.e. derived class

    p[1]= &obj_l;  // similarly here second pointer is assigned the address of obj_l of lastbencher class

    p[0]->display();  // here it will call display() function midbencher class since in Topper class i.e. base class 
                      // display() function is been set as virtual

    p[1]->display();  // similarly this will call display() function of lastbencher class instead of Topper class
    return 0;
}