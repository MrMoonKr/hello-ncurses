#include <iostream>
//#include <ncurses/ncurses.h>
#include <curses.h>   // install pdcurses with vcpkg in Windows

int main()
{
    // printf( "Ncurses version %d.%d.%d\n",
    //         NCURSES_VERSION_MAJOR,
    //         NCURSES_VERSION_MINOR,
    //         NCURSES_VERSION_PATCH 
    // );
    
    printf( "curses version : %s \n", curses_version() );

    return 0;
}
