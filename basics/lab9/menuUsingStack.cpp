#include <iostream>
#include <ncurses.h>

using namespace std;
struct employee{
    char name[10]={"\0"};
    int age;
    int salary;
};
class Stack{
    int TOS = -1;
    employee* arr;
    int size;
public:
    Stack(int _size) {
        size = _size;
        arr = new employee[size];
        TOS = -1;
    }
    ~Stack() {
        delete[] arr;
    }

    
    
    int push(const employee &e) {
        if (isFull()) return 0;
        TOS++;
        arr[TOS] = e;
        return 1;
    }

    
    int pop(employee &out) {
        if (isEmpty()) return 0;
        out = arr[TOS];
        TOS--;
        return 1;
    }

    
    int peek(employee &out) const {
        if (isEmpty()) return 0;
        out = arr[TOS];
        return 1;
    }

    int isFull() const { return TOS >= size - 1? 1:0; }
    int isEmpty() const { return TOS == -1? 1:0; }
};
int size;
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

    
    cout << "Enter number of employees: ";
    cin >> size;
    const char *names[] = {"New", "Display", "Exit"};
    int index = 0;
    int ch;
    int flag= 0;

    int x;
    Stack* s1 = new Stack(size);


    do {
        clear(); 

       
        for (int i = 0; i < 3; i++) {
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
                if (index < 0) index = 2; 
                break;

            case KEY_DOWN:
                index++;
                if (index > 2) index = 0;
                break;

            case 10:
                clear();
                switch(index){
                    case 0: {
                       
                        if (s1->isFull()) {
                            mvprintw(10, 10, "Stack is full. Cannot add more employees.");
                            mvprintw(12, 10, "Press any key to return to menu...");
                            refresh(); getch();
                            break;
                        }

                        employee e;
                        
                        echo(); curs_set(1);
                        mvprintw(10, 10, "Enter data for employee");
                        mvprintw(12, 10, "Name: ");
                        refresh();
                        scanw("%9s", e.name);

                        mvprintw(13, 10, "Age: ");
                        refresh();
                        scanw("%d", &e.age);

                        mvprintw(14, 10, "Salary: ");
                        refresh();
                        scanw("%d", &e.salary);
                        noecho(); curs_set(0);
                        s1->push(e);
                        mvprintw(16, 10, "Employee pushed successfully.");

                        mvprintw(18, 10, "Press any key to return to menu...");
                        refresh(); getch();
                        break;
                    }
                    case 1: {
                        employee eOut;
                        if (s1->isEmpty() == 1) {
                            mvprintw(10, 10, "No employee records to display (stack is empty).");
                            mvprintw(12, 10, "Press any key to return to menu...");
                            refresh(); getch();
                        } else {
                            s1->pop(eOut);
                            mvprintw(10, 10, "Popped employee:");
                            mvprintw(12, 10, "Name: %s", eOut.name);
                            mvprintw(13, 10, "Age: %d", eOut.age);
                            mvprintw(14, 10, "Salary: %d", eOut.salary);
                            mvprintw(16, 10, "Press any key to return to menu...");
                            refresh(); getch();
                        }
                        break;
                    }
                    case 2:
                        flag =1;
                        endwin();
                        return 0;
                        delete s1;
                        break;
                }
                break;
            case 27: 
                flag =1;
                endwin();
                delete s1;
                return 0;
        }
    }while(flag==0);

    endwin(); 
    return 0;
}
