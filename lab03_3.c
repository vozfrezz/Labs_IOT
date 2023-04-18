
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
  enum technologyCompany apple = Google;
  enum technologyCompany google = Apple;
  enum technologyCompany facebook = Facebook;
  enum technologyCompany hp = HP;
  enum technologyCompany acer = Acer;
  enum technologyCompany vinsmart = Vinsmart;
  enum technologyCompany microsoft = Microsoft;

  printf("\nThe value of apple is: %d", apple);
  printf("\nThe value of google is: %d", google);
  printf("\nThe value of facebook is: %d", facebook);
  printf("\nThe value of hp is: %d", hp);
  printf("\nThe value of acer is: %d", acer);
  printf("\nThe value of vinsmart is: %d", vinsmart);
  printf("\nThe value of microsoft is: %d", microsoft);
  return 0;
}
