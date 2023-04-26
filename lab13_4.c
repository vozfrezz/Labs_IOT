
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main() {
  char oldFilename[MAX];
  char newFilename[MAX];
  char buffer[MAX];
  printf("\nEnterthe file name to be change.");
  scanf("%s", oldFilename);
  getchar();
  printf("\nEnterthe new file name.");
  scanf("%s", newFilename);
  getchar();

  if (rename(oldFilename, newFilename) == 0) {
    printf("File renamed successfully from '%s' to '%s'\n", oldFilename,
           newFilename);
  } else {
    perror("Error renaming file");
    return 1;
  }

  printf("\nEnter the file name to delete.");
  scanf("%s", buffer);
  getchar();
  if (remove(buffer) == 0) {
    printf("File %s deleted successfully", buffer);
  } else {
    perror("Error deleting the file.");
    return 1;
  }

  return 0;
}
