#include <iostream>
using namespace std;

template<class T, int size>
void print(T input[size])
{
    for (int i=0; i<size; i++)
    {
        cout << input[i];
    }
    cout << endl;
}

int main(){
    //Type cast
    int a = 1;
    double b = (double)a;
    char c = (char)a;
    cout << b << " " << c << endl;

    //const_cast
    int ary[5] = {1, 2, 3, 4, 5};
    print<int, 5>(ary);
    const int *p = ary;
    int *q = const_cast<int*>(p);
    *q = 6;
    print<int, 5>(ary);
    return 0;

    //static_cast and dynamic_cast see polymorphism.cpp

}