#include <iostream>
using namespace std;

class Point{
        int x,y;
    public:
        Point(int _x=0,int _y=0){
            x = _x;
            y = _y;
            
        }

};
class Rectangle{
    Point tl;
    Point br;
public:
    Rectangle(int x1, int y1,int x2,  int y2):tl(x1,y1),br(x2,y2){
        cout<<"Rectangle has been created successfully with this values as it's coordinates Top left: ("<<x1<<","<<y1<<") "<<"and bottom left: ("<<x2<<","<<y2<<")"<<endl;
    }
};
class Circle{
    Point center;
    float radius;
public:
    Circle(int x1, int y1, int raduis):center(x1,y1){
        cout<<"Circle has been created successfully with this values as it's coordinates Center point ("<<x1<<","<<y1<<") "<<"and with Radius= "<<raduis<<endl;
    }
};
class Trianlge{
    Point t1;
    Point t2;
    Point t3;
    public:
    Trianlge(int x1, int y1, int x2, int y2, int x3, int y3):t1(x1,y1),t2(x2,y2),t3(x3,y3){
        cout<<"Triangle has been created successfully with vertices: ("<<x1<<","<<y1<<") , ("<<x2<<","<<y2<<") , ("<<x3<<","<<y3<<")"<<endl;
    }
};
int main() {
    Rectangle r(0, 0, 10, 10);
    Circle c(5, 5, 3);
    Trianlge t(0, 0, 5, 0, 2, 4);
    
    return 0;
}
