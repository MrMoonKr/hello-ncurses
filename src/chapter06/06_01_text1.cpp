//#include <ncurses/ncurses.h>
#include <curses.h>

int main()
{
    char text1[] = "This is the first line\n";
    char text2[] = "Line two here\n";
    char text3[] = "The third line\n";
    char text4[] = "Fourth line here\n";
    char text5[] = "And the fifth line\n";

    initscr();

    addstr(text1);
    addstr(text3);
    addstr(text5);
    refresh();
    getch();

    endwin();
    return 0;
}
