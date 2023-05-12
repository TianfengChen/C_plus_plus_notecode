#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    //*****************//
    //*****stack*******//
    //*****************//
    //initialize
    // 1. push
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    // 2. initialize from array
    stack<int> t({1, 2, 3});
    int a[3] = {1, 2, 3};
    stack<int> u({a, a+3});

    //erase
    s.pop();
    cout<<s.size()<<endl;

    //find
    cout<<s.top()<<endl;

    //*****************//
    //*****queue*******// same as stack
    //*****************//


    return 0;
}