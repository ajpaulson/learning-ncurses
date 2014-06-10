#include <ncurses.h>

int main(int argc, char *argv[])
{
        char Ham1[] = "To be, or not to be: that is the question:\n";
        char Ham2[] = "Whether 'tis nobler in the mind to suffer\n";
        char Ham3[] = "The slings and arrows of outrageous fortune,\n";
        char Ham4[] = "Or to take arms against a sea of troubles,\n";
        char Ham5[] = "And by opposing end them?\n";
        char *ob = "obnoxious";
        int c;

        initscr();

        addstr(Ham1);
        addstr(Ham2);
        addstr(Ham3);
        addstr(Ham4);
        addstr(Ham5);
        refresh();
        getch();

        // first remove "outrageous"
        move(2, 25);    // move to the start of outrageous
        for (c = 0; c < 11; c++)
        {
                delch();        // gobble
                refresh();
                napms(100);
        }

        // second insert "obnoxious"
        move(2, 25);    // reset cursor
        for (c = 0; c < 9; c++)
        {
                insch( *(ob+8-c) );
                refresh();
                napms(100);
        }
        getch();

        endwin();
        return 0;
}
