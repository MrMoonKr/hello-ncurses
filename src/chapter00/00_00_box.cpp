#include <iostream>
//#include <ncurses/ncurses.h>
#include <curses.h>   // install pdcurses with vcpkg in Windows

int main()
{
    initscr();   // start ncurses

    box( stdscr, '*', '*' );
    refresh();

    getch();   // blocking

    endwin();   // clean-up ncurses
    return 0;
}
