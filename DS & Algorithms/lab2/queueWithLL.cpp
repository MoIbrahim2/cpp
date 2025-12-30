#include <iostream>
using namespace std;
class Node{
     public:
    int data;
    Node * next;
   
    Node(){
        next = NULL;
    }
    Node(int _data){
        data =_data;
        next = NULL;
    }
};
class QueueWithLL{
    Node* rear;
    Node* front;
    public:
    QueueWithLL(){
        rear = front = NULL;
    }
    int isEmpty(){
        return rear == NULL;
    }
    int isFull(){
        Node * tmp = new Node();
        return tmp ==NULL;
    }
    void enqueue(int data){
        if(isFull()){
            return;
        }
        Node * tmp = new Node(data);
        if(rear == NULL){
            rear = front = tmp;
        }
        else{
          rear->next = tmp;
            rear = tmp;
        }
    }
    int dequeue(int &dequeuVar){
        if(isEmpty()){
            return 0;
        }
        dequeuVar = front->data;
        if(front == rear){
            delete front;
            front = rear = NULL;
        }
        else{
           Node* nextNode = front->next;
           delete front;
           front = nextNode;
        }
        return 1;
    }
};
int main(){
    QueueWithLL q1;
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