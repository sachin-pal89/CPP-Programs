// here we will pass object as the argument of a function which is called by another function
#include<iostream>
using namespace std;

class volume
{
    float length,breadth,height,side,radius,height_of;
    public:
       float volume_cuboid(float,float,float);
       float volume_cube(float);
       float volume_cylinder(float,float);
       float average_volume(volume,volume,volume);
};

float volume::volume_cuboid(float length,float breadth,float height)
{
    return length*breadth*height;
}

float volume::volume_cube(float side)
{
    return side*side*side;
}

float volume::volume_cylinder(float radius,float height_of)
{
    return (3.142*radius*height_of);
}

//HERE WE PASS OBJECTS AS ARGUMENT
float volume::average_volume(volume obj1,volume obj2,volume obj3)// HERE WE HAVE CREATED A FUNCTION WHICH ARE HAVING AN OBJECTS AS A
                                                                 //ARGUMENT AND THUS USE ITS MEMBER IN THIS FUNCTION
{   
    float avg;
    // HERE WE WRITE OBJECTS WITH THERE MEMEBER CALLED BY (.) AFTER THE OBJECT
    // HERE WE HAVE CALLED THE FUNCRIONS THATS WHY WE DEFINE ARGUMENT BUT WITH NORMAL MEMBER WE ONLY NAME IT 
    avg=( obj1.volume_cuboid(length,breadth,height) +obj2.volume_cube(side)+obj3.volume_cylinder(radius,height_of)/3);
    return avg ;
}

int main()
{   float a,b,c,d,e,f;
    volume vol1,vol2,vol3,vol4;
    
    cout<<"\nEnter the length,breadth and height of cuboid"<<endl;
    cin>>a>>b>>c;
    cout<<"\nvolume of cuboid is "<<vol1.volume_cuboid(a,b,c)<<endl;

    cout<<"\nEnter the side of cube"<<endl;
    cin>>d;
    cout<<"\nvolume of cube is "<<vol2.volume_cube(d)<<endl;

    cout<<"\nEnter the radius and height of cylinder"<<endl;
    cin>>e>>f;
    cout<<"\nvolume of cylinder is "<< vol3.volume_cylinder(e,f)<<endl;

    cout<<"\naverage volume is "<<vol4.average_volume(vol1,vol2,vol3)<<endl;
}
