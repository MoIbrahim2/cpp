#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * prev;
   
    Node(){
        prev = NULL;
    }
    Node(int _data){
        data =_data;
        prev = NULL;
    }
};
class stackWithLL{
    Node* tos;
    public:
    stackWithLL(){
       tos = NULL;
    }
    int isEmpty(){
        return tos == NULL;
    }
    int isFull(){
        Node * tmp = new Node();
        return tmp ==NULL;
    }
    void push(int data){
        if(isFull()){
            return;
        }
        Node * tmp = new Node(data);
        if(!tos){
            tos = tmp;
        }
        else{
          tmp->prev = tos;
          tos= tmp;
        }
    }
    
    int pop(int &dequeuVar){
        if(isEmpty()){
            return 0;
        }
        dequeuVar = tos->data;
        Node* prevNode = tos->prev;
        delete tos;
        tos = prevNode;
        return 1;
    }
};
int main(){
    stackWithLL s1;
    int x;
    s1.push(10);  
    s1.push(20);  
    s1.push(30);  
    s1.push(40);  
    s1.push(50);  
    s1.push(60);  
    s1.pop(x);
    cout<<x<<endl;
    s1.pop(x);
    cout<<x<<endl;
    s1.pop(x);
    cout<<x<<endl;
    s1.pop(x);
    cout<<x<<endl;
    s1.pop(x);    
    cout<<x<<endl;
    s1.pop(x);    
    cout<<x<<endl;
}