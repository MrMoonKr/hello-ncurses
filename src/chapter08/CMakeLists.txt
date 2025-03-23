cmake_minimum_required( VERSION 3.30 )

project( Ncurses-Chapter08
    LANGUAGES C CXX
    VERSION 0.1.0
    DESCRIPTION ""
)


function( my_executable target_name )
    add_executable( ${target_name} ${target_name}.cpp )
    target_link_libraries( ${target_name} ${CURSES_LIBRARIES} )
endfunction()


my_executable( 08_01_yourname )
my_executable( 08_02_keywait1 )
my_executable( 08_03_keywait2 )
my_executable( 08_04_secretkey )
my_executable( 08_05_kbhit )
my_executable( 08_06_arrowkeys )
my_executable( 08_07_greetings )
my_executable( 08_08_urpwd )
my_executable( 08_09_flush )

