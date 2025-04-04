#include <iostream>
using namespace std;
//Macro

//Object-like Macro
#define PI 3.141592

//Macro Function
#define MAX(a, b) ((a > b) ? a : b)
//return a byte
#define MEM_B(x) (*((byte*)(x)))
//return a word
#define MEM_W(x) (*((word*)(x)))

//Conditional Compilation
#ifndef DEBUG
#define DEBUG
#endif
#ifdef DEBUG
#define PRINT cout << "DEBUG" << endl;
#else
#define PRINT cout << "RELEASE" << endl;
#endif

//Token connecting Operator
#define Connect(a, b) a##b

//return Char
#define ToChar(a) #a[0]

//return String
#define ToString(a) #a

//avoid include header file multiple times
#ifndef CIRCLE_H
#define CIRCLE_H
//header file
class Circle
{
private:
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }
    double getArea()
    {
        return PI * radius * radius;
    }
};
#endif


int main()
{
    cout<<PI<<endl;
    int a = 0b1001000001100001;
    int b = (int) MEM_B((&a));
    int c = (int) MEM_B((&a)+1);
    cout<<b<<endl;
    cout<<c<<endl;
    
    return 0;
}
