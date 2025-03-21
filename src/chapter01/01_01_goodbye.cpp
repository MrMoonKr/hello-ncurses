#include <iostream>
#include <ncurses/ncurses.h>

int main()
{
    initscr();
    addstr("Goodbye, cruel world!");

    // getch();
    endwin();
    return 0;
}
