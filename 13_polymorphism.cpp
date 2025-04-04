#include <iostream>
using namespace std;

//polymorphism
class Creature
{
    public:
    virtual void thrive() = 0;//Pure Virtual Function, this class is abstract class, abstract class can not be instantiated
    void Call_Pure(){
        this->thrive();//ok
    }
    Creature(){
        //thrive();//error
    }
    virtual ~Creature(){
        //thrive();//error
    }
};

class Animal:public Creature
{
    public:
    virtual void VirtualFunc(){
        cout << "Animal::VirtualFunc" << endl;
    }
    void thrive(){//no need to be virtual
        cout<<"the Pure Virtual Fuction of Base is defined in Derived Class"<<endl;
    }
    virtual ~Animal(){
        cout <<"Animal class destructor called"<<endl;
    }
};

class Dog:public Animal
{
    public:
    int age;
    Dog (int a):age(a){}
    virtual void VirtualFunc(){
        cout << "Dog::VirtualFunc" << endl;
    }
    ~Dog(){
        cout <<"Dog class destructor called"<<endl;
    }
};

int main()
{
    /////polymorphism 1: call same name function in different class according to the type of pointer
    Dog d(2);
    Animal b;
    b.thrive();
    cout<<"1"<<endl;
    Animal *p = &b;
    p->VirtualFunc();//point to derived class, call derived class function  
    cout<<"2"<<endl;
    p = &d;
    p->VirtualFunc();//point to base class, call base class function
    //virtual destructor
    Animal *q = new Dog(2);
    delete q;

    /////polymorphism 2:derived object can be assigned to base object
    //static cast
    Dog dog(3);
    Animal * animal1 = &dog;
    Animal * animal2 = new Dog(3);
    Animal & animal3 = dog;
    Animal   animal4 = dog;
    cout<<"3"<<endl;
    animal1->VirtualFunc();
    cout<<"4"<<endl;
    animal2->VirtualFunc();
    cout<<"5"<<endl;
    animal3.VirtualFunc();
    cout<<"6"<<endl;
    animal4.VirtualFunc();
    
    //dynamic cast
    Animal * animal5 = new Dog(3);
    Animal * animal6 = new Animal();
    Dog * dog1 = static_cast<Dog*>(animal5);//safe
    Dog * dog2 = dynamic_cast<Dog*>(animal5);//safe
    Dog * dog3 = static_cast<Dog*>(animal6);//unsafe, no exception happen
    Dog * dog4 = dynamic_cast<Dog*>(animal6);//safe, exception happen
    cout<<"7"<<endl;
    dog1->VirtualFunc();
    cout<<"8"<<endl;
    dog2->VirtualFunc();
    cout<<"9"<<endl;
    dog3->VirtualFunc();
    cout<<"0"<<endl;
    //dog4->VirtualFunc();//dog4 is a empty pointer, segmentation fault
    
    //Pure Virtual Function
    //Creature c;//error
    return 0;
}