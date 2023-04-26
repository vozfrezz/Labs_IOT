#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int main() {
  char str1[MAX], str2[MAX], strDes[MAX];
  FILE *f;
  FILE *fptr;
  f = fopen("test.txt", "r");
  fptr = fopen("test1.txt", "r+");
  fgets(str1, sizeof(str1), f);
  printf("\nInput content in str2:");
  fgets(str2, sizeof(str2), stdin);
  str2[strcspn(str2, "\n")] = '\0';
  fprintf(fptr, "%s", str2);
  fclose(fptr);
  strcat(str1, str2);
  strcpy(strDes, str1);
  printf("\n%s", strDes);
  fclose(f);
  return 0;
}
