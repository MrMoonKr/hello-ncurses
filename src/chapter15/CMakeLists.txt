cmake_minimum_required( VERSION 3.30 )

project( Ncurses-Chapter15
    LANGUAGES C CXX
    VERSION 0.1.0
    DESCRIPTION ""
)


function( my_executable target_name )
    add_executable( ${target_name} ${target_name}.cpp )
    # target_link_libraries( ${target_name} ${CURSES_LIBRARIES} )
    target_link_libraries( ${target_name} PRIVATE unofficial::pdcurses::pdcurses )
endfunction()


my_executable( 15_01_cursset )
my_executable( 15_02_steps )
my_executable( 15_03_plus )
my_executable( 15_04_dumpwin )
my_executable( 15_05_undump )
my_executable( 15_06_wputfile )
my_executable( 15_07_wgetfile )

