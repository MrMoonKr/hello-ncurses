cmake_minimum_required( VERSION 3.30 )

project( Ncurses-Chapter09
    LANGUAGES C CXX
    VERSION 0.1.0
    DESCRIPTION ""
)


function( my_executable target_name )
    add_executable( ${target_name} ${target_name}.cpp )
    target_link_libraries( ${target_name} ${CURSES_LIBRARIES} )
endfunction()


my_executable( 09_01_anotherwin )
my_executable( 09_02_switch )
my_executable( 09_03_switchback )
my_executable( 09_04_touch )
my_executable( 09_05_halfpint )
my_executable( 09_06_quad )
my_executable( 09_07_twowin )
my_executable( 09_08_border )
my_executable( 09_09_aborder )
my_executable( 09_10_box )
my_executable( 09_11_quadborders )

