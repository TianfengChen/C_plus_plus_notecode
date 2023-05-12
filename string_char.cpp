#include <iostream>
#include <string>
using namespace std;

int main(){
    //char
    char p[6] = "hello";
    cout << p << endl;
    char *q = new char[4];
    //q = "abc";//dont do this
    strcpy(q, "abc");
    for (int i=0; i<3; i++)
        cout << q[i];
    cout << endl;
    delete [] q;
    char b[] = "hellowww";
    cout<< sizeof(b) << endl;

    //string
    //  length
    string s = "abc";
    cout << s.length() << endl;
    //  assign
    string t;
    t = s;
    t = "def";
    cout << s << endl;
    cout << t << endl;
    string u;
    u.assign(s);
    u.assign("ghi");
    cout << s << endl;
    cout << u << endl;
    //  append
    string v;
    v = s + t;
    cout << v << endl;
    v.append(u);
    cout << v << endl;
    //  find
    v += v;
    cout << v.find("fg") << endl;
    cout << v.find("fg", 6) << endl;//start from 5

    //type conversion
    //int to string
    int a = 123;
    string str = to_string(a);
    cout << str << endl;
}