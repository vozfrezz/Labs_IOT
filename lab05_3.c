#include <stdio.h>
// Yêu cầu: Đọc nhiệt độ nhập từ bàn phím (ví dụ như là kết quả của cảm biến
// nhiệt độ) và đưa ra màn hình lời nhắn thích hợp với trạng thái nd. nhiệt độ <
// 0:thời tiết lạnh cóng. nhiệt độ 0-10: thời tiết rất lạnh. nhiệt độ 10-20:
// thời tiết lạnh. nhiệt độ 20-30: thời tiết tuyệt vời. nhiệt độ 30-40: thời
// tiết nóng. nhiệt độ >= 40: thời tiết rất nóng
int main() {
  int inputTemperature;
  printf("Pls input a temperature value: ");
  scanf("%d", &inputTemperature);
  if (inputTemperature < 0) {
    printf("Very cold weather.");
  } else if (inputTemperature >= 0 && inputTemperature < 10) {
    printf("Extremely cold weather.");
  } else if (inputTemperature >= 10 && inputTemperature <= 20) {
    printf("Cold weather.");
  } else if (inputTemperature > 20 && inputTemperature <= 30) {
    printf("Wonderful weather.");
  } else if (inputTemperature > 30 && inputTemperature < 40) {
    printf("Hot weather.");
  } else {
    printf("Very hot weather.");
  }
  return 0;
}
