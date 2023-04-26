#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// So sanh 2 chuoi bang con tro

bool compareStr(char str1[], char str2[]) {
  char *str1_ptr, *str2_ptr;
  str1_ptr = str1;
  str2_ptr = str2;
  bool isEqual = true;
  int i = 0;
  while (*(str1_ptr + i) != '\0') {
    if (*(str1_ptr + i) != *(str2_ptr + i)) {
      isEqual = false;
      break;
    }
    i++;
  }
  if (strlen(str1_ptr) != strlen(str2_ptr)) {
    isEqual = false;
  }

  return isEqual;
}
int main() {

  char strA[] = "Hello";
  char strB[] = "Hello World!";
  bool result = compareStr(strA, strB);
  printf("Strings are %s\n", result ? "equal" : "not equal");

  return 0;
}
