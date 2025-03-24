cmake_minimum_required( VERSION 3.30 )

project( Ncurses-Chapter10
    LANGUAGES C CXX
    VERSION 0.1.0
    DESCRIPTION ""
)


function( my_executable target_name )
    add_executable( ${target_name} ${target_name}.cpp )
    target_link_libraries( ${target_name} ${CURSES_LIBRARIES} )
endfunction()


my_executable( 10_01_sub1 )
my_executable( 10_02_sub2 )
my_executable( 10_03_sub3 )
my_executable( 10_04_subsub )
my_executable( 10_05_delsub )

