#include <stdio.h>

// Dao nguoc chuoi su dung con tro.

int main() {
  char arr[] = "Hello!";
  char *arr_ptr;
  arr_ptr = arr;

  int i = 0;
  while (*(arr_ptr + i) != '\0') {
    i++;
  }
  printf("String length: %d\n", i);

  for (int j = i; j >= 0; j--) {
    printf("%c", *(arr_ptr + j));
  }
  return 0;
}
