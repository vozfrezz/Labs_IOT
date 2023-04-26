#include <stdio.h>

void checkElement(int *arr, int *elementSearch) {
  for (int i = 0; i < 5; i++) {
    if (*(arr + i) == *elementSearch) {
      printf("\nFounded element in arr at arr[%d]", i);
      break;
    } else {
      continue;
    }
  }
}

int main() {
  int nums[] = {1, 2, 3, 4, 5};
  int keysearch = 0;
  int *searchNum = &keysearch;
  printf("\nInput value of element search:");
  scanf("%d", &keysearch);
  printf("%d", keysearch);
  checkElement(nums, searchNum);

  return 0;
}
