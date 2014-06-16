#include <ncurses.h>
#include <stdlib.h>

#define FILENAME "window.dat"

void bomb(char *message);

int main(int argc, char *argv[])
{
        FILE *wfile;
        WINDOW *win;
        int r;

        initscr();
        refresh();
        start_color();
        init_pair(1, COLOR_WHITE, COLOR_BLUE);

        addstr("Press ENTER to read the window from disk:\n");
        refresh();
        getch();

        /* open the file */
        wfile = fopen(FILENAME, "r");
        if(wfile == NULL)
                bomb("Error reading file\n");

        /* write the window's data */
        win = getwin(wfile);
        if(win == NULL)
                bomb("Unable to read/create window\n");
        fclose(wfile);
        wrefresh(win);
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
