#include <stdio.h>
#include <string.h>

#define MAXLEN 10
// Viết chương trình nhập vào 2 chuỗi: chuỗi và chuỗi con. Kiểm tra chuỗi con có
// xuất hiện trong chuỗi hay không.
int substringExists(char str[], char search[]) {
  printf("\nInput 2 string:");
  int strlenStr = 0;
  int strlenSearch = 0;
  while (str[strlenStr] != '\0') {
    strlenStr++;
  }
  while (search[strlenSearch] != '\0') {
    strlenSearch++;
  }
  for (int i = 0; i <= strlenStr - strlenSearch; i++) {
    int j;
    for (j = 0; j < strlenSearch; j++) {
      if (str[i + j] != search[j]) {
        break;
      }
    }
    if (j == strlenSearch) {
      return 1;
    }
  }
  return 0;
}
int main() {
  char mainStr[MAXLEN] = {'\0'};
  char subStr[MAXLEN] = {'\0'};
  for (int i = 0; i < MAXLEN - 1; i++) {
    printf("mainStr[%d]=", i);
    scanf("%c", &mainStr[i]);
    getchar();
  }
  for (int j = 0; j < MAXLEN - 1; j++) {

    printf("subStr[%d]=", j);
    scanf("%c", &subStr[j]);
    getchar();
  }

  substringExists(mainStr, subStr);
  if (substringExists(mainStr, subStr)) {
    printf("The substring appears in the main string.\n");
  } else {
    printf("The substring does not appear in the main string.\n");
  }
}
