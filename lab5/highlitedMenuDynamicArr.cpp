#include <iostream>
#include <ncurses.h>



using namespace std;
struct employee{
    char name[10]={"\0"};
    int age;
    int salary;
};
int size;
void printEmployesDetails(employee emp[]);
int main() {
    initscr();            // Start ncurses mode
    noecho();             // Don't echo keypresses
    cbreak();             // Disable line buffering
    keypad(stdscr, TRUE); // Enable arrow keys
    curs_set(0);          // Hide cursor

    start_color();        // Enable color support
    use_default_colors(); // Allow transparent background

    // Define color pairs
    init_pair(1, COLOR_BLACK, COLOR_GREEN); // Highlighted
    init_pair(2, COLOR_WHITE, -1);          // Normal text

    
    cout << "Enter number of employees: ";
    cin >> size;
    const char *names[] = {"New", "Display", "Exit"};
    int index = 0;
    int ch;
    int flag= 0;


    employee* emp = new employee[size];


    do {
        clear(); // Clears the ncurses screen buffer

        // Print menu options
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

        // Read a key press
        ch = getch();

        switch (ch) {
            case KEY_UP:
                index--;
                if (index < 0) index = 2; // wrap to bottom
                break;

            case KEY_DOWN:
                index++;
                if (index > 2) index = 0; // wrap to top
                break;

            case 10: // Enter key
                clear();
                switch(index){
                    case 0:
                        int inputIndex;
                            clear();
                            mvprintw(10, 10, "Choose the index you want to add your data in (0 - %d):", size - 1);
                            refresh();
                            scanw("%d", &inputIndex);

                            // handle invalid index: show message, wait for key, return to main menu
                            if (inputIndex < 0 || inputIndex >= size) {
                                mvprintw(12, 10, "Invalid index. Allowed range: 0 - %d", size - 1);
                                mvprintw(13, 10, "Press any key to return to the menu...");
                                refresh();
                                getch();
                                break; // back to menu (no looping here)
                            }

                            if(emp[inputIndex].name[0] == '\0')
                            {
                                 mvprintw(2, 5, "Enter data for employee");
                                 mvprintw(4, 5, "Name: ");
                                 refresh();
                                 scanw("%9s", emp[inputIndex].name); // limit to avoid overflow
                                 mvprintw(5, 5, "Age: ");
                                 refresh();
                                 scanw("%d", &emp[inputIndex].age);
                                 mvprintw(6, 5, "Salary: ");
                                 refresh();
                                 scanw("%d", &emp[inputIndex].salary);
                            }
                            else{
                                mvprintw(2, 2, "Sorry this index used");
                            }
                       mvprintw(20, 5, "Press any key to return to menu...");
                       refresh();
                       getch();
                       break;
                    case 1:
                        printEmployesDetails(emp);
                        break;
                    case 2:
                        flag =1;
                        endwin();
                        delete[] emp;
                        return 0;
                        break;
                }
                break;
            case 27: // Esc key
                flag =1;
                endwin();
                delete[] emp;
                return 0;
        }
    }while(flag==0);

    endwin(); // End ncurses mode
    return 0;
}
void printEmployesDetails(employee emp[]) {
    clear(); // clear screen before printing
    mvprintw(1, 5, "=== Employee List ===");
    int printed = 0;
    int row = 3;

    for (int i = 0; i < size; i++) {
        // Check if name is empty (uninitialized)
        if (emp[i].name[0] == '\0') {
            continue; // skip empty entries
        }

        mvprintw(row, 5, "Name: %-10s | Age: %2d | Salary: %.df",
                 emp[i].name, emp[i].age, emp[i].salary);
        row++;
        printed++;
    }

    if (printed == 0) {
        mvprintw(row, 5, "No employee records found!");
    }

    mvprintw(row + 2, 5, "Press any key to return...");
    refresh();
    getch();
}