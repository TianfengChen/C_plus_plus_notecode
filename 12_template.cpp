#include <iostream>
using namespace std;

//function template
template <typename T>
void Swap(T &n1, T &n2)
{
    T temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

//class template
template <typename T, int size>
class Array
{
private:
    T array[size];
public:
    T& operator[](int i){
        return array[i];
    }
    void print();
    Array(T a[size]){
        for(int i = 0; i < size; i++){
            array[i] = a[i];
        }
    }
    ~Array(){}
};

template <typename T, int size>
void Array<T, size>::print(){
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

template <typename T, int size>
class Sring
{
private:
    T Sr[size];
public:
    T& operator[](int i){
        return Sr[i];
    }
    void print();
    Sring(T a[size]){
        for(int i = 0; i < size; i++){
            Sr[i] = a[i];
        }
    }
    ~Sring(){}
};

template <typename T, int size>
void Sring<T, size>::print(){
    for(int i = 0; i < size; i++){
        cout << Sr[i];
    }
    cout << endl;
}

int main(){
    //function template
    int a = 1, b = 2;
    Swap(a, b);
    cout << a << " " << b << endl;
    double c = 1.1, d = 2.2;
    Swap(c, d);
    cout << c << " " << d << endl;

    //class template
    char k[6] = "hello";
    Sring <char, 6> arr(k);
    arr.print();
}