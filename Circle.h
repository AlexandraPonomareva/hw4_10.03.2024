#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape2D.h"
#include <cmath> 

class Circle : public Shape2D {
private:
    float radius;
    static constexpr float PI = 3.14159f; 

public:
    explicit Circle(float radius) : radius(radius) {} 

    void CalculateArea() override {
        SetArea(PI * pow(radius, 2)); 
    }

    void Scale(float scaleFactor) override {
        radius *= scaleFactor;
        CalculateArea();
    }

    void ShowInfo() override {
        std::cout << "Circle with radius " << radius << " has area " << GetArea() << std::endl;
    }

    std::string GetName() override {
        return "Circle";
    }
};

#endif // CIRCLE_H
