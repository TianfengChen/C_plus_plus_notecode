#include<iostream>
using namespace std;

//inline function, compiler will replace the function call with the function body
inline int max(int a, int b)
{
    return (a > b)? a : b;
}

int main()
{
    cout<<"Max (20,10): "<<max(20,10)<<endl;
    cout<<"Max (0,200): "<<max(0,200)<<endl;
    cout<<"Max (100,1010): "<<max(100,1010)<<endl;
    return 0;
}