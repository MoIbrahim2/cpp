#include <iostream>
using namespace std;

class Fraction{
    int num;
    int dem;

    public:
    Fraction(int _num =0, int _dem=1){
        num = _num;
        dem = _dem;
    }
    void setNum(int _num ){
        num = _num;
    }
    void setDem(int _dem){
        dem = _dem;
    }
    int getNum(){
        return num;
    }
    int getDem(){
        return dem;

    }
    int GCD() {
    while (dem != 0) {
        int temp = dem;
        dem = num % dem;
        num = temp;
    }
    return num;
    
}
    Fraction Add2Fractions(Fraction f1) {
        int numResult = (num * f1.dem) + (f1.num * dem);
        int denResult = dem * f1.dem;
        Fraction f2(numResult,denResult);
        int gcd = f2.GCD();

        numResult /= gcd;
        denResult /= gcd;
        f2.setNum(numResult);
        f2.setDem(denResult);
        
        return f2;
       
    }
    void print(){
         cout << "The result is: " << num << "/" << dem << endl;
    }
};


int main() {
    int num1, den1, num2, den2;
    cout << "Enter first fraction (numerator denominator): ";
    cin >> num1 >> den1;
    Fraction f1(num1,den1);
    cout << "Enter second fraction (numerator denominator): ";
    cin >> num2 >> den2;
    Fraction f2(num2,den2);
    Fraction f3 = f1.Add2Fractions(f2);
    f3.print();


    return 0;
}
