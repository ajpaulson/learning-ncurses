#include <ncurses.h>

int main(int argc, char *argv[])
{
        WINDOW *alpha;
        char text1[] = "Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.";
        char text2[] = "Four score and seven years ago our fathers brought forth on this continent, a new nation, conceived in Liberty, and dedicated to the proposition that all men are created equal.";

        initscr();
        refresh();

        /* build windows */
        alpha = newwin(0, 0, 0, 0);     // remember to check for errors!

        addstr(text1);          // add text to stdscr and wait
        refresh();
        getch();

        waddstr(alpha, text2);          // show win alpha and wait
        wrefresh(alpha);
        getch();

        /* copy text from one window to the other, non-destructively */
        overlay(stdscr, alpha);
        wrefresh(alpha);
        getch();

        endwin();
        return 0;
}
