#include "stdio.h"
#include <stdbool.h>
#include <string.h>

// Tạo hàm tính độ dài chuỗi. Dùng vòng lặp while để đếm các ký
// tự trong chuỗi,vòng lặp sẽ dừng khi gặp ký tự ‘\0’. Hàm này sẽ trả về độ dài
// của chuỗi.

// step 1: START
// step 2: Output "string length"
// step 3: Input "string"
// step 4: int stringLength=0;
// step 5: condition: string[i]!='\0'
// step 6: stringLength++;
// step 7: excute until condition wrong
// step 8: Output "stringLength=?"
// step 9: End
int stringLengthCaculate(char a[]) {
  int stringLength = 0;
  while (a[stringLength] != '\0') {
    stringLength++;
  }
  return stringLength;
}

// Tạo hàm nối chuỗi với tham số truyền vào là 1 mảng lưu trữ hai
// chuỗi đã được nối và 2 chuỗi cần nối.
void stringCat(char stringSrcA[], char stringSrcB[], char stringDes[]) {
  int lenA = stringLengthCaculate(stringSrcA);
  int lenB = stringLengthCaculate(stringSrcB);

  int lenDes = lenA + lenB;
  for (int i = 0; i < lenDes; i++) {
    if (i < lenA) {
      stringDes[i] = stringSrcA[i];
    } else {
      stringDes[i] = stringSrcB[i - lenA];
    }
  }
  printf("\nThis final string is: %s", stringDes);
}

// Tạo hàm kiểm tra chuỗi bằng boolean (true hoặc false), sử dụng thư viện
// stdbool.h

bool checkAlike(char A[], char B[]) {
  int i = 0;
  bool isAlike = true;
  while (A[i] != '0' && A[i] == B[i]) {
    if (A[i] != B[i]) {
      isAlike = false;
      break;
    }
    i++;
  }
  return isAlike;
}
int main() {
  //-----------Strlen()-------------
  /*
char arr[] = {"Hello World!"};
 stringLengthCaculate(arr);
*/
  //-----------Strcat()-------------
  /*
char arr[] = {"Hello World!"};
char arr2[] = {" Hello Viet Nam."};
char arr3[100];
stringCat(arr, arr2, arr3);
*/
  //
  char str1[] = "Hello";
  char str2[] = "Hello";
  printf("Comparison of str1 and str2: %d\n",
         checkAlike(str1, str2)); // Output: 1 (true, equal)
  return 0;
}
