#include <stdio.h>

/*Chuyển đổi số ngày được nhập từ bàn phím tương ứng với a năm b tuần c ngày
(a, b, c là các số tự nhiên tính bằng chương trình) và đưa ra màn hình kết quả:
*/

int main() {
  int years, weeks, days;
  int inputNumber;
  printf("\nInput a random number :");
  scanf("%d", &inputNumber);
  years = inputNumber / 365;
  weeks = (inputNumber - years * 365) / 7;
  days = (inputNumber - years * 365 - weeks * 7);
  printf("\n%dyears %dweeks %ddays ", years, weeks, days);
  return 0;
}
