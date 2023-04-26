#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char name[25];
  int age;
  char adress[128];
  float gpa;
} student;

void inputInfo(student *Std) {
  printf("\nInput student's name:");
  fgets(Std->name, sizeof(Std->name), stdin);
  Std->name[strcspn(Std->name, "\n")] = '\0';

  printf("\nInput student's age:");
  scanf("%d", &Std->age);
  getchar();
  printf("\nInput student's adress:");
  fgets(Std->adress, sizeof(Std->adress), stdin);
  Std->adress[strcspn(Std->adress, "\n")] = '\0';

  printf("\nInput student's gpa:");
  scanf("%f", &Std->gpa);
  getchar();
}
void studentPrint(student Std) {
  printf("\n%s\t%d\t%s\t%.2f", Std.name, Std.age, Std.adress, Std.gpa);
}

void inputStudentsList(student std[], int *n) {
  do {
    printf("\nInput n:");
    scanf("%d", n);
    getchar();
  } while (*n <= 0);
  for (int i = 0; i < *n; i++) {
    printf("\nInput student's infomation %d", i);
    inputInfo(std + i);
  }
}

void exportStudentList(student std[], int n) {
  for (int i = 0; i < n; i++) {
    studentPrint(std[i]);
  }
}

int searchInfo(char searchName[], student Std[], int n) {

  for (int i = 0; i < n; i++) {
    if (strcmp(Std[i].name, searchName) == 0) {
      return 1;
    }
  }
  return 0;
}

int main() {
  student Student[5];
  int n;
  int yourOption;
  do {
    printf("\nMenu Option");
    printf("\n1-Input infomation student's list:");
    printf("\n2-Searching student informations.");
    printf("\n3-Exit program.");
    scanf("%d", &yourOption);
    getchar();
    switch (yourOption) {
    case 1:
      inputStudentsList(Student, &n);
      exportStudentList(Student, n);
      break;
    case 2:
      char studentName[20];
      printf("\nInput student's name:");
      fgets(studentName, sizeof(studentName), stdin);
      studentName[strcspn(studentName, "\n")] = '\0';
      printf("\nThe result of searching student: %d",
             searchInfo(studentName, Student, n));
      break;
    case 3:
      return 0;
    default:
      printf("\nInvalid option.Pls try again.");
    }
  } while (n != 0);
  return 0;
}
