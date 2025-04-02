////#include <ncurses/ncurses.h>
#include <curses.h>
#include <curses.h>

int main()
{
    MEVENT mort;
    int ch;

    initscr();
    noecho();
    keypad(stdscr, TRUE);

    mousemask( ALL_MOUSE_EVENTS | REPORT_MOUSE_POSITION, NULL );
    mouseinterval( 0 );

    addstr("Click the mouse around the screen\n");
    addstr("Press Enter to stop");
    while (1)
    {
        ch = getch();
        if ( ch == KEY_MOUSE )
        {
            //getmouse(&mort);
            MEVENT event;
            if ( nc_getmouse( &event ) == OK )
            {
                if (event.bstate & BUTTON1_PRESSED)
                {
                    move(event.y, event.x);
                    addstr("X");
                }
                else if (event.bstate & BUTTON1_RELEASED)
                {
                    move(event.y, event.x);
                    addstr("O");
                }

                move( 2, 0 );
                //clrtoeol();
                printw( "y=%2d\tx=%2d state : 0x%08x", event.y, event.x, event.bstate );
                refresh();

                if ( event.bstate & REPORT_MOUSE_POSITION ) 
                {
                    mvprintw( 4, 0, "mouse move : (%d, %d)", event.x, event.y );
                    refresh();
                }

                continue;

            }

            // move(2, 0);
            // clrtoeol();
            // printw("y=%2d\tx=%2d", mort.y, mort.x);
            // refresh();
            // continue;
        }
        if (ch == '\n' || ch == 'q' )
            break;
    }

    endwin();
    return 0;
}
