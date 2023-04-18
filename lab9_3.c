#include <stdio.h>
#include <string.h>

// Viết chương trình loại bỏ các ký tự ngoại trừ bảng chữ cái.

int main() {

  char arr[100];
  printf("\nInput string value: ");
  scanf("%s", arr);

  int i = 0, j = 0;

  while (arr[i] != '\0') {
    if ((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z')) {
      arr[j] = arr[i];
      j++;
    }
    i++;
  }
  arr[j] = '\0';

  printf("\n%s", arr);
  return 0;
}
