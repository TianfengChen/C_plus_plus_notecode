#include <iostream>
using namespace std;

class CCar;

class CDriver
{
    public:
        void ModifyCar(CCar *pCar);
};

class CCar
{
    private:
        int price;
    public:
        CCar(int p):price(p){}
        friend int HowMuch(CCar car);
        friend void car_use1y(CCar &car);
        friend void CDriver::ModifyCar(CCar *pCar);
};

void CDriver::ModifyCar(CCar *pCar)
{
    pCar->price += 1000;
}

void car_use1y(CCar &car)
{
    car.price -= 1000;
}

int HowMuch(CCar car)
{
    return car.price;
}

int main()
{
    CCar car(20000);
    CDriver driver;
    driver.ModifyCar(&car);
    cout << HowMuch(car) << endl;
    car_use1y(car);
    cout << HowMuch(car) << endl;
    return 0;
}