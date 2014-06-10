#include <ncurses.h>

int main(int argc, char *argv[])
{
        int value = 0;

        initscr();

        addstr("Press any key to begin:\n");
        refresh();
        getch();

        nodelay(stdscr, TRUE);          // turn off getch() wait
        addstr("Press any key to stop the insane loop!\n");
        while (getch() == ERR)
        {
                printw("%d\r", value++);
                refresh();
        }

        endwin();
        return 0;
}
