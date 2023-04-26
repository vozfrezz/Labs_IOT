
#include <stdio.h>
#include <stdlib.h>

// Sử dụng kiểu cấu trúc để viết chương trình đọc thông tin chi tiết của nhân
// viên, bao gồm Tên,ID,Tiền lương.
struct birthday {
  int days;
  int months;
};
struct employee {
  char name[50];
  struct birthday Birthday;
  char Id[10];
  int salary;
};

int main() {
  struct employee Employee;
  printf("\nInput name:");
  scanf("%s", Employee.name);
  printf("\nInput a day birthday:");
  scanf("%d", &Employee.Birthday.days);
  printf("\nInput a months birthday:");
  scanf("%d", &Employee.Birthday.months);
  printf("\nInput id:");
  scanf("%s", Employee.Id);
  printf("\nInput salary:");
  scanf("%d", &Employee.salary);

  printf("\nfull name: %s", Employee.name);
  printf("\nBirthday:%d/%d", Employee.Birthday.days, Employee.Birthday.months);
  printf("\nid: %s", Employee.Id);
  printf("\nsalary: %d", Employee.salary);
  return 0;
}
