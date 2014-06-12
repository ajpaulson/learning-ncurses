#include <ncurses.h>
#include <stdlib.h>

void bomb(char *message);

int main(int argc, char *argv[])
{
        WINDOW *pod, *pea;

        initscr();
        refresh();

        /* create a new pad */
        pod = newpad(50, 50);
        if( pod == NULL )
                bomb("Unable to create new pad");

        addstr("New pad created\n");
        refresh();
        getch();

        /* create a subpad */
        pea = subpad(pod, 20, 20, 29, 29);
        if( pea == NULL )
                bomb("Unable to create subpad");

        addstr("Subpad created\n");
        refresh();
        getch();

        endwin();
        return 0;
}

void bomb(char *message)
{
        addstr(message);
        refresh();
        getch();
        endwin();
        exit(1);
}
