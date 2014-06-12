#include <ncurses.h>

int main(int argc, char *argv[])
{
        WINDOW *p;
        int x, c;

        initscr();
        refresh();

        /* create a new pad */
        p = newpad(50, 100);
        if(p == NULL)
        {
                addstr("Unable to create a new pad");
                refresh();
                endwin();
                return(1);
        }

        addstr("New pad created");
        refresh();
        getch();

        endwin();
        return 0;
}
