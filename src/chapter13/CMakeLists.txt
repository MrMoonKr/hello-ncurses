cmake_minimum_required( VERSION 3.30 )

project( Ncurses-Chapter13
    LANGUAGES C CXX
    VERSION 0.1.0
    DESCRIPTION ""
)


function( my_executable target_name )
    add_executable( ${target_name} ${target_name}.cpp )
    # target_link_libraries( ${target_name} ${CURSES_LIBRARIES} )
    target_link_libraries( ${target_name} PRIVATE unofficial::pdcurses::pdcurses )
endfunction()


my_executable( 13_01_newpad1 )
my_executable( 13_02_newpad2 )
my_executable( 13_03_sonofpad )

