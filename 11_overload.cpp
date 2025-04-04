#include <iostream>
using namespace std;

//function overload
void display(int var1, double var2 = 0.3)
{
    cout<<"int and double"<<endl;
}

void display(double var2)
{
    cout<<"double"<<endl;
}

//operator overload
class complex
{
    public:
    double real,img;
    complex(double r = 0, double i = 0):real(r),img(i){}
    complex operator+(const complex &c);
};

complex operator-(const complex &a, const complex &b)//global function
{
    return complex(a.real - b.real, a.img - b.img);
}

complex operator+(double a, const complex &b)//global function
{
    return complex(a + b.real, b.img);
}

complex complex::operator+(const complex & c)//member function
{
  return complex(real + c.real, img + c.img);
}

class STRING
{
    private:
    char *str;
    public:
    const char *c_str() const{
        return str;
    }
    STRING():str(new char[1]){
        str[0] = '\0';
    }
    STRING & operator=(const char *s);
    ~STRING(){
        delete [] str;
    }
};

STRING & STRING::operator=(const char *s)//assign operator overload,shallow copy; use duplicate constructor to deep copy
{
    if(str == s)
        return *this;//avoid self-assignment
    delete [] str;
    str = new char[strlen(s) + 1];
    strcpy(str, s);
    return *this;
}

int main()
{
    //function overload
    display(1,2.3);
    display(1);
    display(1.3);
    //operator overload
    complex c1,c2,c3;
    c3 = c1 - c2;
    c3 = c1 + c2;
    c3 = 1.2 + c2;
    //assign operator overload
    STRING s1;
    s1 = "hello";
    cout << s1.c_str() << endl;
    return 0;
}