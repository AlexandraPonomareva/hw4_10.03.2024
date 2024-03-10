#ifndef CYLINDER_H
#define CYLINDER_H
#include "Shape3D.h"
#include "Circle.h"
#include <cmath> 

class Cylinder : public Shape3D {
private:
    Circle baseCircle;
    float cylinderHeight; // Renamed for clarity
    static constexpr float PI = 3.14159f; 

public:
    explicit Cylinder(float radius, float height) : baseCircle(radius), cylinderHeight(height) {} 

    void CalculateVolume() override {
        baseCircle.CalculateArea(); 
        SetVolume(baseCircle.GetArea() * cylinderHeight); 
    }

    void Scale(float scaleFactor) override {
        baseCircle.Scale(scaleFactor);
        cylinderHeight *= scaleFactor;
        CalculateVolume();
    }

    void ShowInfo() override {
        std::cout << "Cylinder with radius " << baseCircle.GetArea()
                 << " and height " << cylinderHeight << " has volume " << GetVolume()
                 << std::endl;
    }

    std::string GetName() override {
        return "Cylinder";
    }
};

#endif // CYLINDER_H
