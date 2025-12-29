#include <iostream>
using namespace std;

class Point{
        int x,y;
    public:
        Point(int _x=0,int _y=0){
            x = _x;
            y = _y;
            
        }
        void setXY(int _x,int _y){
            x = _x;
            y = _y;
        }
        int getX(){
            return x;
        }
        int getY()
        {
            return y;
        }

};
class Rectangle{
    Point *tl;
    Point *br;
public:
    Rectangle(Point *_tl,Point *_br){
        tl = _tl;
        br = _br;
        cout<<"Rectangle has been created successfully with this values as it's coordinates Top left: ("<<tl->getX()<<","<<tl->getY()<<") "<<"and bottom left: ("<<br->getX()<<","<<br->getY()<<")"<<endl;
    }
};
class Circle{
    Point *center;
    float radius;
public:
    Circle(Point* _center, int raduis){
        center = _center;
        cout<<"Circle has been created successfully with this values as it's coordinates Center point ("<<center->getX()<<","<<center->getY()<<") "<<"and with Radius= "<<raduis<<endl;
    }
};
class Trianlge{
    Point *t1;
    Point *t2;
    Point *t3;
    public:
    Trianlge(Point* _t1,Point* _t2,Point * _t3){
        t1 = _t1;
        t2 = _t2;
        t3= _t3;
        cout<<"Triangle has been created successfully with vertices: ("<<t1->getX()<<","<<t1->getY()<<") , ("<<t2->getX()<<","<<t2->getY()<<") , ("<<t3->getX()<<","<<t3->getY()<<")"<<endl;
    }
};
int main() {
    Point tl(0,0);
    Point br(10,10);
    Point center(5,5);
    Point t1(0,0);
    Point t2(5,0);
    Point t3(2,4);
    Rectangle r(&tl, &br);
    Circle c(&center,3);
    Trianlge t(&t1, &t2, &t3);
    
    return 0;
}
