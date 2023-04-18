#include <stdio.h>
// Nhập số phút và chuyển đổi số phút thành đơn vị năm và ngày.
/*
int main() {
  int inputMinutes, days, years;
  printf("\nPls input minutes number:");
  scanf("%d", &inputMinutes);
  days = (inputMinutes / 60);
  days /= 24;
  years = days / 365;
  printf("\n%dyears %ddays", years, days);
  return 0;
}
*/
//-------------------------------------------------------------------------------------
// Lab 4.5
/* Dùng printf() đưa ra các giá trị byte của các kiểu dữ liệu cơ bản: char, int,
 * long, long long, float, double.
int main() {
  char c;
  int i;
  long l;
  long long ll;
  float f;
  double d;

  printf("Size of char: %zu bytes\n", sizeof(c));
  printf("Size of int: %zu bytes\n", sizeof(i));
  printf("Size of long: %zu bytes\n", sizeof(l));
  printf("Size of long long: %zu bytes\n", sizeof(ll));
  printf("Size of float: %zu bytes\n", sizeof(f));
  printf("Size of double: %zu bytes\n", sizeof(d));

  return 0;
}
*/

//----------------------------------------------------------------------------------------
// Lab 4.6
// Nhập 2 số kiểu int từ bàn phím và thực hiện chia số thứ nhất cho số thứ hai.
// Đưa kết quả ra màn hình
/*int main() {
  int a, b;
  printf("\nInput the value of a:");
  scanf("%d", &a);

  printf("\nInput the value of b:");
  scanf("%d", &b);

  printf("The result of a/b= %d", a / b);
  return 0;
}
*/
//------------------------------------------------------------------------------------------
// Lab 4.7
// Nhập 4 số bất kỳ kiểu float và tính trung bình cộng đưa kết quả ra màn hình.
/*
int main() {
  int a, b,c,d;
  printf("\nInput the value of a:");
  scanf("%d", &a);

  printf("\nInput the value of b:");
  scanf("%d", &b);

  printf("\nInput the value of c:");
  scanf("%d", &c);

  printf("\nInput the value of d:");
  scanf("%d", &d);
  printf("The result of a/b= %d", (a+b+c+d)/4);
  return 0;
}
*/
//--------------------------------------------------------------------
// Lab 4.8
// Nhập 4 số bất kỳ kiểu int từ bàn phím và đưa ra màn hình bình phương của mỗi
// số
/*
int main() {
  int a, b,c,d;
  printf("\nInput the value of a:");
  scanf("%d", &a);

  printf("\nInput the value of b:");
  scanf("%d", &b);

  printf("\nInput the value of c:");
  scanf("%d", &c);

  printf("\nInput the value of d:");
  scanf("%d", &d);
  printf("The result of a square= %d", a*a);
  printf("The result of b square= %d", b*b);
  printf("The result of c square= %d", c*c);
  printf("The result of d square= %d", d*d);
  return 0;
}
*/

//-------------------------------------------------------
// Lab 4.9

/*Đọc dữ liệu từ bàn phím về nhân viên bao gồm: ID nhân viên, tổng số giờ làm
việc 1 tháng, số tiền nhận được mỗi giờ. Đưa ra màn hình ID nhân viên, tiền
lương nhận được của tháng.*/
/*
int main() {

  unsigned int employeeId, workingHours, hourlyWage, monthlySalary;

  printf("\nInput the value of employeeId:");
  scanf("%d", &employeeId);
  printf("\nInput the value of workingHours:");
  scanf("%d", &workingHours);
  printf("\nInput the value of hourlyWage:");
  scanf("%d", &hourlyWage);
  monthlySalary = workingHours * hourlyWage;
  printf("\nEmployee ID: %u\nMonthly salary:%u\n", employeeId, monthlySalary);
  return 0;
}
*/
