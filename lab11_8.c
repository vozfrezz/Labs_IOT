#include <stdio.h>
#include <string.h>
#define MAXLEN 100
// fix bug "change the "" to ''"

void jsonExtra(char jsonStr[], char fullName[], char gender[],
               char phoneNumber[], char email[]) {
  char info[4][100];
  char commaDelimiter[2] = ",";
  char colonDelimiter[2] = ":";
  int i = 0;
  char *token = strtok(jsonStr, commaDelimiter);
  while (token != NULL) {
    strcpy(info[i], token);
    token = strtok(NULL, commaDelimiter);
    i++;
  }
  char *name_token = strtok(info[0], colonDelimiter);
  strcpy(fullName, strtok(NULL, colonDelimiter));
  char *gender_token = strtok(info[1], colonDelimiter);
  strcpy(gender, strtok(NULL, colonDelimiter));
  char *phone_token = strtok(info[2], colonDelimiter);
  strcpy(phoneNumber, strtok(NULL, colonDelimiter));
  char *email_token = strtok(info[3], colonDelimiter);
  strcpy(email, strtok(NULL, colonDelimiter));
  if (email[strlen(email) - 1] == '}') {
    email[strlen(email) - 1] = '\0';
  }
}

int main() {
  char json[] =
      "{\"hoten\": \"Le Thi My Duyen\", \"gioitinh\": \"nu\", \"sodienthoai\": "
      "\"0935777888\", \"email\": \"duyen86@gmail.com\"}";

  char fullname[MAXLEN], genDer[MAXLEN], Phonenumber[MAXLEN], Email[MAXLEN];
  jsonExtra(json, fullname, genDer, Phonenumber, Email);
  printf("\nFullname:%s", fullname);
  printf("\nGender:%s", genDer);
  printf("\nPhone Number:%s", Phonenumber);
  printf("\nEmail:%s", Email);

  return 0;
}
