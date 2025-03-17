cmake_minimum_required( VERSION 3.30 )

project( Ncurses-Programming
    LANGUAGES C CXX
    VERSION 0.1.0
    DESCRIPTION ""
)

include( FindCurses )
include_directories( ${CURSES_INCLUDE_DIR} )

set( CURSES_NEED_NCURSES TRUE )
add_definitions( -DNCURSES_STATIC )


add_executable( 00_00_box ./src/00_00_box.cpp )
target_link_libraries( 00_00_box ${CURSES_LIBRARIES} )

