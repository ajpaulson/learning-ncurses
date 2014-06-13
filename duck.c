#include <ncurses.h>

#define LMAX 8
#define CENTER 1

int main(int argc, char *argv[])
{
        char label_text[LMAX] [8] = { "Duck", "Duck", "Duck", "Duck",
                                "Duck", "Duck", "Duck", "Duck", };
        int label;

        slk_init(1);
        initscr();
        refresh();

        for(label = 0; label < LMAX; label++)
                slk_set(label + 1, label_text[label], CENTER);
        slk_refresh();
        getch();

        slk_set(7, "Goose!", CENTER);
        slk_refresh();
        getch();

        endwin();
        return 0;
}
