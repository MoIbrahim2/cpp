#include <iostream>
using namespace std;
class Parent{
    protected:
    int x;
    int y;
    public:
    Parent(int _x=0, int _y=0){
        x = _x;
        y = _y;
    }
    void setX(int _x){
        x =_x;
    }
    void setY(int _y){
        y =_y;
    }
    virtual int add(){
        return x+y;
    }
};
class Child: public Parent{
    int z;
    public: 
    Child(int _x, int _y,int _z):Parent(_x,_y),z(_z){

    }
    int add(){
        return Parent::add()+ z;
    }
};

int main() {
    Parent *p;
    Child c(1,5,9);
    p =&c;
    cout<<p->add()<<endl;
    return 0;
}
