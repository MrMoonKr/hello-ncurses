//#include <ncurses/ncurses.h>
#include <curses.h>

int main()
{
    int r;

    initscr();

    addstr("Press Enter to restore the screen");
    refresh();
    getch();

    /* restore the window */
    r = scr_restore("dump.win");
    if (r == ERR)
        addstr("Error reading window file\n");
    refresh();
    getch();

    endwin();
    return 0;
}
