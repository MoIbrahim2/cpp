#include <iostream>
#include <string.h>
using namespace std;
class Complex{
   int real;
   int imaginary;

    public:
    static int no;
    ~Complex(){
        no--;
    }
    Complex(int _real =0,int _imaginary =0){
         real = _real;
         imaginary = _imaginary;
         no++;
    }
    Complex(Complex &c1){
        real = c1.real;
        imaginary = c1.imaginary;
        no++;
    }
    static int printNo(){
        return no;
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
int Complex::no =0;
void print(Complex e);
Complex sub(Complex c1, Complex c2);
void myFun(Complex c){
    Complex c1(20,10),c2(10,10),c3(5,2);
}

int main() {
    
    Complex c1(20,10),c2(10,10),c3(5,2);

    myFun(c1);
    cout<<"Number of objects: "<<Complex::printNo()<<endl;

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
