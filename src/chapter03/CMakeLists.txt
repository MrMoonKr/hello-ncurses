cmake_minimum_required( VERSION 3.30 )

project( Ncurses-Chapter03
    LANGUAGES C CXX
    VERSION 0.1.0
    DESCRIPTION ""
)

add_executable( 03_01_twinkle 03_01_twinkle.cpp )
target_link_libraries( 03_01_twinkle ${CURSES_LIBRARIES} )

add_executable( 03_02_annoy 03_02_annoy.cpp )
target_link_libraries( 03_02_annoy ${CURSES_LIBRARIES} )

add_executable( 03_03_colortest 03_03_colortest.cpp )
target_link_libraries( 03_03_colortest ${CURSES_LIBRARIES} )

add_executable( 03_04_yellowred 03_04_yellowred.cpp )
target_link_libraries( 03_04_yellowred ${CURSES_LIBRARIES} )

add_executable( 03_05_colorful 03_05_colorful.cpp )
target_link_libraries( 03_05_colorful ${CURSES_LIBRARIES} )

add_executable( 03_06_pink 03_06_pink.cpp )
target_link_libraries( 03_06_pink ${CURSES_LIBRARIES} )

add_executable( 03_07_bgcolor1 03_07_bgcolor1.cpp )
target_link_libraries( 03_07_bgcolor1 ${CURSES_LIBRARIES} )

add_executable( 03_08_bgcolor2 03_08_bgcolor2.cpp )
target_link_libraries( 03_08_bgcolor2 ${CURSES_LIBRARIES} )

add_executable( 03_09_notice 03_09_notice.cpp )
target_link_libraries( 03_09_notice ${CURSES_LIBRARIES} )
