#include <iostream>
using namespace std;
template<class b>
class Stack{
    int TOS=-1;
    b* arr;
    int size;
    public:
    ~Stack(){
        delete[] arr;
        cout<<"The stack destructed successfully";
    }
    Stack(int _size){
        size = _size;
        arr = new b[size];
    }
    Stack(Stack &s1){
        TOS = s1.TOS;
        size = s1.size;
        arr = new b[size];
        for(int i = 0;i<=TOS;i++){
            arr[i]= s1.arr[i];
        }
        cout<<"Data has been copied successfully"<<endl;
    }
    void push(b x){
        if(TOS<size -1){
            TOS++;
            arr[TOS] = x;
        }
        else{
            cout<<"The stack is full"<<endl;
        }
    }
    int pop(b &x){
        if(TOS ==-1){
            cout<<"The stack is empty"<<endl;
            return 0;
        }
        else{
            x =arr[TOS];
            TOS--;
            return 1;

        }
    }
};
template<class p>
void swapByAddress(p & x, p & y){
    p temp = x;
    x = y;
    y = temp;
}
int main() {
    float x = 10.5,z= 20.8;
    int y = 10,b=32;
    cout<<"Before swaping x= "<<x<<", z= "<<z<<endl;
    cout<<"Before swaping y= "<<y<<", b= "<<b<<endl;
    swapByAddress<float>(x,z);
    swapByAddress<int>(y,b);
    cout<<"after swaping x= "<<x<<", z= "<<z<<endl;
    cout<<"after swaping y= "<<y<<", b= "<<b<<endl;  
    
    Stack<char*> s1(5);
    s1.push("mohamed");
    s1.push("ahmed");
    char * name;
    s1.pop(name);
    cout<<name<<endl;
    s1.pop(name);
    cout<<name<<endl;
    
}
