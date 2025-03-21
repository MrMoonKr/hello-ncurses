cmake_minimum_required( VERSION 3.30 )

project( Ncurses-Chapter00
    LANGUAGES C CXX
    VERSION 0.1.0
    DESCRIPTION ""
)

add_executable( 00_00_box 00_00_box.cpp )
target_link_libraries( 00_00_box ${CURSES_LIBRARIES} )

add_executable( 00_01_ncurses_version 00_01_ncurses_version.cpp )
target_link_libraries( 00_01_ncurses_version ${CURSES_LIBRARIES} )
