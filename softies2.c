#include <ncurses.h>

#define LMAX 12
#define CENTER 1

int main(int argc, char *argv[])
{
        char label_text[LMAX] [6] = { "Help", "File", "Edit", "Frmt",
                                "Find", "Block", "Ins", "Del",
                                "View", "Switch", "Win", "Help" };
        int label;

        slk_init(3);
        initscr();
        refresh();

        for(label = 0; label < LMAX; label++)
                slk_set(label + 1, label_text[label], CENTER);
        slk_refresh();

        getch();

        endwin();
        return 0;
}
