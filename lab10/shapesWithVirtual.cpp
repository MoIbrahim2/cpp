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
    virtual void setDim1(int _dim1){
        dim1 = _dim1;
    }
    virtual void setDim2(int _dim2){
        dim2 = _dim2;
    }
    int getDim2() const {
        return dim2;
    }
    int getDim1() const {
        return dim1;
    }
    virtual void print(){
        cout<<"The dimentions of the shape are "<< dim1<<"and "<<dim2<<endl;
        cout<<"Hello from the main shape"<<endl;
    }
};
class Rectangle: public Shape{
    public:
    Rectangle(int _length, int _height):Shape(_length,_height){
    }
   void print(){
        cout<<"The area is: "<<dim1*dim2<<endl;
        cout<<"Hello from the rectangle shape"<<endl;
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
    void print(){
        
        double area = 3.14 * dim1 * dim1; // dim1 == dim2 == radius
        cout<<"The area is: "<< area <<endl;
         cout<<"Hello from the circle shape"<<endl;
   } 

};
class Triangle: public Shape{
    public:
    Triangle(int _length, int _height):Shape(_length,_height){
    }
      void print(){
          double area = 0.5 * dim1 * dim2; 
          cout<<"The area is: "<< area <<endl;
          cout<<"Hello from the triangle shape"<<endl;

    } 

};
class Square : public Rectangle{
    public:
    Square(int _length):Rectangle(_length,_length){}
    void setDim1(int _dim1){
        dim1 = _dim1;
        dim2 = _dim1;
    }
    void setDim2(int _dim2){
        dim2 = _dim2;
        dim1= _dim2;
    }
    void print(){

        cout<<"The area is: "<< dim1 * dim2 <<endl;
        cout<<"Hello from the square shape"<<endl;
   } 
};
void myFun(Shape * s1){
    s1->print();
}

int main() {
   
    Shape* arr[4];
    Rectangle r(4, 5); 
    Circle c(3);
    Triangle t(6, 8); 
    Square s(5);
    arr[0]=&r;
    arr[1]=&c;
    arr[2]=&t;
    arr[3] =&s;
    for(int i =0;i<4;i++){
       myFun(arr[i]);
    }
    return 0;
}