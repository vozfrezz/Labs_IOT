#include <stdio.h>
#include <stdlib.h>

#define MAX 1000
int main() {
  FILE *f;
  f = fopen("test.txt", "r");
  if (f == NULL) {
    printf("\nInvalid file.");
    exit(1);
  }
  char str[MAX];
  fgets(str, MAX, f);
  printf("\n%s", str);
  fclose(f);
  return 0;
}
