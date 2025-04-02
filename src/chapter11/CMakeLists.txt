cmake_minimum_required( VERSION 3.30 )

project( Ncurses-Chapter11
    LANGUAGES C CXX
    VERSION 0.1.0
    DESCRIPTION ""
)


function( my_executable target_name )
    add_executable( ${target_name} ${target_name}.cpp )
    # target_link_libraries( ${target_name} ${CURSES_LIBRARIES} )
    target_link_libraries( ${target_name} PRIVATE unofficial::pdcurses::pdcurses )
endfunction()


my_executable( 11_01_overwrite1 )
my_executable( 11_02_overwrite2 )
my_executable( 11_03_overlay )
my_executable( 11_04_copywin )
my_executable( 11_05_clobber )
my_executable( 11_06_dup )
my_executable( 11_07_movewin )

