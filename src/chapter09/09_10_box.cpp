//#include <ncurses/ncurses.h>
#include <curses.h>

int main()
{
    initscr();

    box(stdscr, 0, 0);
    refresh();
    getch();

    endwin();
    return 0;
}
