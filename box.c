#include <ncurses.h>

int main(int argc, char *argv[])
{
        initscr();

        box(stdscr, '*', '*');
        refresh();
        getch();

        endwin();
        return 0;
}
