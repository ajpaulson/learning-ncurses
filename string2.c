#include <ncurses.h>

int main(int argc, char *argv[])
{
        char first[4];
        char last[4];

        initscr();
        addstr("Enter the first 3 letters of your first name? ");
        refresh();
        getnstr(first,3);

        addstr("Enter the first 3 letters of your last name? ");
        refresh();
        getnstr(last,3);

        addstr("Your secret agent name is ");
        printw("%s%s", first,last);
        addch('!');
        refresh();
        getch();

        endwin();
        return 0;
}
