#include <ncurses.h>

#include "main.hpp"

#include "include/core/core.hpp"
#include "include/core/log.hpp"

#include "include/core/init.cpp"
#include "include/core/getopt.cpp"
#include "include/snake/setup.cpp"

// #include "include/snake/sna"
#include "include/game/game.cpp"


int main(int argc, char** argv) {
	execname = *argv;

	init();
	process_argv(argc, argv);
	setup();
	game();




	log_trace("Example trace");
	log_debug("Example debug");
	log_info("Example info");
	log_warn("Example warning");
	log_error("Example error");
	log_fatal("Example fatal");


	touchwin(stdscr);
	wrefresh(window.stdscr);
	getch();
	
	return 0;
}
