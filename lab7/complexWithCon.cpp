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

};

void print(Complex e);
Complex sub(Complex c1, Complex c2);
int main() {
        
        int real,imaginary;
        cout<<"Enter the real number: ";
        cin>>real;
        cout<<"Enter the imaginary number: ";
        cin>>imaginary;
        Complex e1(real,imaginary),result;

        cout<<"Enter the real number: ";
        cin>>real;
        cout<<"Enter the imaginary number: ";
        cin>>imaginary;
        Complex e2(real,imaginary);

        result = e1.add(e2);
        result.printComplex();

        result = sub(e1,e2);
        print(result);
        
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
