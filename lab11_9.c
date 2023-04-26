#include <stdio.h>
#include <string.h>

#define MAXLEN 200

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

char *multi_tok(char *input, char *delimiter) {
  static char *string;
  if (input != NULL) {
    string = input;
  } else if (string == NULL) {
    return string;
  }
  char *end = strstr(string, delimiter);
  if (end == NULL) {
    char *temp = string;
    string = NULL;
    return temp;
  }
  char *temp = string;
  *end = '\0';
  string = end + strlen(delimiter);
  return temp;
}

int main() {
  char json[] = "{"
                "\"hoten\":\"Le Thi My Duyen\","
                "\"gioitinh\":\"nu\","
                "\"sodienthoai\":\"0935777888\","
                "\"email\":\"duyen86@gmail.com\""
                "},"
                "{"
                "\"hoten\":\"Tran Trung Thanh\","
                "\"gioitinh\":\"nam\","
                "\"sodienthoai\":\"0976333444\","
                "\"email\":\"thanhtt98.com\""
                "},"
                "{"
                "\"hoten\":\"Huynh Anh Hoang\","
                "\"gioitinh\":\"nu\","
                "\"sodienthoai\":\"0939745220\","
                "\"email\":\"hahoang88@gmail.com\""
                "},"
                "{"
                "\"hoten\":\"Nguyen Minh Khoi\","
                "\"gioitinh\":\"nam\","
                "\"sodienthoai\":\"0703666777\","
                "\"email\":\"khoimaster@gmail.com\""
                "}";
  char bracketDelimiter[] = "},{";
  char customerInfo[4][200];
  int i = 0;
  char fullname[MAXLEN], genDer[MAXLEN], Phonenumber[MAXLEN], Email[MAXLEN];
  char maleFullname[10][MAXLEN];
  int maleCount = 0;
  int customerCount = 0;

  char *token = multi_tok(json, bracketDelimiter);
  while (token != NULL) {
    strcpy(customerInfo[i], token);
    jsonExtra(customerInfo[i], fullname, genDer, Phonenumber, Email);
    if (strcmp(genDer, "\"nam\"") == 0) {
      strcpy(maleFullname[i], fullname);
      maleCount++;
      i++;
    }
    customerCount++;
    token = multi_tok(NULL, bracketDelimiter);
  }
  printf("\nTotal male customer is %d/ Total %d customer. ", maleCount,
         customerCount);
  if (maleCount > 0) {
    printf("\nFull name of male customer. ");
    for (i = 0; i < maleCount; i++) {
      printf("\n%d %s", i + 1, maleFullname[i]);
    }
  }
  return 0;
}
