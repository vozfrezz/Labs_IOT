#include <stdio.h>
#include <stdlib.h>

// Sử dụng kiểu cấu trúc để viết chương trình đọc thông tin chi tiết của nhân
// viên, bao gồm Tên,ID,Tiền lương.

struct employee {
  char name[50];
  char Id[10];
  int salary;
};

int main() {
  struct employee Employee;
  printf("\nInput name:");
  scanf("%s", Employee.name);
  printf("\nInput id:");
  scanf("%s", Employee.Id);
  printf("\nInput salary:");
  scanf("%d", &Employee.salary);

  printf("\nfull name: %s", Employee.name);
  printf("\nid: %s", Employee.Id);
  printf("\nsalary: %d", Employee.salary);
  return 0;
}
