cmake_minimum_required( VERSION 3.30 )

project( Ncurses-Programming
    LANGUAGES C CXX
    VERSION 0.1.0
    DESCRIPTION ""
)


set( CURSES_NEED_NCURSES TRUE )
set( CURSES_NEED_WIDE TRUE )

include( FindCurses )
include_directories( ${CURSES_INCLUDE_DIR} )


#set( CURSES_NEED_NCURSES TRUE )
add_definitions( -DNCURSES_STATIC )

add_compile_options( -finput-charset=UTF-8 -fexec-charset=UTF-8 )

add_subdirectory( ./src/chapter00 )
add_subdirectory( ./src/chapter01 )
add_subdirectory( ./src/chapter02 )
add_subdirectory( ./src/chapter03 )
add_subdirectory( ./src/chapter04 )
add_subdirectory( ./src/chapter05 )
add_subdirectory( ./src/chapter06 )
add_subdirectory( ./src/chapter07 )
add_subdirectory( ./src/chapter08 )
add_subdirectory( ./src/chapter09 )
add_subdirectory( ./src/chapter10 )
add_subdirectory( ./src/chapter11 )
add_subdirectory( ./src/chapter12 )
add_subdirectory( ./src/chapter13 )
add_subdirectory( ./src/chapter14 )
add_subdirectory( ./src/chapter15 )

