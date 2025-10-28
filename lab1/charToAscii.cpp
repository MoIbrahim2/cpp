#include <iostream>
#include <ncurses.h>
using namespace std;

int main() {
    initscr();      // start ncurses
    cbreak();       // disable line buffering
    noecho();       // don't echo typed chars

    mvprintw(0, 0, "Press any key: ");
    refresh();

    int ch = getch();   // read one keypress (no Enter needed)

    endwin(); // restore terminal before using std::cout

    cout << "You pressed: '" << static_cast<char>(ch) << "'\n";
    cout << "The ASCII value is: " << ch << endl;

    return 0;
}