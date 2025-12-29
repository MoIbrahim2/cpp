#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class Shape{
    protected:
    int dim1,dim2;
    public:
    Shape(int _dim1 =0, int _dim2=0){
        dim1 =_dim1;
        dim2= _dim2;
    }
    void setDim1(int _dim1){
        dim1 = _dim1;
    }
    void setDim2(int _dim2){
        dim2 = _dim2;
    }
    int getDim2() const {
        return dim2;
    }
    int getDim1() const {
        return dim1;
    }
    void print(){
        cout<<"The dimentions of the shape are "<< dim1<<"and "<<dim2<<endl;
    }
};
class Rectangle: public Shape{
    public:
    Rectangle(int _length, int _height):Shape(_length,_height){
    }
   void printArea(){
        cout<<"The area is: "<<dim1*dim2<<endl;
   } 
};
class Circle: public Shape{
    public:
    Circle(int radius):Shape(radius,radius){
    }
    void setDim1(int _dim1){
        dim1 = _dim1;
        dim2 = _dim1;
    }
    void setDim2(int _dim2){
        dim2 = _dim2;
        dim1= _dim2;
    }
    void printArea(){
        
        double area = 3.14 * dim1 * dim1; // dim1 == dim2 == radius
        cout<<"The area is: "<< area <<endl;
   } 

};
class Triangle: public Shape{
    public:
    Triangle(int _length, int _height):Shape(_length,_height){
    }
      void printArea(){
          double area = 0.5 * dim1 * dim2; // use 0.5 to avoid integer division
          cout<<"The area is: "<< area <<endl;
    } 

};

int main() {
   
    Rectangle r(4, 5); 
    cout << "Rectangle dimensions: " << r.getDim1() << " x " << r.getDim2() << endl;
    r.printArea();

    
    Circle c(3);
    cout << "Circle radius: " << c.getDim1() << endl;
    c.printArea();

    
    Triangle t(6, 8); 
    cout << "Triangle base x height: " << t.getDim1() << " x " << t.getDim2() << endl;
    t.printArea();

    return 0;
}