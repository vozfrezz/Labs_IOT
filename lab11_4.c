#include <stdio.h>

// viet chuong trinh hoan doi 2 mang bang con tro.

void swapArr(int *arrA, int *arrB) {
  for (int i = 0; i < 3; i++) {
    int repo = *(arrA + i);
    *(arrA + i) = *(arrB + i);
    *(arrB + i) = repo;
  }
}

int main() {
  int numA[] = {0, 1, 2, 3, 4, 5};
  int numB[] = {6, 7, 8};
  // int *numA_ptr,*numB_ptr;
  // numA_ptr=numA;
  // numB_ptr=numB;
  swapArr(numA, numB);

  for (int i = 0; i < 6; i++) {
    printf("%d,", numA[i]);
  }

  printf("\n");
  for (int i = 0; i < 3; i++) {
    printf("%d,", numB[i]);
  }
  return 0;
}
