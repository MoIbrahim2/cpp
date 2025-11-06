#include <iostream>
using namespace std;
class Stack{
    int TOS=-1;
    int* arr;
    int size;
    public:
    ~Stack(){
        delete[] arr;
        cout<<"The stack destructed successfully"<<endl;
    }
    Stack(int _size){
        size = _size;
        arr = new int[size];
    }
    Stack(const Stack &s1){
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
    Stack& operator =(Stack & s1){
        TOS = s1.TOS;
        size = s1.size;
        arr = new int[size];
        for(int i = 0;i<=TOS;i++){
            arr[i]= s1.arr[i];
        }
        return *this;
    }
    Stack operator +(Stack & s1){
        Stack s2(size+s1.size);
        s2.TOS = TOS+ s1.TOS +1;
        s2.arr = new int[s2.size];
        for(int i = 0;i<=TOS;i++){
            s2.arr[i]=arr[i];
        }
        for(int i =0;i<=s2.TOS;i++){
             s2.arr[TOS+1+i]=s1.arr[i];
        }
        return s2;
    }

};

int main() {
   Stack s1(5);
   s1.push(10);
   s1.push(20);
   s1.push(30);
   s1.push(40);
   Stack s2(5);
   s2 = s1;
   int x;

   s2.pop(x);
   cout<<endl<<x<<endl;

   Stack s3(5);
   s3.push(70);
   s3.push(80);
    Stack s4 = s1 + s3;
    while(s4.pop(x)){
        cout<<x<<endl;
    }
    return 0;
}
