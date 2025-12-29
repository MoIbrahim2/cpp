#include <iostream>
#include <string.h>
using namespace std;
class Complex{
   int real;
   int imaginary;
    public:
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
        Complex e1,e2,result;
        int real,imaginary;
        cout<<"Enter the real number: ";
        cin>>real;
        cout<<"Enter the imaginary number: ";
        cin>>imaginary;
        e1.setReal(real);
        e1.setImaginary(imaginary);

        cout<<"Enter the real number: ";
        cin>>real;
        cout<<"Enter the imaginary number: ";
        cin>>imaginary;
        e2.setReal(real);
        e2.setImaginary(imaginary);

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
