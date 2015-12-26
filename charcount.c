#include <stdio.h>
/* This is a change */
main() {
	int cc, word, wc;
	word = 3;
	wc = 0;
	for(cc = 0; getchar() != EOF; ++cc)
		;
	printf("%d\n", cc);
	printf("%d", wc);
}