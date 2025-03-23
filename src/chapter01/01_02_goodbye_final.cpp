#include <iostream>
#include <ncurses/ncurses.h>
//#include <ncursesw/ncurses.h>

int main()
{
    setlocale( LC_ALL, "ko_KR.utf8" );

    initscr();
    addstr("Goodbye, cruel world! \n");
    addstr( u8"안녕, 재미있는 abcdefg 프로그래밍 세상 !!!\n");
    refresh();
    getch();

    endwin();
    return 0;
}
