#include <stdio.h>

/* must print its input one word per line */

#define IN 1
#define OUT 0

main() {

int c, state, nw, out;


while ((c = getchar()) != EOF) {
	if (c == '\n' || c == '\t' || c == ' ') {
			state = OUT;
			++out;
			putchar('\n');
		}
	else if (state == OUT) {
		state = IN;
		++nw;
	}
	putchar(c);		
	}
	printf("\n%s", "Total words: ");
	printf("%d\n", nw);
	printf("%d", out);
}

