#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    std::string brand;
    std::string model;
    int year;
    int speed;

public:
    Car(const std::string& b, const std::string& m, int y) : brand(b), model(m), year(y), speed(0) {}

    string getBrand() const { return brand; }
    string getModel() const { return model; }
    int getYear() const { return year; }
    int getSpeed() const { return speed; }

    void setSpeed(int s) { speed = s; }

    void increaseSpeed(int amount) {
        speed += amount;
    }

    void decreaseSpeed(int amount) {
        if (speed - amount < 0)
            speed = 0;
        else
            speed -= amount;
    }
};

int main() {
    Car myCar("Toyota", "Camry", 2022);
  
    myCar.increaseSpeed(30);
    std::cout << "Brand: " << myCar.getBrand() << ", Model: " << myCar.getModel()
              << ", Year: " << myCar.getYear() << ", Speed: " << myCar.getSpeed() << " km/h" << std::endl;

    myCar.increaseSpeed(20);
    std::cout << "Brand: " << myCar.getBrand() << ", Model: " << myCar.getModel()
              << ", Year: " << myCar.getYear() << ", Speed: " << myCar.getSpeed() << " km/h" << std::endl;

    myCar.decreaseSpeed(40);
    std::cout << "Brand: " << myCar.getBrand() << ", Model: " << myCar.getModel()
              << ", Year: " << myCar.getYear() << ", Speed: " << myCar.getSpeed() << " km/h" << std::endl;

    myCar.decreaseSpeed(20);
    std::cout << "Brand: " << myCar.getBrand() << ", Model: " << myCar.getModel()
              << ", Year: " << myCar.getYear() << ", Speed: " << myCar.getSpeed() << " km/h" << std::endl;

    return 0;
}
