#include <iostream>
//#include <ncurses/ncurses.h>
#include <curses.h>

int main()
{
    char t1[] = "Shall I compare thee";
    char t2[] = " to a summer's day?";

    initscr();
    addstr(t1); /* add the first string */
    addstr(t2); /* add the second string */
    refresh();  /* display the result */
    getch();    /* wait */

    endwin();
    return 0;
}
