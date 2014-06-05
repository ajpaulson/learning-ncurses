#include <ncurses.h>

int main(int argc, char *argv[])
{
        initscr();
        addstr("Goodbye, cruel C programming!");
        refresh();
        getch();

        endwin();

        return 0;
}
