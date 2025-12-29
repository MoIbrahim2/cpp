#include <iostream>
using namespace std;

class Emp{
     public:
        int id;
        string name;
        int age;
    Emp(){}
     Emp(int _id,string _name,int _age){
        id = _id;
        name = _name;
        age = _age;
    }
    void display(){
        cout <<"id: "<<id<<", name: "<<name<<", age: "<<age<<endl;
    }
};
class Node{
    public:
        Emp e;
        Node* prev;
        Node* next;
    Node(){
        prev=NULL;
        next=NULL;
    }
    Node(Emp _e){
        e = _e;
        prev = NULL;
        next = NULL;
    }
};
class LinkedList{
   
    public:
    Node* head;
    Node* tail;

    LinkedList(){
        head=tail=NULL;
    }
    void append(Emp e){
        Node * tmp = new Node(e);
        if (head == NULL){
            head = tail =tmp;
        }
        else{
            tail->next = tmp;
            tmp->prev = tail;
            tail = tmp;
        }
    }
    void display(){
        Node * tmp = head;
        while(tmp){
            (tmp->e).display();
            tmp = tmp->next;
        }
    }
    int count(){
        int count = 0;
        Node * tmp = head;
        while(tmp){
            count ++;
            tmp = tmp->next;
        }
        return count;
    }
   
    Emp searchByIdP(int id){
           Node * tmp = head;
            while(tmp){
            if((tmp->e).id == id)
                return tmp->e;
            tmp = tmp->next;
        }
        Emp e;
        e.id = -1;
        return e ;
    }
    void deleteById(int id){
        Node* tmp = searchById(id);
            if(!tmp) return;
            if(head==tail )
                head = tail =NULL;
            else if (tmp == head)
            {
                    head = head->next;
                    head->prev = NULL;
            }
            else if (tail ==tmp)
            {
                tail->prev->next = NULL;
                tail = tail->prev;
            }
            else{
                tmp->next->prev = tmp->prev;
                tmp->prev->next = tmp->next;
                tmp->prev =NULL;
                tmp->next = NULL;
            }
        delete tmp;
    }
    private:
    Node* searchById(int id){
     
        Node * tmp = head;
        while(tmp){
            if((tmp->e).id == id)
                return tmp;
            tmp = tmp->next;
        }
        return NULL;
    }

};

int main() {
    Emp e1(1,"ahmed",22);
    Emp e2(2,"omar",25);
    LinkedList l;
    l.append(e1);
    l.append(e2);
    // l.display();
    l.deleteById(10);
  (l.searchByIdP(1)).display();

    return 0;
}
