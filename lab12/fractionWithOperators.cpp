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
    int _dem = dem;
    int _num = num;
    while (_dem != 0) {
        int temp = _dem;
        _dem = _num % _dem;
        _num = temp;
    }
    return _num;
    
}
void print(){
         cout << "The result is: " << num << "/" << dem << endl;
    }
    Fraction& operator +(Fraction f1){
        int numResult = (num * f1.dem) + (f1.num * dem);
        int denResult = dem * f1.dem;
        Fraction f2(numResult,denResult);
        int gcd = f2.GCD();

        numResult /= gcd;
        denResult /= gcd;
        f2.num = numResult;
        f2.dem = denResult;
        
        return f2;
    }    
    friend Fraction& operator+(int x, Fraction f1);
   
    int operator==(Fraction f1){
        int _dem = dem;
        int _num = num;
        int gcd1 = GCD();
        int gcd2 = f1.GCD();
        _num /= gcd1;
        _dem/= gcd1;
        int f1Num =f1.num / gcd2;
        int f1Dem=f1.dem / gcd2;

        return _num == f1Num && _dem ==f1Dem;
    }

    int operator!=(Fraction f1){
        return !(*this == f1);
    }
     Fraction & operator++(){
        Fraction f1(num,dem);
        *this = f1 + 1;
        return *this;
    }
    Fraction & operator++(int){
        Fraction f1(num,dem);
        *this = f1 + 1;
        return f1;
    }
};
Fraction& operator+(int x, Fraction f1){
   
    return f1+x;
}

int main() {
    Fraction f1(3,4),f2(1,5);
    Fraction f3 = f1+f2;
    Fraction f4 = f1+2;
    Fraction f5 = 2+f1;
    if(f5==f4)
        cout<<"Equals\n";
    else
        cout<<"Not equals\n";
    f3.print();
    f4.print();
    f5.print();
    Fraction f6 = f5++;
    Fraction f7 = ++f5;
    f6.print();
    f7.print();
    
    return 0;
}
