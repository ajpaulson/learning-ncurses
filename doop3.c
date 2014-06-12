#include <ncurses.h>

int main(int argc, char *argv[])
{
        WINDOW *top, *bottom;
        int maxx, maxy, halfx, halfy, rc;
        char text1[] = "Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.";
        char text2[] = "Four score and seven years ago our fathers brought forth on this continent, a new nation, conceived in Liberty, and dedicated to the proposition that all men are created equal.";

        initscr();
        refresh();

        /* get window sizes */
        getmaxyx(stdscr, maxy, maxx);
        halfy = maxy >> 1;
        halfx = maxx >> 1;

        /* build windows */
        top = newwin(halfy, maxx, 0, 0);     // remember to check for errors!
        bottom = newwin(halfy, halfx, halfy, halfx);

        waddstr(top, text1);          // add text to stdscr and wait
        wrefresh(top);
        waddstr(bottom, text2);
        wrefresh(bottom);

        /* wait for keypress */
        getch();

        /* copy text from top to bottom */
        rc = copywin(top, bottom, 0, 0, 0, 0, 4, 12, FALSE);
        wrefresh(bottom);
        getch();

        endwin();
        return 0;
}
