#include <ncurses.h>
#include <stdlib.h>

void bomb(char *msg);

int main(int argc, char *argv[])
{
        initscr();

        // first test for colour ability of the term
        if(!has_colors())
                bomb("Your terminal is shit.\n");

        // next attempt to initialise curses colours
        if(start_color() != OK)
                bomb("Unable to start colours.\n");

        // colours are ok, continue
        printw("Colours have been properly initialised.\n");
        printw("Congratulations!\n");
        printw("NCurses reports that you can use %d colours,\n", COLORS);
        printw("and %d colour pairs.", COLOR_PAIRS);
        refresh();
        getch();

        endwin();
        return 0;
}

void bomb(char *msg)
{
        endwin();
        puts(msg);
        exit(1);
}
