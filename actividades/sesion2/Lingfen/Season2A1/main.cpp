#include <iostream>

 using namespace std;

 class Triangle {

public:

    Triangle(unsigned short int _base, unsigned short int _height){
        base = _base;
        height = _height;
    }

    unsigned short int area(){
        return(base * height / 2);
    }

 private:
    unsigned short int base;
    unsigned short int height;

 };


class Rectangle {

public:

    Rectangle(unsigned short int _side1, unsigned short int _side2){
        side1 = _side1;
        side2 = _side2;
        area = side1 * side2;
        perimeter = 2*(side1 + side2);
    }

    unsigned short int getArea(){
        return(area);
    }

     unsigned short int getPerimeter(){
            return(perimeter);
    }

 private:
    unsigned short int side1;
    unsigned short int side2;
    unsigned short int area;
    unsigned short int perimeter;

 };

 int main()

{
    unsigned short int basetriangle, side1rectangle;
    unsigned short int heighttriangle, side2rectangle;

     cout << "Please, enter the base of the triangle: ";
    cin >> basetriangle;

     cout << "Please, enter the height: ";
    cin >> heighttriangle;

     Triangle myTriangle(basetriangle, heighttriangle);
     cout << "The area of the triangle is: " << myTriangle.area() << endl;

     cout << "Please, enter the first side of the rectangle: ";
    cin >> side1rectangle;

     cout << "Please, enter the second side of the rectangle: ";
    cin >> side2rectangle;

     Rectangle myRectangle(side1rectangle, side2rectangle);
     cout << "The area of the rectangle is: " << myRectangle.getArea() << endl;
    cout << "The perimeter of the rectangle is: " << myRectangle.getPerimeter() << endl;
    return 0;
}
