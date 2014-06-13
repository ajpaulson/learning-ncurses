#include <ncurses.h>

int main(int argc, char *argv[])
{
        MEVENT mort;
        int ch;

        initscr();
        refresh();
        noecho();
        keypad(stdscr, TRUE);

        mousemask(ALL_MOUSE_EVENTS, NULL);

        while(1)
        {
                ch = getch();
                if(ch == KEY_MOUSE)
                {
                        getmouse(&mort);
                        move(0, 0);
                        clrtoeol();
                        printw("%d\t%d", mort.y, mort.x);
                        refresh();
                        continue;
                }
                if(ch == '\n')
                        break;
        }

        endwin();
        return 0;
}
