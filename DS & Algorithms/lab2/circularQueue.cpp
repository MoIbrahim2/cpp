#include <iostream>
using namespace std;
class CircularQueue{
    int rear;
    int front;
    int size;
    int* arr;
    public:
    CircularQueue(int _size =5){
        rear = front = -1;
        size = _size;
        arr = new int[size];
    }
    int isEmpty(){
        return rear == -1;
    }
    int isFull(){
        return (rear+1)%size == front;
    }
    void enqueue(int data){
        if(isFull()){
            return;
        }
        if(rear == -1){
            rear = front = 0;
        }
        else{
            rear = (rear + 1)% size;
        }
        arr[rear] = data;
    }
    int dequeue(int &dequeuVar){
        if(isEmpty()){
            return 0;
        }
        dequeuVar = arr[front];
        if(front == rear){
            front = rear = -1;
        }
        else{
            front = (front +1)% size;
        }
        return 1;
    }
};
int main(){
    CircularQueue q1(5);
    int x;
    q1.enqueue(10);  
    q1.enqueue(20);  
    q1.enqueue(30);  
    q1.enqueue(40);  
    q1.enqueue(50);  
    q1.enqueue(60);  
    q1.dequeue(x);
    cout<<x<<endl;
    q1.dequeue(x);
    cout<<x<<endl;
    q1.dequeue(x);
    cout<<x<<endl;
    q1.dequeue(x);
    cout<<x<<endl;
    q1.dequeue(x);    
    cout<<x<<endl;
}