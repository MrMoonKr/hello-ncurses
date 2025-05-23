//#include <ncurses/ncurses.h>
#include <curses.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    char word[7];
    int x, w, r;

    //srandom((unsigned)time(NULL));
    srand((unsigned)time(NULL));
    word[6] = '\0';
    initscr();

    /* add some random 6-char words */
    for (x = 0; x < 200; x++)
    {
        for (w = 0; w < 6; w++)
        {
            //word[w] = (random() % 26) + 'a';
            word[w] = (rand() % 26) + 'a';
        }
        printw("%s\t", word);
    }
    addstr("\nPress Enter to dump the screen");
    refresh();
    getch();

    /* write the window */
    r = scr_dump("dump.win");
    if (r == ERR)
        addstr("Error writing window");
    else
        addstr("File written; press Enter\n");
    refresh();
    getch();

    endwin();
    return 0;
}
