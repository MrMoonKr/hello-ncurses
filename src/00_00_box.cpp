#include <iostream>
#include <ncurses/ncurses.h>

int main()
{
    initscr();  // start ncurses

    box( stdscr, '*', '*' );
    refresh();

    getch();    // blocking

    endwin();   // clean-up ncurses
    return 0;
}
