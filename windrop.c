#include <ncurses.h>

#define TSIZE 18

int main(int argc, char *argv[])
{
        WINDOW *b;
        int maxy, maxx, y, x;

        initscr();
        refresh();

        getmaxyx(stdscr, maxy, maxx);
        x = (maxx - TSIZE) >> 1;

        b = newwin(1, TSIZE, 0, x);
        waddstr(b, "I'm getting sick!");

        for(y = 1; y < maxy; y++)
        {
                mvwin(b, y, x);
                wrefresh(b);
                getch();
        }

        endwin();
        return 0;
}
