#include <ncurses.h>

int main(int argc, char *argv[])
{
        int rows, cols;

        initscr();
        getmaxyx(stdscr, rows, cols);
        rows--;
        cols--;

        mvaddch(0, 0, '*');     // UL
        refresh();
        napms(500);             // pause

        mvaddch(0, cols, '*');     // UR
        refresh();
        napms(500);             // pause

        mvaddch(rows, 0, '*');     // LL
        refresh();
        napms(500);             // pause

        mvaddch(rows, cols, '*');     // LR
        refresh();

        getch();

        endwin();
        return 0;
}
