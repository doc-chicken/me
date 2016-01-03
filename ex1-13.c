#include <stdio.h>
// print histogram

#define IN 1
#define OUT 0

main() {
  int nwhite, nw, c, state;
  nwhite = nw = state = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n' || c == '\t' || c == ' ') {
      state = OUT;
      ++nwhite;
      putchar('\n');
    }
    else {
      if (c != '\n' && c != ' ') {
        state = IN;
        putchar('*');
    }
}
}
}
