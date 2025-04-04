#include <iostream>
using namespace std;

//internal constructor
class CTyre
{
    private:
        double radius;
        double width;
        double *p1;
        double *p2;
    public:
        CTyre(const CTyre& obj);//external constructor
        CTyre(double r, double w):radius(r), width(w)
        { //internal constructor
            p1 = new double[10];
            p2 = new double;
        }
        CTyre(int r, int w):radius(r), width(w){
            p1 = new double[10];
            p2 = new double;
        }//overload
        ~CTyre();
        double getVolume() {return 3.1415926 * radius * radius * width;}
};

//external constructor and duplicate constructor
CTyre::CTyre(const CTyre& obj)
{
    radius = obj.radius;
    width = obj.width;
    p1 = new double[10];
    p2 = new double;
}

CTyre::~CTyre()
{
    delete [] p1;
    delete p2;
    cout << "The destructor of CTyre is called." << endl;
}

int main()
{
    CTyre tyre1(17, 225);
    cout << "The volume of the tyre1 is: " << tyre1.getVolume() << endl;
    CTyre tyre2(tyre1);
    cout << "The volume of the tyre2 is: " << tyre2.getVolume() << endl;
    CTyre tyre3 = tyre1;
    cout << "The volume of the tyre3 is: " << tyre3.getVolume() << endl;
    CTyre tyre4 = CTyre(17.1, 225.1);
    cout << "The volume of the tyre4 is: " << tyre4.getVolume() << endl;
    
    return 0;
}