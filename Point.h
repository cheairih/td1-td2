#ifndef POINT_H
#define POINT_H

class Point {
private:
    float x;
    float y;

public:
    Point(float xCoord, float yCoord);
    void deplace(float deltaX, float deltaY);
    void affiche() const;
};

#endif // POINT_H
