#include <ncurses.h>

int main(int argc, char *argv[])
{
        initscr();

        addstr("Attention!\n");
        beep();
        refresh();
        getch();
        addstr("I said, ATTENTION!\n");
        flash();
        refresh();
        getch();

        endwin();
        return 0;
}
