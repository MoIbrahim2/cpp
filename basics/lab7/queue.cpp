#include <iostream>
using namespace std;

class Queue{
    
    int* arr;
    int size;
    int count=0;
    int quableIndex=0;
    int dequableIndex=0;

    public:
    ~Queue() { delete[] arr; }
    Queue(int _size){
        size = _size;
        arr = new int[size];
    }
    void enqueu(int x){
        if(count == size){
            cout<<"The queue is full"<<endl;
        }
        else{
            arr[quableIndex] = x;
            quableIndex= quableIndex==size-1? 0 :quableIndex+1;
            count++;
        }
    }
    int dequeu(int& x){
        if(count==0){
            cout<<"The queue is empty"<<endl;
            return 0;
        }
        else{
            x =arr[dequableIndex];
            dequableIndex= dequableIndex==size-1? 0 :dequableIndex+1;
            count--;
            return 1;
        }
    }
};

int main() {
   int y;
   Queue q1(5);
   q1.enqueu(1);
   q1.enqueu(2);
   q1.enqueu(3);
   q1.enqueu(4);
   q1.enqueu(5);
   q1.enqueu(6);

    q1.dequeu(y);
    cout<<y<<endl;
    q1.dequeu(y);
    cout<<y<<endl;
    q1.dequeu(y);
    cout<<y<<endl;
    q1.dequeu(y);
    cout<<y<<endl;
    q1.dequeu(y);
    cout<<y<<endl;
    q1.dequeu(y);
    return 0;
}
