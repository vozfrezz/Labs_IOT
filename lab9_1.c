#include <stdio.h>
#include <string.h>
// Viết chương trình sắp xếp các chuỗi nhập vào theo thứ tự abc sử dụng thuật
// toán nổi bọt.
#define MAXLEN 10

void bubbleSort(char a[]) {
  int n = strlen(a);
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (strcmp(&a[j], &a[j + 1]) > 0) {
        char temp;
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
}
int main() {
  char arr[MAXLEN + 1];
  for (int i = 0; i < MAXLEN; i++) {
    printf("\nInput arr[%d]= ", i);
    scanf("%c", &arr[i]);
    getchar();
  }
  arr[MAXLEN] = '\0';
  bubbleSort(arr);
  printf("%s", arr);
  return 0;
}
