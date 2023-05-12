#include <iostream>
#include <vector>
#include <deque>
#include <list>

#include <string>
using namespace std;


int main()
{
    //*****************//
    //*****vector******//
    //*****************//

    int b[3] ={1,2,3};
    //vector<int> a(b,b+sizeof(b)/sizeof(int));//ok
    vector<int> a(b,b+3);//ok
    vector<int> c;
    c.assign(b,b+3);//ok
    a.push_back(4);
    a.pop_back();
    cout << a.size() << endl;
    a.clear();
    cout << a.size() << endl;

    vector<vector<int> > v(4);//4--important
    for (int i=0; i<v.size(); i++)
    {
        for(int j=i; j<4; j++)
        {
            v[i].push_back(j);
        }
    }
    cout << v.capacity() << endl;
    for (int i=0; i<v.size(); i++)
    {
        for(int j=0; j<v[i].size(); j++)
        {
            cout<<"the value of i:"<<i<<" j:"<<j<<" is " << v[i][j] <<endl;
        }
    }
    //iterator
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    vector<int>::iterator it;
    for (it=a.begin(); it!=a.end(); it++)
    {
        cout << *it;
    }
    cout << endl;
    vector<int>::reverse_iterator rit;
    for (rit=a.rbegin(); rit!=a.rend(); rit++)
    {
        cout << *rit;
    }
    cout << endl;
    //combine two vector
    a.insert(a.end(), a.begin(), a.end());
    for (it=a.begin(); it!=a.end(); it++)
    {
        cout << *it;
    }
    cout << endl;
    a.insert(a.begin()+ 2, 5);
    a.erase(a.begin()+1);

    //sort
    vector<int> d = {3,1,4,6,8,9,4};
    sort(d.begin(), d.end());
    for (it=d.begin(); it!=d.end(); it++)
    {
        cout << *it;
    }
    cout << endl;
    sort(d.begin(), d.end(), greater<int>());
    for (it=d.begin(); it!=d.end(); it++)
    {
        cout << *it;
    }
    cout << endl;
    //find
    cout << "find 4: " << binary_search(d.begin(), d.end(), 4) << endl;
    

    //*****************//
    //*****deque*******//
    //*****************//
    deque<int> e;
    e.push_back(1);
    e.push_back(2);
    e.push_front(3);
    e.push_front(4);
    for (int i=0; i<e.size(); i++)
    {
        cout << e[i];
    }
    cout << endl;
    e.pop_back();
    e.pop_front();
    for (int i=0; i<e.size(); i++)
    {
        cout << e[i];
    }
    cout << endl;
    deque<int>::iterator itd;
    for (itd=e.begin(); itd!=e.end(); itd++)
    {
        cout << *itd;
    }
    cout << endl;
    deque<int>::reverse_iterator ritd;
    for (ritd=e.rbegin(); ritd!=e.rend(); ritd++)
    {
        cout << *ritd;
    }
    cout << endl;
    //sort
    deque<int> f= {1,2,3,4,5};
    sort(f.begin(), f.end());

    //*****************//
    //*****list********//
    //*****************//
    int l_[] ={1,2,3,4,5};
    list<int> l(l_,l_+5);
    l.merge(l);
    cout<< l.size() << endl;
    return 0;
}