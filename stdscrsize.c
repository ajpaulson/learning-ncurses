#include <ncurses.h>

int main(int argc, char *argv[])
{
        initscr();

        printw("Window size is %d rows, %d columns.\n", LINES, COLS);
        refresh();
        getch();

        endwin();
        return 0;
}
