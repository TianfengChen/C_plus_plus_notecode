#include <iostream>
using namespace std;

void printObj(const int &a)//avoid change the value of a
{
    cout << "a = " << a << endl;
}

int main()
{
    //const reference
    int a = 1;
    const int &b = a;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    a = 2;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    //b = 3; //error: assignment of read-only reference ‘b’

    //const reference to const
    int n,m;
    const int &s = n;
    // s = 1; //error: assignment of read-only reference ‘s’

    //const pointer
    const int *p = &n;
    // *p = 1; //error: assignment of read-only location ‘* p’
    n = 1;
    cout << "n = " << n << endl;
    cout << "*p = " << *p << endl;
    p = &m;
    m = 2;
    cout << "n = " << n << endl;
    cout << "m = " << m << endl;
    cout << "*p = " << *p << endl;

    //pointer to const
    const double pi = 3.14;
    const double *q = &pi;
    // *q = 3.1415; //error: assignment of read-only location ‘* q’
    //double *q_ = &pi; //error: invalid conversion from ‘const double*’ to ‘double*’

    //const pointer to const
    const double *const r = &pi;
    // *r = 3.1415; //error: assignment of read-only location ‘* r’
    // r = &n; //error: assignment of read-only variable ‘r’

    printObj(a);
}