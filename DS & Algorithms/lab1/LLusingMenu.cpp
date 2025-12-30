#include <iostream>
#include <ncurses.h>
#include <sstream>

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
    string display(){
        ostringstream out;
        out << "id: " << id
            << ", name: " << name
            << ", age: " << age;
        return out.str();
        // cout <<"id: "<<id<<", name: "<<name<<", age: "<<age<<endl;
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
    ~LinkedList(){
        deleteAll();
        cout<<"Delete the whole nodes of the linked list successfully";
    }   
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
     string display()  {
        ostringstream out;
        Node* tmp = head;

        while (tmp) {
            out << tmp->e.display();
            if (tmp->next) {
                out << "\n"; 
            }
            tmp = tmp->next;
        }
        return out.str();
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
    void insertAfterId(int id, Emp e){
        Node* t = searchById(id);
       if (!t || t == tail) {
             append(e);
        }
        else{
            Node *tmp = new Node(e);
            tmp->prev =t;
            tmp->next = t->next;
            t->next->prev = tmp;
            t->next = tmp;
        }
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
    void deleteAll(){
        Node* tmp = head;
        while (tmp)
        {
            Node* nextNode = tmp->next;
            delete tmp;
            tmp = nextNode;
        }
        head = tail = NULL;
    }
    

};

int main() {
    initscr();            
    noecho();             
    cbreak();             
    keypad(stdscr, TRUE); 
    curs_set(0);          

    start_color();        
    use_default_colors(); 

    init_pair(1, COLOR_BLACK, COLOR_GREEN); 
    init_pair(2, COLOR_WHITE, -1);          

    LinkedList ll;
    const char *names[] = {"New", "Display", "Count", "Exit"};
    int index = 0;
    int ch;
    int flag= 0;

    do {
        clear(); 

        for (int i = 0; i < 4; i++) {
            if (i == index) {
                attron(COLOR_PAIR(1));
                mvprintw(5 + i, 10, "%s", names[i]);
                attroff(COLOR_PAIR(1));
            } else {
                attron(COLOR_PAIR(2));
                mvprintw(5 + i, 10, "%s", names[i]);
                attroff(COLOR_PAIR(2));
            }
        }

        refresh();

        ch = getch();

        switch (ch) {
            case KEY_UP:
                index--;
                if (index < 0) index = 3; 
                break;

            case KEY_DOWN:
                index++;
                if (index > 3) index = 0;
                break;

            case 10:
                clear();
                switch(index){
                    case 0: { // New
                        int id, age;
                        char name[50];
                        echo(); curs_set(1);
                        mvprintw(10, 10, "Enter Employee Details:");
                        mvprintw(12, 10, "ID: "); refresh(); scanw((char*)"%d", &id);
                        mvprintw(13, 10, "Name: "); refresh(); scanw((char*)"%s", name);
                        mvprintw(14, 10, "Age: "); refresh(); scanw((char*)"%d", &age);
                        noecho(); curs_set(0);
                        
                        ll.append(Emp(id, string(name), age));
                        mvprintw(16, 10, "Employee added successfully.");
                        mvprintw(18, 10, "Press any key to return...");
                        getch();
                        break;
                    }
                    case 1: { // Display
                        string output = ll.display();
                        int row = 10;
                        if (output.empty()) {
                            mvprintw(row, 10, "List is empty.");
                        } else {
                            stringstream ss(output);
                            string line;
                            while(getline(ss, line)){
                                mvprintw(row++, 10, "%s", line.c_str());
                            }
                        }
                        mvprintw(row + 2, 10, "Press any key to return...");
                        getch();
                        break;
                    }
                    case 2: { // Count
                        int c = ll.count();
                        mvprintw(10, 10, "Total Employees: %d", c);
                        mvprintw(12, 10, "Press any key to return...");
                        getch();
                        break;
                    }
                    case 3: // Exit
                        flag = 1;
                        break;
                }
                break;
            case 27: 
                flag = 1;
                break;
        }
    }while(flag==0);

    endwin(); 
    return 0;
}
