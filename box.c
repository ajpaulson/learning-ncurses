#include <ncurses.h>

int main(int argc, char *argv[])
{
        initscr();
        refresh();

        box(stdscr, '*', '*');
        refresh();
        getch();

        endwin();
        return 0;
}
