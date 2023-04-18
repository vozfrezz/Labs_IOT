#include <math.h>
#include <stdio.h>
int UCLN(int a, int b) {
  int r = 0;
  while (b != 0) {
    r = a % b;
    a = b;
    b = r;
  }
  return a;
}

int main() {
  int number01, number02;
  printf("\nInput a number 1 value:");
  scanf("%d", &number01);
  printf("\nInput a number 2 value:");
  scanf("%d", &number02);
  int result = UCLN(number01, number02);
  printf("\nThe result is: %d", result);
  return 0;
}
// hàm tính giá trị tuyệt đối của 1 số
float absoluteValue(float a) {
  if (a < 0) {
    a = -a;
  }
  return a;
}
// Viết hàm tính n! dựa vào phương pháp đệ quy
long factoricalNumber(int a) {
  if (a == 0) {
    return 1;
  } else {
    return a * factoricalNumber(a - 1);
  }
}
// Viết hàm tính khoảng cách giữa 2 điểm trong không gian Oxy.
float distanceAB(float Ax, float Ay, float Bx, float By) {
  float distance = sqrt(pow((Bx - Ax), 2) + pow((By - Ay), 2));
  return distance;
}
