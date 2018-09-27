#include <iostream>
using namespace std;
class Triangle{
public:
    Triangle(int _base, int _height){
        setBase(_base);
        setHeight(_height);
    }
    int getBase(){
        return base;
    }
    int getHeight(){
        return height;
    }
    void setBase(int _base){
        if (_base < 0){
            cout << "There must be a mistake, the height of your triangle cannot be " << _base
                 << " . I'll set its height to 0"
                 << endl;
            base = 0;
        }else{
            base = _base;
        }
    }
    void setHeight(int _height){
        if (_height < 0){
            cout << "There must be a mistake, the height of your triangle cannot be " << _height
                 << " . I'll set its height to 0"
                 << endl;
            height = 0;
        }else{
            height = _height;
        }
    }
    int areaOfTriangle(int base, int height){
        int area;
        area = (base * height) / 2;
        return area;
    }
private:
    int base;
    int height;
};
class Rectangle{
        public:
            Rectangle(int _side1, int _side2){
                setSide1(_side1);
                setSide2(_side2);
            }
            int getSide1(){
                return side1;
            }
            int getSide2(){
                return side2;
            }
            void setSide1(int _side1){
                if (_side1 < 0){
                    cout << "There must be a mistake, side1 of your rectangle cannot measure " << _side1
                         << " . I'll set it to 0"
                         << endl;
                    side1 = 0;
                }else{
                    side1 = _side1;
                }
            }
            void setSide2(int _side2){
                if (_side2 < 0){
                    cout << "There must be a mistake, side2 of your rectangle cannot measure " << _side2
                         << " . I'll set it to 0"
                         << endl;
                    side2 = 0;
                }else{
                    side2 = _side2;
                }
            }
                int areaOfRectangle(int side1, int side2){
                    int area;
                    area = (side1 * side2);
                    return area;
            }
                int perimeterOfRectangle(int side1, int side2){
                    int area;
                    area = (side1 + side2) * 2;
                    return area;
            }
        private:
            int side1;
            int side2;
        };
int main()
{
    int base, height;
    int side1, side2;
    cout << "Enter the base of your triangle: ";
    cin >> base;
    cout << "Enter the height of your triangle: ";
    cin >> height;
    Triangle sick(base, height);
    cout << "The area of your triangle is: " << sick.areaOfTriangle(base, height) << endl;
    cout << "Enter side1 of your rectangle: ";
    cin >> side1;
    cout << "Enter side2 of your rectangle: ";
    cin >> side2;
    Rectangle cool(side1, side2);
    cout << "The area of your rectagle is: " << cool.areaOfRectangle(side1, side2)
         << " and its perimeter is: "<< cool.perimeterOfRectangle(side1, side2) <<endl;
    return 0;
}
