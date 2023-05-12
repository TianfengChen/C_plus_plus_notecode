#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

int main()
{
    //*****************//
    //*****map*********//
    //*****************//
    //initialize
    // 1. assign
    map<string, int> m;
    m["a"] = 1;
    m["b"] = 2;
    m["c"] = 3;
    // 2. initialize list
    map<string, int> n = {
        {"d", 1},
        {"e", 2},
        {"f", 3}
    };
    // 3. insert
    map<string, int> o;
    vector<string> w = {"a", "b", "c"};
    vector<int> u = {1, 2, 3};
    for (int i=0; i<w.size(); i++)
        o.insert(pair<string, int>(w[i], u[i]));
    
    //display
    map<string, int>::iterator it;
    for (it=m.begin(); it!=m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    //merge
    m.insert(n.begin(), n.end());
    n.merge(m);
    cout<<n.size()<<endl;

    //find
    it = n.find("a");
    cout << it->first << " " << it->second << endl;

    //erase and clear
    n.erase("a");
    cout<<n.size()<<endl;
    n.clear();
    cout<<n.size()<<endl;

    //*****************//
    //*****set*********//
    //*****************//
    // Transform vector to set
    int a[5] = {1,2,3,4,5};
    vector<int> vec = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    set<int> myset(vec.begin(), vec.end());
    // Output set
    for (int x : myset) {
        cout << x << " ";
    }
    cout << endl;
    set<int> s2(a, a+5);

    //insert
    myset.insert(7);

    //find
    set<int>::iterator it2;
    it2 = myset.find(7);
    cout << *it2 << endl;

    //erase
    myset.erase(7);
    myset.erase(it2);
    myset.erase(myset.find(7));
    myset.erase(myset.begin(), myset.find(3));
}