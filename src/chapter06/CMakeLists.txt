cmake_minimum_required( VERSION 3.30 )

project( Ncurses-Chapter06
    LANGUAGES C CXX
    VERSION 0.1.0
    DESCRIPTION ""
)


function( my_executable target_name )
    add_executable( ${target_name} ${target_name}.cpp )
    # target_link_libraries( ${target_name} ${CURSES_LIBRARIES} )
    target_link_libraries( ${target_name} PRIVATE unofficial::pdcurses::pdcurses )
endfunction()


my_executable( 06_01_text1 )
my_executable( 06_02_text2 )
my_executable( 06_03_text3 )
my_executable( 06_04_text4 )
my_executable( 06_05_marquee1 )
my_executable( 06_06_marquee2 )
my_executable( 06_07_text5 )
my_executable( 06_08_text6 )
my_executable( 06_09_text7 )
my_executable( 06_10_cat )
my_executable( 06_11_insdel )

