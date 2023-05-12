#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int& get_element(int arr[], int index) {
    return arr[index];
}

int main()
{
    //example
    int a = 1;
    int &b = a;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    b = 2;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    //diference from address & and reference &
    int c[3] = {1, 2, 3};
    int *p;
    p = &c[2];
    cout << "c[2] = " << c[2] << endl;
    cout << "*p = " << *p << endl;
    *p = 4;
    cout << "c[2] = " << c[2] << endl;
    cout << "*p = " << *p << endl;
    
    //swap
    a = 3;
    int d = 4;
    cout << "Before swap: a = " << a << ", c = " << d << endl;
    swap(a, d);
    cout << "After swap: a = " << a << ", c = " << d << endl;

    //reference as return value
    int arr[] = {1, 2, 3, 4, 5};
    cout << "Before modification: arr[2] = " << arr[2] << endl;
    get_element(arr, 2) = 10;
    cout << "After modification: arr[2] = " << arr[2] << endl;



    return 0;
}