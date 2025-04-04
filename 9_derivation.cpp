#include <iostream>
using namespace std;

class FlyBug_Mater;

class Bug
{
    private:
        int legs;
    public:
        int color;
        Bug(int legs, int color):legs(legs), color(color){}
        friend void printleg(Bug &bug)
        {
            cout << "legs: " << bug.legs << endl;// access base class private member
        }
    
};

class FlyBug: public Bug
{
    private:
        int wings;
    public:
        FlyBug(int legs, int color, int wings):Bug(legs, color), wings(wings){}
        void print()
        {
            //cout << "legs: " << legs << endl; //error: 'legs' is a private member of 'Bug', it can be successed but not accessable
            cout << "color: " << color << endl;
            cout << "wings: " << wings << endl;
        }
        FlyBug_Master *pMaster;
};

class FlyBug_Master
{
    public:
    int age;
    FlyBug_Master(int a):age(a){};
    FlyBug *pFlyBug[10];// array of pointer
};

int main()
{
    FlyBug flybug(6, 1, 2);
    flybug.print();
    printleg(flybug);
    FlyBug_Master master(8);
    master.pFlyBug[0] = &flybug;
    flybug.pMaster = &master;
    cout << master.pFlyBug[0]->color << endl;
    cout << flybug.pMaster << endl;
    return 0;
}