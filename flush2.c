#include <ncurses.h>

int main(int argc, char *argv[])
{
        char buffer[81];

        initscr();

        addstr("Type on the keyboard whilst I wait...\n");
        refresh();
        napms(5000);    // 5 seconds

        addstr("Here is what you typed:\n");
        flushinp();
        getnstr(buffer, 80);
        refresh();

        endwin();
        return 0;
}
