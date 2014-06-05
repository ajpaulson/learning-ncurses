#include <ncurses.h>

int main(int argc, char *argv[])
{
        char text1[] = "Oh give me a clone!\n";
        char text2[] = "Yes a clone of my own!";

        initscr();
        addstr(text1);  // add the first string
        addstr(text2);  // add the second string
        move(2,0);      // cursor to row 3, column 1
        addstr("With the Y chromosone changed to the X."); // oooookay?
        // ^ explains move() function i.e. move(y, x);
        refresh();      // display the result
        getch();        // wait

        endwin();
        return 0;
}
