//#include <ncurses/ncurses.h>
#include <curses.h>

int main()
{
    initscr();

    addch('c');
    addch(A_BOLD | 'a');
    addch(A_REVERSE | 't');
    refresh();
    getch();

    endwin();
    return 0;
}
