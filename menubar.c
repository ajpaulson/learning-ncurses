#include <ncurses.h>

#define MENUMAX 6

void drawmenu(int item)
{
        int c;
        char mainmenu[] = "Main Menu";
        char menu[MENUMAX] [21] = {     // 6 items for MENUMAX

                "Answer E-mail",
                "Off to the Web",
                "Word Processing",
                "Financial Management",
                "Maintenance",
                "Shutdown"
        };

        clear();
        addstr(mainmenu);
        for( c = 0; c < MENUMAX; c++)
        {
                if( c == item)
                        attron(A_REVERSE);      // highlight selection
                mvaddstr(3 + (c * 2), 20, menu[c]);
                attroff(A_REVERSE);             // remove highlight
        }
        mvaddstr(17, 25, "Use arrow keys to move; Enter to select:");
        refresh();
}

int main(int argc, char *argv[])
{
        int key, menuitem;

        menuitem = 0;

        initscr();

        drawmenu(menuitem);
        keypad(stdscr, TRUE);
        noecho();               // disable echo
        do
        {
                key = getch();
                switch(key)
                {
                        case KEY_DOWN:
                                menuitem++;
                                if(menuitem > MENUMAX - 1) menuitem = 0;
                                break;
                        case KEY_UP:
                                menuitem--;
                                if(menuitem < 0) menuitem = MENUMAX - 1;
                                break;
                        default:
                                break;
                }
                drawmenu(menuitem);
        } while(key != '\n');

        echo();         // re-enable echo

        /* At this point, the value of the selected menu is kept in the
         * menuitem variable. The program can branch off to whatever
         * subroutine is required to carry out that function */

        endwin();
        return 0;
}
