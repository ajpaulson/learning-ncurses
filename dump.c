#include <ncurses.h>
#include <stdlib.h>
#include <time.h>

#define FILENAME "windump"

int main(int argc, char *argv[])
{
        char word[8];
        int x, w, r;

        srandom((unsigned)time(NULL));  // seed randomizer
        word[7] = '\0';
        initscr();
        refresh();

        /* fill most of the screen with random 6-char words */
        for(x = 0; x < 200; x++)
        {
                for(w = 0; w < 6; w++)
                        word[w] = (random() % 26) + 'a';
                printw("%s\t", word);
        }
        addch('\n');
        addstr("Press ENTER to write this screen to disk\n");
        refresh();
        getch();

        /* write the window to disk */
        r = scr_dump(FILENAME);
        if(r == ERR)
                addstr("Error writing window to disk\n");
        else
                addstr("File written; press ENTER to quit\n");
        refresh();
        getch();

        endwin();
        return 0;
}
