#include <ncurses.h>

int main(int argc, char *argv[])
{
        int c, y, x, cmax;

        initscr();

        getmaxyx(stdscr, y, x);
        cmax = (x * y) / 5;
        for(c = 0; c < cmax; c++)
                addstr("blah ");
        refresh();
        getch();

        move(5, 20);    // setup the cursor
        clrtoeol();     // clear to the end of line
        refresh();      // don't forget this
        getch();

        endwin();
        return 0;
}
