#include <ncurses.h>

int main(int argc, char *argv[])
{
        char buffer[81];

        initscr();

        addstr("Type on the keyboard while I wait...\n");
        refresh();
        napms(5000);            // 5 seconds

        addstr("Here is what you typed:\n");
        getnstr(buffer, 80);
        refresh();

        endwin();
        return 0;
}
