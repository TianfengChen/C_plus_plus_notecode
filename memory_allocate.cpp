#include <iostream>
using namespace std;

int main(){
    // T *p = new T[size];
    int *p = new int[5];
    for(int i = 0; i < 5; i++){
        p[i] = i;
        cout << p[i];
    }
    cout<< endl;
    delete [] p;

    //malloc
    int *q = (int *)malloc(5 * sizeof(int));
    for(int i = 0; i < 5; i++){
        q[i] = i;
        cout << q[i];
    }
    cout<< endl;
    free(q);

    //size of array
    int a[5];
    cout << sizeof(a) << endl;
    cout << sizeof(a[0]) << endl;
    cout << sizeof(a) / sizeof(a[0]) << endl;

    //memory allocation of struct
    struct A{
        int a;
        double b;
    };
    A *r = new A;
    r->a = 1;
    r->b = 2.0;
    cout <<sizeof(r->a)<<endl;
    cout <<sizeof(r->b)<<endl;
    cout <<sizeof(r)<<endl;
    delete r;

    

}