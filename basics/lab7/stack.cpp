#include <iostream>
using namespace std;
class Stack{
    int TOS=-1;
    int* arr;
    int size;
    public:
    ~Stack(){
        delete[] arr;
        cout<<"The stack destructed successfully";
    }
    Stack(int _size){
        size = _size;
        arr = new int[size];
    }
    
    void push(int x){
        if(TOS<size -1){
            arr[TOS] = x;
            TOS++;
        }
        else{
            cout<<"The stack is full"<<endl;
        }
    }
    int pop(int &x){
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

int main() {
    int y;
    Stack s1(5);
    s1.push(2);
    s1.push(3);
    s1.push(5);
    s1.push(1);
    s1.pop(y);
    cout<<y<<endl;
    s1.pop(y);
    cout<<y<<endl;
    s1.pop(y);
    cout<<y<<endl;
    s1.pop(y);
    cout<<y<<endl;
    s1.pop(y);
    
    return 0;
}
