#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

int main() {
  int linesCount = 0;
  int ch;
  char str[MAX];
  FILE *f;
  f = fopen("test.txt", "r");
  if (f == NULL) {
    printf("\nInvalid file.");
    exit(1);
  }
  while ((ch = fgetc(f)) != EOF) {
    if (ch == '\n') {
      linesCount++;
    }
  }
  printf("\nTotal number of lines are:%d", ++linesCount);
  fclose(f);
  return 0;
}
