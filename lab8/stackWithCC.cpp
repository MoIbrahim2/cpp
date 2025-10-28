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
    Stack(Stack &s1){
        TOS = s1.TOS;
        size = s1.size;
        arr = new int[size];
        for(int i = 0;i<=TOS;i++){
            arr[i]= s1.arr[i];
        }
        cout<<"Data has been copied successfully"<<endl;
    }
    void push(int x){
        if(TOS<size -1){
            TOS++;
            arr[TOS] = x;
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
    Stack s2(s1);
    s1.pop(y);
    cout<<y<<endl;
    s1.pop(y);
    cout<<y<<endl;
    s1.pop(y);
    cout<<y<<endl;
    s1.pop(y);
    cout<<y<<endl;
    s1.pop(y);
 
    s2.pop(y);
    cout<<y<<endl;
    s2.pop(y);
    cout<<y<<endl;
    s2.pop(y);
    cout<<y<<endl;
    
    return 0;
}
