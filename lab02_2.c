#include <stdio.h>

/*
Viết chương trình nhập tên của bạn rồi hiển thị trên màn hình với câu chào:
Hello [name]. How are you?

*/

int main() {
  char yourName[32]; // Declare a array variable for save the name purpose.
  printf("What's your name?\n");     // Print the text: What's is your name? on
                                     // terminal screen.
  scanf("%s", yourName);             // input data from user.
  printf("My name is %s", yourName); // Print the full name.
  return 0;
}
