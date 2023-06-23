#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
int main() {

  int i, o;

  int c1 = 0, c2 = 1;

  int nextTerm = c1 + c2;

  printf("wedite skolko budit chisel vibonarichi   ");
  scanf("%d", &o);

  printf("vibonarichi shisla   %d, %d, ", c1, c2);

  for (i = 3; i <= o; ++i) {
    printf("%d, ", nextTerm);
    c1 = c2;
    c2 = nextTerm;
    nextTerm = c1 + c2;
  }

  return 0;
}
