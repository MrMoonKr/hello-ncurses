////#include <ncurses/ncurses.h>
#include <curses.h>
#include <curses.h>

int main()
{
    initscr();

    //if (NCURSES_MOUSE_VERSION > 0)
    if ( has_mouse() )
    {
        addstr( "Mouse functions available.\n" );
        mousemask( ALL_MOUSE_EVENTS, NULL );
        addstr( "Mouse Active" );
    }
    else
    {
        addstr( "Mouse functions unavailable.\n" );
    }
    refresh();
    getch();

    endwin();
    return 0;
}
