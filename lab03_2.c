#include <stdio.h>

/*
Tạo 1 enum tên các công ty Google, Facebook, Xerox, Yahoo, Ebay, Microsoft
*/

int main() {
  enum technologyCompany {
    Google,
    Facebook,
    HP,
    Apple,
    Acer,
    Vinsmart,
    Microsoft
  };
  enum technologyCompany apple;
  apple = Apple;
  switch (apple) {
  case Google:
    printf("Google");
    break;
  case Facebook:
    printf("Facebook");
    break;
  case HP:
    printf("HP\n");
    break;
  case Apple:
    printf("Apple");
    break;
  case Acer:
    printf("Acer");
    break;
  case Vinsmart:
    printf("Vinsmart");
    break;
  case Microsoft:
    printf("Microsoft");
    break;
  }
  return 0;
}
