#include <ncurses.h>

int main(int argc, char *argv[])
{
        initscr();
        refresh();

        border(0x000000ba, 0x000000ba, 0x000000cd, 0x000000cd,
                0x000000c9, 0x000000bb, 0x000000c8, 0x000000bc);
        refresh();
        getch();

        endwin();
        return 0;
}
