#include <stdio.h>

// Viết chương trình tính tiền phải trả hàng tuần. Chương trình yêu cầu nhập số
// giờ làm việc và hiển thị lương gross, thuế và lương net.
// Thanh toán cơ bản: $12.00 / hour.
// Làm thêm giờ (vượt quá 40 hour): lương mỗi giờ bằng lương một giờ rưỡi cơ
// bản. Thuế: Nếu lương gross nhỏ hơn hoặc bằng 300 thì thuế sẽ là 15%. Nếu
// lương gross lớn hơn 300 và nhỏ hơn hoặc bằng 450 thì thuế sẽ là 20%. Nếu
// lương gross lớn hơn 450 thì thuế sẽ là 25%.

#define PAYRATE 12000
#define TAXUNDER300 0.15
#define TAXUNDER450 0.20
#define TAXABOVE450 0.25
#define OVERTIME 40

int main() {
  unsigned int workingHours;
  double grossSalary, taxes, netSalary;
  printf("\nInput working hours:");
  scanf("%u", &workingHours);
  if (workingHours > OVERTIME) {
    grossSalary = 1.5 * PAYRATE * workingHours - 20 * PAYRATE;
  } else {
    grossSalary = workingHours * PAYRATE;
  }
  if (grossSalary < 300) {
    taxes = grossSalary * TAXUNDER300;
    netSalary = grossSalary - taxes;
    printf("\nGross salary = %.2f\nTaxes = %.2f\nNet salary = %.2f\n",
           grossSalary, taxes, netSalary);
  } else if (grossSalary >= 300 && grossSalary <= 450) {
    taxes = ((grossSalary - 300) * TAXUNDER450) + (300 * TAXUNDER300);
    netSalary = grossSalary - taxes;
    printf("\nGross salary = %.2f\nTaxes = %.2f\nNet salary = %.2f\n",
           grossSalary, taxes, netSalary);
  } else {
    taxes = ((grossSalary - 450) * TAXABOVE450) + (300 * TAXUNDER300) +
            (150 * TAXUNDER450);
    netSalary = grossSalary - taxes;
    printf("\nGross salary = %.2f\nTaxes = %.2f\nNet salary = %.2f\n",
           grossSalary, taxes, netSalary);
  }
  return 0;
}
