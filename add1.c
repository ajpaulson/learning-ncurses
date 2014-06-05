#include <ncurses.h>

int main(int argc, char *argv[])
{
        char text[] = "Greetings from NCurses!";
        char *t;

        initscr();              // initialises NCurses
        t = text;               // initialise the pointer

        while(*t)               // loop through the whole string
        {
                addch(*t);      // put one charr to curscr
                t++;            // increment the pointer
                refresh();      // update the screen
                napms(100);     // delay a bit to see the display
        }                       // end while
        getch();                // wait here

        endwin();               // clean up ncurses
        return 0;               // keep the shell happy
}
