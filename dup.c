#include <ncurses.h>

int main(int argc, char *argv[])
{
        WINDOW *fred, *barney;

        initscr();
        refresh();

        /* build a window and wait */
        fred = newwin(0, 0, 0, 0);
        waddstr(fred, "This is the original window, Fred.\n");
        wrefresh(fred);
        getch();

        /* create and show barney */
        barney = dupwin(fred);
        waddstr(barney, "This is the Barney copy of window Fred.\n");
        wrefresh(barney);
        getch();

        /* go back to fred */
        waddstr(fred, "Nice to see you again!\n");
        wrefresh(fred);
        getch();

        /* one more time to barney */
        waddstr(barney, "And Barney says 'Hi' as well.\n");
        touchwin(barney);
        wrefresh(barney);

        endwin();
        return 0;
}
