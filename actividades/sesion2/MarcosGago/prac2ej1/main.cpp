#include <iostream>

using namespace std;

class Triangle{
    public:
    Triangle (short _base, short _height){
        base=_base;
        height=_height;
    }
    short getBase(){
        return base;
    }
    short getHeight(){
        return height;
    }
    short getArea(){
        return (base*height)/2;
    }
    private:
        short base;
        short height;
};

class Rectangle{
    public:
    Rectangle (short _side1, short _side2){
        side1=_side1;
        side2=_side2;
    }
    short getside1(){
        return side1;
    }
    short getside2(){
        return side2;
    }
    short getArea(){
        return side1*side2;
    }
    short getPerimeter(){
        return (2*side1)+(2*side2);
    }
    private:
        short side1;
        short side2;
};


int main()
{
    short base;
    short height;
    cout<<"Escribe la base y la altura de tu triangulo"<<endl;
    cin>>base;
    cin>>height;
    short side1;
    short side2;
    cout<<"Escribe los lados de tu rectangulo"<<endl;
    cin>>side1;
    cin>>side2;
    Triangle triangle(base, height);
    Rectangle rectangle(side1, side2);
    cout<<"El area de tu triangulo es "<<triangle.getArea()<<endl<<
          "El area de tu rectangulo es "<<rectangle.getArea()<<endl<<
          "El perimetro de tu rectangulo es "<<rectangle.getPerimeter()<<endl;
    return 0;
}
