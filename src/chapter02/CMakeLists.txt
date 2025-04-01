cmake_minimum_required( VERSION 3.30 )

project( Ncurses-Chapter02
    LANGUAGES C CXX
    VERSION 0.1.0
    DESCRIPTION ""
)

add_executable( 02_01_skeleton 02_01_skeleton.cpp )
# target_link_libraries( 02_01_skeleton ${CURSES_LIBRARIES} )
target_link_libraries( 02_01_skeleton PRIVATE unofficial::pdcurses::pdcurses )

add_executable( 02_02_add 02_02_add.cpp )
# target_link_libraries( 02_02_add ${CURSES_LIBRARIES} )
target_link_libraries( 02_02_add PRIVATE unofficial::pdcurses::pdcurses )

add_executable( 02_03_add 02_03_add.cpp )
# target_link_libraries( 02_03_add ${CURSES_LIBRARIES} )
target_link_libraries( 02_03_add PRIVATE unofficial::pdcurses::pdcurses )

add_executable( 02_04_add 02_04_add.cpp )
# target_link_libraries( 02_04_add ${CURSES_LIBRARIES} )
target_link_libraries( 02_04_add PRIVATE unofficial::pdcurses::pdcurses )

add_executable( 02_05_yoda 02_05_yoda.cpp )
# target_link_libraries( 02_05_yoda ${CURSES_LIBRARIES} )
target_link_libraries( 02_05_yoda PRIVATE unofficial::pdcurses::pdcurses )

add_executable( 02_06_typewriter 02_06_typewriter.cpp )
# target_link_libraries( 02_06_typewriter ${CURSES_LIBRARIES} )
target_link_libraries( 02_06_typewriter PRIVATE unofficial::pdcurses::pdcurses )

add_executable( 02_07_yourname 02_07_yourname.cpp )
# target_link_libraries( 02_07_yourname ${CURSES_LIBRARIES} )
target_link_libraries( 02_07_yourname PRIVATE unofficial::pdcurses::pdcurses )

add_executable( 02_08_sushi 02_08_sushi.cpp )
# target_link_libraries( 02_08_sushi ${CURSES_LIBRARIES} )
target_link_libraries( 02_08_sushi PRIVATE unofficial::pdcurses::pdcurses )

