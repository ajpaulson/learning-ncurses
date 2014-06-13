#include <ncurses.h>

#define FILENAME "windump"

int main(int argc, char *argv[])
{
        int r;

        initscr();
        refresh();

        addstr("Press ENTER to restore the screen\n");
        refresh();
        getch();

        /* restore the window from disk */
        r = scr_restore(FILENAME);
        if(r == ERR)
                addstr("Error reading window file: press ENTER\n");
        refresh();
        getch();

        endwin();
        return 0;
}
