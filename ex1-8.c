#include <stdio.h>
/* counts blanks, tabs, newlines */
main() {
/* variables */
int tabs, lines, blanks, chars, c;

tabs = 0;
lines = 0;
blanks = 0;
chars = 0;

/* control flow */
while ((c = getchar()) != EOF) {
	if (c == '\n') {
		++lines;
	if (c == '\t') {
		++tabs;
	}
	if (c == ' ') {
		++blanks;
	}
	}
}
/* requires more efficient way of printing strings and ints */
printf("%s", "Lines: ");
printf("%d\n", lines);
printf("%s", "Tabs: ");
printf("%d\n", tabs);
printf("%s", "Blanks: ");
printf("%d", blanks);
}










