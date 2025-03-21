cmake_minimum_required( VERSION 3.30 )

project( Ncurses-Chapter01
    LANGUAGES C CXX
    VERSION 0.1.0
    DESCRIPTION ""
)

add_executable( 01_01_goodbye 01_01_goodbye.cpp )
target_link_libraries( 01_01_goodbye ${CURSES_LIBRARIES} )

add_executable( 01_02_goodbye_final 01_02_goodbye_final.cpp )
# target_link_libraries( 01_02_goodbye_final ${CURSES_LIBRARIES} )
target_link_libraries( 01_02_goodbye_final ${NCURSES_LINK_LIBRARIES} )
