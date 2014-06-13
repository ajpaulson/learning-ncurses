#include <ncurses.h>

int main(int argc, char *argv[])
{
        mmask_t mmask;

        initscr();
        refresh();

        if(NCURSES_MOUSE_VERSION > 0)
                addstr("This version of NCurses supports the mouse.\n");
        else
                addstr("This version of NCurses does not support the mouse.\n");
        refresh();

        mmask = mousemask(ALL_MOUSE_EVENTS, NULL);
        if(mmask == 0)
                addstr("Unable to access the mouse on this terminal.\n");
        else
                addstr("Mouse events can be captured.\n");
        refresh();
        getch();

        endwin();
        return 0;
}
