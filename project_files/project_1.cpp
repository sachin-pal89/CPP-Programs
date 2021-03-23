// In this project we will create a function which make use of object of calss
// and thus give us the distance between two pionts
#include <iostream>
#include <cmath> // This header file is use when we use mathematical function
using namespace std;

class point
{
    float x, y;
    static int i;

public:
    friend void distance_point(point, point);
    point(float, float);
    void print_point();
};

point::point(float a, float b)
{
    x = a;
    y = b;
}

int point::i = 1;

void point::print_point()
{
    cout << "\npoint" << i << " is (" << x << "," << y << ")" << endl;
    i++;
}

void distance_point(point p1, point p2)
{
    double square, distance;
    // as for pow(number, nth power)
    // e.g pow(2,3)==8
    square = pow((p2.x - p1.x), 2.0) + pow((p2.y - p1.y), 2.0);

    // as for sqrt(number)
    // e.g sqrt(16)==4
    distance = sqrt(square);

    cout << "\nThus the distance between point (" << p1.x << "," << p1.y << ") and (" << p2.x << "," << p2.y << ") is " << distance << endl;
}

int main()
{
    float a, b, c, d;

    cout << "\nEnter coordinate of first point " << endl;
    cin >> a >> b;
    cout << "\nEnter coordinate of second point " << endl;
    cin >> c >> d;
    point po1(a, b), po2(c, d);

    po1.print_point();
    po2.print_point();

    distance_point(po1, po2);
    return 0;
}