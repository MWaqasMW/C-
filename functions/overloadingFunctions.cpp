#include <iostream>
#include <cmath>

// Function to calculate area of a circle
double calculateArea(double radius) {
    return M_PI * radius * radius;
}

// Function to calculate area of a rectangle
double calculateArea(double length, double width) {
    return length * width;
}


int main() {
    std::cout << "Area of Circle" << calculateArea(5.0) << std::endl;
    std::cout << "Area of Rectangle" << calculateArea(4.0, 6.0) << std::endl;

    return 0;
}
