#include <stdio.h>

// Viết chương trình yêu cầu nhập số từ bàn phím để đoán số đã cho trước. Bắt
// nhập đoán số cho đến khi số nhập vào trùng với số đã cho. Nếu số nhập vào
// trùng với số đã cho thì hiển thị lời thông báo đã đoán đúng trên màn hình.
#define GUESSNUMBER 9
/*
int main() {
  int randomNumber;
  do {
    printf("\nInput your guess number:\nSuggestion: \"The number has one "
           "character,and it's odd.\"\nThe number is:");
    scanf("%d", &randomNumber);
    if (randomNumber != GUESSNUMBER) {
      printf("\nYou miss!");
    } else {
      printf("Congratulation! you get it.");
    }
  } while (randomNumber != GUESSNUMBER);
  return 0;
}
*/
int main() {
  int randomNumber;
  printf("\nInput your guess number:\nSuggestion: \"The number has one "
         "character,and it's odd.\"\nThe number is:");
  scanf("%d", &randomNumber);
  while (randomNumber != GUESSNUMBER) {
    printf("\nYou miss!");
    printf("\nInput your guess number:\nSuggestion: \"The number has one "
           "character,and it's odd.\"\nThe number is:");
    scanf("%d", &randomNumber);
  }
  printf("Congratulation! you get it.");

  return 0;
}
