//#include <ncurses/ncurses.h>
#include <curses.h>

int main()
{
    initscr();

    printw("Window is %d rows, %d columns.\n",
           LINES, COLS);
    refresh();
    getch();

    endwin();
    return 0;
}
