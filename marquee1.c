#include <ncurses.h>
#include <string.h>

int main(int argc, char *argv[])
{
        char text[] = "Stock Market Swells! DOW tops 15,000!";
        char *t;
        int len;

        initscr();

        len = strlen(text);
        t = text;               // initialise pointer
        while(len)
        {
                move(5, 5);     // always insert at the same point
                insch(*(t+len-1));      // work through string backwards
                refresh();
                napms(100);     // .1 second delay
                len--;
        }
        getch();

        endwin();
        return 0;
}
