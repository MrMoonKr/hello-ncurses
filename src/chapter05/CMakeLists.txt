cmake_minimum_required( VERSION 3.30 )

project( Ncurses-Chapter05
    LANGUAGES C CXX
    VERSION 0.1.0
    DESCRIPTION ""
)


function( my_executable target_name )
    add_executable( ${target_name} ${target_name}.cpp )
    target_link_libraries( ${target_name} ${CURSES_LIBRARIES} )
endfunction()


my_executable( 05_01_screensize )
my_executable( 05_02_stdscrsize )
my_executable( 05_03_corners )
my_executable( 05_04_ctitle )
my_executable( 05_05_whereami )

