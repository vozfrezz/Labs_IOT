
#include <stdio.h>
// Viết chương trình tạo một chương trình thời tiết đơn giản.
#define YEARS 5
#define MONTHS 12
int main() {
  float rain[YEARS][MONTHS] = {
      {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
      {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
      {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
      {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
      {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}};

  float totalRainfall[YEARS] = {0};
  float averageRainfall, Rainfall5years = 0;

  char *Months[12] = {"Jan", "Feb", "March", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep",   "Oct", "Nov", "Dec"};

  for (int i = 0; i < YEARS; i++) {
    for (int j = 0; j < MONTHS; j++) {
      totalRainfall[i] += rain[i][j];
    }
    printf("\nTotal rainfall in %d= %.1f\n", 2020 + i, totalRainfall[i]);
    Rainfall5years += totalRainfall[i];
  }
  averageRainfall = Rainfall5years / YEARS;
  printf("\nAverage rainfall per year from 2020 to %d = %.1f", 2020 + YEARS - 1,
         averageRainfall);

  for (int i = 0; i < MONTHS; i++) {
    float totalRainfallMonth = 0;
    for (int j = 0; j < YEARS; j++) {
      totalRainfallMonth += rain[j][i];
    }
    float averageRainfallMonth = totalRainfallMonth / YEARS;
    printf("\nTotal rainfall in %s= %.1f\n", Months[i], totalRainfallMonth);
    printf("Average rainfall in %s= %0.1f\n", Months[i], averageRainfallMonth);
  }
  return 0;
}
