#include <iostream>
////#include <ncurses/ncurses.h>
#include <curses.h>
//#include <ncursesw/ncurses.h>
#include <curses.h>

int main()
{
    //setlocale( LC_ALL, "ko_KR.utf8" ); // 이렇게 하면 커서의 위치가 이상해집니다.  
    initscr();
    setlocale( LC_ALL, "ko_KR.utf8" );

    //addstr("Goodbye, cruel world! \n");
    addstr( u8"Goodbye, 안녕 cruel world! \n" );
    //addstr( u8"안녕, 재미있는 abcdefg 프로그래밍 세상 !!!" );
    refresh();
    getch();

    endwin();
    return 0;
}
