#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000

int main() {
  FILE *fptr;
  fptr = fopen("test.txt", "w");
  char str[MAX];
  printf("\nInput a string:");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0';
  fprintf(fptr, "%s", str);
  fclose(fptr);
  return 0;
}
