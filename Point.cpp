#include "Point.h"
#include <iostream>
using namespace std;

Point::Point(float xCoord, float yCoord) : x(xCoord), y(yCoord) {}

void Point::deplace(float deltaX, float deltaY) {
    x += deltaX;
    y += deltaY;
}

void Point::affiche() const {
    std::cout << "Coordonnées : (" << x << ", " << y << ")" << std::endl;
}
