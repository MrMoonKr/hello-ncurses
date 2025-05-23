//#include <ncurses/ncurses.h>
#include <curses.h>

int main()
{
    FILE *wfile;
    WINDOW *win;
    int r;

    initscr();
    start_color();
    init_pair(1, COLOR_WHITE, COLOR_BLUE);
    refresh();

    /* Crete and show window */
    win = newwin(3, 10, 7, 30);
    wbkgd(win, COLOR_PAIR(1));
    box(win, 0, 0);
    mvwaddstr(win, 1, 2, "Window");
    wrefresh(win);
    getch();

    /* open file */
    wfile = fopen("window.win", "w");
    if (wfile == NULL)
    {
        endwin();
        puts("File creation error");
        return 1;
    }

    /* write window data */
    r = putwin(win, wfile);
    if (r == ERR)
        addstr("Error writing window data");
    else
        addstr("Window data written");

    /* close file and update */
    fclose(wfile);
    refresh();
    getch();

    endwin();
    return 0;
}
