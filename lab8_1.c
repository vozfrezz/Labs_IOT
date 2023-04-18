#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

char sqr[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int isWin() {
  if (sqr[1] == sqr[2] && sqr[2] == sqr[3]) {
    return 1;
  } else if (sqr[4] == sqr[5] && sqr[5] == sqr[6]) {
    return 1;
  } else if (sqr[7] == sqr[8] && sqr[8] == sqr[9]) {
    return 1;
  } else if (sqr[1] == sqr[4] && sqr[4] == sqr[7]) {
    return 1;
  } else if (sqr[2] == sqr[5] && sqr[5] == sqr[8]) {
    return 1;
  } else if (sqr[3] == sqr[6] && sqr[6] == sqr[9]) {
    return 1;
  } else if (sqr[1] == sqr[5] && sqr[5] == sqr[9]) {
    return 1;
  } else if (sqr[3] == sqr[5] && sqr[5] == sqr[9]) {
    return 1;
  }
  // check if all square are filled "the update character is X or O instead of
  // '1''2'v.v.v."
  else if (sqr[1] != '1' && sqr[2] != '2' && sqr[3] != '3' && sqr[4] != '4' &&
           sqr[5] != '5' && sqr[6] != '6' && sqr[7] != '7' && sqr[8] != '8' &&
           sqr[9] != '9') {
    return 0;
  } else {
    return -1;
  }
};

void drawBoard() {
  printf("\n\tTIC TAC TOE");
  printf("\n\nPlayer 1 (X) - Player 2 (O)\n\n");
  printf("   |   |   |\n %c | %c | %c |\n___|___|___|\n", sqr[1], sqr[2],
         sqr[3]);
  printf("   |   |   |\n %c | %c | %c |\n___|___|___|\n", sqr[4], sqr[5],
         sqr[6]);
  printf("   |   |   |\n %c | %c | %c |\n___|___|___|\n", sqr[7], sqr[8],
         sqr[9]);
};

// Clear the console screen after each move.
void clearScreen() { system("clear"); }

int main() {
  int player = 1, choice, i;
  char mark;
  do {
    clearScreen();
    drawBoard();
    player = (player % 2) ? 1 : 2;
    mark = (player == 1) ? 'X' : 'O';

    printf("\nPlayer %d,enter the choice: ", player);
    scanf("%d", &choice);
    if (choice == 1 && sqr[1] == '1') {
      sqr[1] = mark;
    } else if (choice == 2 && sqr[2] == '2') {
      sqr[2] = mark;
    } else if (choice == 3 && sqr[3] == '3') {
      sqr[3] = mark;
    } else if (choice == 4 && sqr[4] == '4') {
      sqr[4] = mark;
    } else if (choice == 5 && sqr[5] == '5') {
      sqr[5] = mark;
    } else if (choice == 6 && sqr[6] == '6') {
      sqr[6] = mark;
    } else if (choice == 7 && sqr[7] == '7') {
      sqr[7] = mark;
    } else if (choice == 8 && sqr[8] == '8') {
      sqr[8] = mark;
    } else if (choice == 9 && sqr[9] == '9') {
      sqr[9] = mark;
    } else {
      printf("\nInvalid move");
      player--;
      getch();
    }
    player++;
    i = isWin();
  } while (i == -1);
  if (i == 1) {
    player--;
    printf("\nPlayer %d win", player);
  } else {
    printf("\n>>Game draw");
  };

  return 0;
}
