#include <iostream>
using namespace std;

class CRectangle
{
    public:
        int width;
        int height;
        static int TotalArea;   //static member
        CRectangle(int w, int h)
        {
            width = w;
            height = h;
            TotalArea += w * h;
        }
        //static int TotalNumber = 4; //static member can not be initialized in class
        static int GetTotalArea() {return TotalArea;} //static member function
        //int GetTotalArea2() {return TotalArea;} //non-static member function can not access static member
};

int CRectangle::TotalArea = 0; //static member must be initialized outside class, to be specific, in class define file

int main()
{

    CRectangle r1(3, 3), r2(2, 2);
    cout<< CRectangle::GetTotalArea() << endl; //static member function can be called by class name
}