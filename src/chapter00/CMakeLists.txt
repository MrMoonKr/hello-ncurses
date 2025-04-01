cmake_minimum_required( VERSION 3.30 )

project( Ncurses-Chapter00
    LANGUAGES C CXX
    VERSION 0.1.0
    DESCRIPTION ""
)

add_executable( 00_00_box 00_00_box.cpp )
# target_link_libraries( 00_00_box ${CURSES_LIBRARIES} )
target_link_libraries( 00_00_box PRIVATE unofficial::pdcurses::pdcurses )

add_executable( 00_01_ncurses_version 00_01_ncurses_version.cpp )
# target_link_libraries( 00_01_ncurses_version ${CURSES_LIBRARIES} )
target_link_libraries( 00_01_ncurses_version PRIVATE unofficial::pdcurses::pdcurses )
