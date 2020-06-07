/*
    <배열을 이용한 연중 날짜 계산>
    날짜를 월과 일로 입력받아 이 날짜는 1년 중 몇 번째 날에 해당되는지 계산>    하여
    출력하라.
    단, 매 월의 날 수를 다음과 같이 배열로 만들어 이를 이용하여 계산하라.
    int monthdays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    변수는 다음과 같이 사용하라.
    int monthdays[12]; // 1~12월의 날 수
    int month, day; // 입력받은 월, 일
    int day_count; // 1년 중 날 수
    int i; // 반복문을 위한 변수
*/

#include <stdio.h>

int main(){
  int monthdays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int month, day; // 입력받은 월, 일
  int day_count = 0; // 1년 중 날 수
  int i; // 반복문을 위한 변수

  printf("Month? ");
  scanf("%d", &month);
  printf("Day? ");
  scanf("%d", &day);

  if(month > 12 || month < 1){
    printf("잘못 입력하셨습니다.\n");
    return 0;
  }
  else if(day < 1 || day > monthdays[month-1]){
    printf("잘못 입력하셨습니다.\n");
    return 0;
  }

  for(i = 0; i < month - 1; i++)
    day_count += monthdays[i];
  day_count += day;

  printf("이 날짜는 1년 중 %d번째 날에 해당\n", day_count);

  return 0;
}

// putty에서 push가 안 됨..
