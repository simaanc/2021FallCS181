/*************************************************************************
Cuyamaca College CS-181

File name:	Lab11Exercise1.cpp

Description: Lab #11, Exercise #1, Make a car class and then go 
                          through acceleration and deceleration

Developer: Christopher Simaan


*************************************************************************/

#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    int yearModel;
    string make;
    int speed;
public:
    Car(int y, string model) {
        yearModel = y;
        make = model;
        speed = 0;
    }
    int getYear() {
        return yearModel;
    }
    string getMake() {
        return make;
    }
    int getSpeed() {
        return speed;
    }
    int accelerate() {
        return speed += 5;
    }
    int brake() {
        return speed -= 5;
    }
};

int main() {
    Car sedan(2021, "Porche");

    cout << "Make: " << sedan.getMake();
    cout << " Year: " << sedan.getYear() << endl;

    for (int x = 1; x <= 5; x++) {
        cout << "Current speed: " << sedan.getSpeed() << endl;
        cout << "Accelerating..." << endl;
        sedan.accelerate();
    }
    for (int x = 1; x <= 5; x++) {
        cout << "Current speed: " << sedan.getSpeed() << endl;
        cout << "Braking..." << endl;
        sedan.brake();
    }
    cout << "Current speed: " << sedan.getSpeed() << endl;
}