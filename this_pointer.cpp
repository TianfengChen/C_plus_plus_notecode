#include <iostream>
using namespace std;

class Complex
{
    public:
        double real, imag;
        Complex(double r, double i):real(r), imag(i){}
        void Print() {cout << real << "+" << imag << "i" << endl;}
        Complex AddOne()
        {
            this->real++;
            this->Print();
            return *this;
        }
        void SubOne()
        {
            real--;
            Print();
        }
};

int main()
{
    Complex c1(1, 1);
    c1.AddOne();
    cout << "c1.real = " << c1.real << endl;
    c1.SubOne();
    cout << "c1.real = " << c1.real << endl;
    return 0;
}