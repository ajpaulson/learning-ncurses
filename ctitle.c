#include <ncurses.h>
#include <string.h>

void center(int row, char *title);

int main(int argc, char *argv[])
{
        initscr();

        center(1, "Penguin Soccer Finals");
        center(5, "Cattle Dung Samples from Temecula");
        center(7, "Catatonic Theatre");
        center(9, "Why Do Ions Hate Each Other?");
        getch();

        endwin();
        return 0;
}

void center(int row, char *title)
{
        int len, indent, y, width;


        getmaxyx(stdscr, y, width);     // get screen width

        len = strlen(title);            // get the title's length
        indent = width - len;           // subtract it from the screen width
        indent /= 2;                    // divide result into 2

        mvaddstr(row, indent, title);
        refresh();
}
