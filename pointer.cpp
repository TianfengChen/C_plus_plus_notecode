#include <iostream>
using namespace std;

class person
{
    public:
        int age;
        int height;
        person(int a, int b):age(a),height(b){}
};

//function pointer
int add(int a, int b){return a+b;}

void func(int x){
    cout << "func(" << x << ")" << endl;}

void call_func(void* ptr){
    // Convert the void pointer to a function pointer
    void (*fptr)(int) = (void (*)(int)) ptr;
    // Call the function using the function pointer
    fptr(42);
}

int main()
{
    //basic pointer
    int k = 1;
    int m = 2;
    int n = 3;
    int *p = &k;
    cout<<*p<<endl; //1
    *p = m;//change the value of k
    cout<<*p<<endl; //2
    cout<<k<<endl; //2
    p = &n;//change the pointer
    cout<<*p<<endl; //3
    cout<<k<<endl; //2

    //array pointer
    int (*ap)[2];
    int a[3][2]= {{1,2},{3,4},{5,6}};
    ap = a;
    cout<<ap[2][0]<<endl; //5

    //pointer array
    int *pa[2]; 
    int b[4] = {1,2,3,4};
    int c[2] = {5,6};
    pa[0] = b;
    pa[1] = c;
    cout<<pa[1][1]<<endl; //6
    cout<<pa[0][3]<<endl; //4

    //function pointer
    int (*fp)(int, int);
    fp = add;
    cout<<fp(1,2)<<endl; //3
    void* ptr = (void*) &func;
    // Call the function using the void pointer
    call_func(ptr);

    //class pointer
    person *p_;
    person p1(1,2);
    p_ = &p1;
    cout<<p1.age<<endl; //1
    cout<<p_->age<<endl; //1

    return 0;
}