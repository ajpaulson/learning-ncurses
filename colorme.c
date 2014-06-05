#include <ncurses.h>
#include <stdlib.h>

void bomb(int r);

int main(int argc, char *argv[])
{
        initscr();
        start_color();

        init_pair(1, COLOR_BLACK, COLOR_RED);
        init_pair(2, COLOR_BLUE, COLOR_BLACK);
        attrset(COLOR_PAIR(1));
        addstr("My name is Mr. Black!\n");
        attrset(COLOR_PAIR(2));
        addstr("My name is Mr. Blue!\n");
        attrset(COLOR_PAIR(1));
        addstr("How do you do?\n");
        attrset(COLOR_PAIR(2));
        addstr("How do i do ");
        attron(A_BOLD);
        addstr("what");
        attroff(A_BOLD);
        addch('?');
        refresh();
        getch();

        endwin();
        return 0;
}
