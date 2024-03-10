#ifndef SPHERE_H
#define SPHERE_H
#include "Shape3D.h"
#include <cmath> 

class Sphere : public Shape3D {
private:
    float sphereRadius; // Renamed for clarity
    static constexpr float PI = 3.14159f; 
    static constexpr float FOUR_THIRDS = 4.0f / 3.0f; // Define 4/3 as a constant

public:
    explicit Sphere(float radius) : sphereRadius(radius) {}

    void CalculateVolume() override {
        SetVolume(FOUR_THIRDS * PI * pow(sphereRadius, 3));
    }

    void Scale(float scaleFactor) override {
        sphereRadius *= scaleFactor;
        CalculateVolume();
    }

    void ShowInfo() override {
        std::cout << "Sphere with radius " << sphereRadius << " has volume "
                 << GetVolume() << std::endl;
    }

    std::string GetName() override {
        return "Sphere";
    }
};

#endif // SPHERE_H
