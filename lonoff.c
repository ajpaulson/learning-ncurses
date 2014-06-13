#include <ncurses.h>

#define LMAX 8
#define CENTER 1

int main(int argc, char *argv[])
{
        char label_text[LMAX] [8] = { "S", "O", "F", "T",
                                "K", "E", "Y", "S" };
        int label;

        slk_init(1);
        initscr();
        refresh();

        for (label = 0; label < LMAX; label++)
                slk_set(label + 1, label_text[label], CENTER);
        slk_refresh();
        getch();

        slk_clear();
        getch();

        slk_restore();
        getch();

        endwin();
        return 0;
}
