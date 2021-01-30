#include <stdio.h>

int main(void) {
    int c, d;
    int longDisable = 0, shortDisable = 0;

    while ((c = getchar()) != EOF) {
        switch (c) {
          case '/':
          case '*':
            d = getchar();
            if (!longDisable && c == '/' && d == '/') {
                shortDisable = 1;
            } else if (!shortDisable && c == '/' && d == '*') {
                longDisable = 1;
            } else if (!shortDisable && c == '*' && d == '/') {
                longDisable = 0;
            } else if (!(shortDisable || longDisable)) {
                putchar(c);
                if (d != EOF) putchar(d);
            }
            break;

          case '\n':
            shortDisable = 0;
            /* fall through... */
          default:
            if (!(shortDisable || longDisable)) {
                putchar(c);
            }
        }
    }
}