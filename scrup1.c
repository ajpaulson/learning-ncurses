#include <ncurses.h>

int main(int argc, char *argv[])
{
        int maxy, maxx, y;

        initscr();
        refresh();

        getmaxyx(stdscr, maxy, maxx);
        scrollok(stdscr, TRUE);

        for(y = 0; y <= maxy; y++)
                mvprintw(y, 0, "This is boring text written to line %d.", y);
        refresh();
        getch();

        scroll(stdscr);
        refresh();
        getch();

        endwin();
        return 0;
}
