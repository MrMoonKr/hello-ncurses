cmake_minimum_required( VERSION 3.30 )

project( Ncurses-Chapter14
    LANGUAGES C CXX
    VERSION 0.1.0
    DESCRIPTION ""
)


function( my_executable target_name )
    add_executable( ${target_name} ${target_name}.cpp )
    # target_link_libraries( ${target_name} ${CURSES_LIBRARIES} )
    target_link_libraries( ${target_name} PRIVATE unofficial::pdcurses::pdcurses )
endfunction()


my_executable( 14_01_mousetest )
my_executable( 14_02_mspy )
my_executable( 14_03_clickput )
my_executable( 14_04_bclick )
my_executable( 14_05_mousemovement )
# add_executable( 14_05_mousemovement 14_05_mousemovement.cpp )
# target_link_libraries( 14_05_mousemovement pdcurses )

