#include <stdio.h>
// Lưu trữ 1 mảng dãy số và sắp xếp dãy số theo chiều giảm dần, tăng dần.
// step 1: start
// step 2: Ouput "sort by value increasing."
// step 3: Output"sort by value decreasing order."
// step 4: initialize an array integer data type.
// step 5: Input value each element in array.
// step 6: initialize i=0
// step 7: Condition: i<number element of arr
// step 8: declare a variable to save arr[0];
// step 9: if arr[1]>arr[0]
// step 10: variable=arr[1] "save arr[0]"
// step 11:else: arr[0]=arr[1];
// step 12: arr[1]=variable "save arr[0]"
// step 13:i++
// step 14:Loop until condition false.
// step 15: Output "print value arr using for loop"
int main() {
  int arr[101] = {0};
  int n = 0;
  do {
    printf("\nInput a number of element in array:\"Remember it is a positive "
           "integer\"\nThe number is:");
    scanf("%d", &n);
    if (n < 0) {
      printf("\nPlease input again!");
    }
  } while (n <= 0);

  for (int i = 0; i < n; i++) {
    printf("arr[%d]=", i);
    scanf("%d", &arr[i]);
  }
  int repoValue;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] < arr[j]) {
        repoValue = arr[i];
        arr[i] = arr[j];
        arr[j] = repoValue;
      }
    }
  }

  printf("\nSort by decrease value order.");
  for (int i = 0; i < n; i++) {
    printf("\narr[%d]=%d", i, arr[i]);
  }

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] > arr[j]) {
        repoValue = arr[i];
        arr[i] = arr[j];
        arr[j] = repoValue;
      }
    }
  }
  printf("\nSort by increase value order.");
  for (int i = 0; i < n; i++) {
    printf("\narr[%d]=%d", i, arr[i]);
  }
  return 0;
}
