cmake_minimum_required( VERSION 3.30 )

project( Ncurses-Chapter07
    LANGUAGES C CXX
    VERSION 0.1.0
    DESCRIPTION ""
)


function( my_executable target_name )
    add_executable( ${target_name} ${target_name}.cpp )
    # target_link_libraries( ${target_name} ${CURSES_LIBRARIES} )
    target_link_libraries( ${target_name} PRIVATE unofficial::pdcurses::pdcurses )
endfunction()


my_executable( 07_01_cls )
my_executable( 07_02_clearline )
my_executable( 07_03_clearbot )

