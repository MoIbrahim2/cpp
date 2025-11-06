#include <iostream>
#include <string.h>
using namespace std;
class Complex{
   int real;
   int imaginary;
    public:
    Complex(int _real =0,int _imaginary =0){
         real = _real;
         imaginary = _imaginary;
    }
    void setReal(int _real){
        real = _real;
    }
    int getReal(){
        return real;
    }
    void setImaginary(int _imaginary){
        imaginary = _imaginary;
    }
    int getImaginary(){
        return imaginary;
    }
    void printComplex(){

        if(imaginary>0){
        cout << real<<" + " << imaginary << "i" << endl;
        }
        else if(imaginary<0){
            cout<<real<<imaginary;
        }
        else{
            cout<<real;
        }
        
    }
    Complex add(Complex c){
        Complex added;
        added.real = real + c.getReal();;
        added.imaginary = imaginary + c.getImaginary();
        return added;
    } 
    Complex operator+(Complex c){
        Complex res(real+c.real,imaginary+ c.imaginary);
        return res;
    }
    friend Complex operator+(int x,Complex c);
    explicit operator int() {
        return real;
    }
    int operator==(Complex c){
        return real == c.real && imaginary == c.imaginary;
    }
    int operator!=(Complex c){
        return !(*this ==c);
    }
    Complex & operator++(){
        real++;
        imaginary++;
        return *this;
    }
    Complex operator++(int){
        Complex res(real,imaginary);
        real++;
        imaginary++;
        return res;
    }
  
};
     
    Complex operator+(int x,Complex c){
        Complex res(x+c.real, c.imaginary);
        return res;
    }

void print(Complex e);
Complex sub(Complex c1, Complex c2);
int main() {
    Complex c1(10,20),c2(30,10);
    int x =20;
    Complex c3 = c1+ c2;
    c3.printComplex();
    Complex c4 = c1+x;
    c4.printComplex();
    Complex c5 = x+c1;
    if(c5==c4)
        cout<<"Equals\n";
    else
        cout<<"Not equals\n";
    
    c2++;
    c2.printComplex();
    x = (int)c2;

    cout<<x<<endl;
    return 0;
}
Complex sub(Complex c1, Complex c2){
    Complex subtracted;
    subtracted.setReal(c1.getReal()-c2.getReal());
    subtracted.setImaginary(c1.getImaginary()-c2.getImaginary());
    return subtracted;
}
void print(Complex e){
    if(e.getImaginary()>0){
        cout << e.getReal()<<" + " << e.getImaginary() << "i" << endl;
    }
    else if(e.getImaginary()<0){
        cout<<e.getReal()<<e.getImaginary();
    }
    else{
        cout<<e.getReal();
    }
    
}
