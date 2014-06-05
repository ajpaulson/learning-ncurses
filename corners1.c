#include <ncurses.h>

int main(int argc, char *argv[])
{
        int rows, cols;

        initscr();
        getmaxyx(stdscr, rows, cols);
        rows--;
        cols--;

        move(0, 0);             // UL corner
        addch('*');
        refresh();
        napms(500);             // pause half a sec

        move(0, cols);             // UR corner
        addch('*');
        refresh();
        napms(500);             // pause half a sec

        move(rows, 0);             // LL corner
        addch('*');
        refresh();
        napms(500);             // pause half a sec


        move(rows, cols);             // LR corner
        addch('*');
        refresh();
        getch();

        endwin();
        return 0;
}
