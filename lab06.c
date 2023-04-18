#include <stdio.h>

// Đọc một số tự nhiên được nhập từ bàn phím. Hiển thị tất cả những số chẵn từ 1
// đến số đã cho. step 1: start step 2: Output " display all integer from 1 to
// input random number" step 3: Output "input random number" step 4: initial i=1
// step 5: repeat step 5 until i=inputNumber
// step 6: if i % 2 ==0 && i<= inputNumber
// step 7: output "print i"
// step 8: i+=1;
// step 9: stop;

int main() {
  int randomNumber;
  printf("\nInput random number:");
  scanf("%d", &randomNumber);
  for (int i = 1; i <= randomNumber; i++) {
    if (i % 2 == 0) {
      printf("%d\t", i);
    }
  }
  return 0;
}
