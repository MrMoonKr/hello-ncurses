cmake_minimum_required( VERSION 3.30 )

project( Ncurses-Chapter04
    LANGUAGES C CXX
    VERSION 0.1.0
    DESCRIPTION ""
)


function( my_executable target_name )
    # cmake_parse_arguments( ARG "" "" "SOURCES" ${ARGN} )

    # if (NOT ARG_SOURCES)
    #     message(FATAL_ERROR "add_curses_executable: No source files specified for target '${target_name}'")
    # endif()

    # find_package(Curses REQUIRED)
    # include_directories(${CURSES_INCLUDE_DIR})

    # add_executable( ${target_name} ${ARG_SOURCES} )
    add_executable( ${target_name} ${target_name}.cpp )
    target_link_libraries( ${target_name} ${CURSES_LIBRARIES} )
endfunction()


my_executable( 04_01_charattrib )
my_executable( 04_02_changechar )
my_executable( 04_03_attrtest )
my_executable( 04_04_pi )
my_executable( 04_05_acslist )
my_executable( 04_06_acsstring )
my_executable( 04_07_abox )
my_executable( 04_08_chtypestring )
my_executable( 04_09_addchstr )
my_executable( 04_10_boxarray )
my_executable( 04_11_unicode )
my_executable( 04_12_ustring )
