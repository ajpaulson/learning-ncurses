#include <ncurses.h>

int main(int argc, char *argv[])
{
        initscr();
        refresh();

        endwin();
        return 0;
}
