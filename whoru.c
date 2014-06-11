#include <ncurses.h>

int main(int argc, char *argv[])
{
        char name [46];
        char password [9];

        initscr();

        mvprintw(3, 10, "Enter your name: ");
        refresh();
        getnstr(name, 45);
        mvprintw(5, 6, "Enter your password: ");
        refresh();

        getnstr(password, 8);

        endwin();
        return 0;
}
