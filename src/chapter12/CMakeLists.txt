cmake_minimum_required( VERSION 3.30 )

project( Ncurses-Chapter12
    LANGUAGES C CXX
    VERSION 0.1.0
    DESCRIPTION ""
)


function( my_executable target_name )
    add_executable( ${target_name} ${target_name}.cpp )
    target_link_libraries( ${target_name} ${CURSES_LIBRARIES} )
endfunction()


my_executable( 12_01_scrolling1 )
my_executable( 12_02_scrolling2 )
my_executable( 12_03_scrollsub )
my_executable( 12_04_scroll )
my_executable( 12_05_scrup3 )
my_executable( 12_06_scrollreg )

