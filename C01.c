/*
	나이계산 practice
	태어난 년도를 입력받은 후, 이 값을 이용하여
	나이를 계싼하고 출력하라.
	단, 나이 = 올해년도 - 태어난 년도 + 1로 계산한다.

	변수는 다음과 같이 사용하라.
	int birth_year; // 태어난 년도
	int age; // 나이
*/

#include <stdio.h>
#include <time.h>

int main(void){
	time_t t = time(NULL); // time() 함수에서 사용하는 time_t 지정
	struct tm tm = *localtime(&t); // t를 struct tm 값으로 변환
	// tm_year(년), tm_mon(월), tm_mday(일), tm_hour(시), tm_min(분), tm_sec(초) 등

	int birth_year; // 태어난 년도
	int age; // 나이
	int p_year = tm.tm_year + 1900; // 현재 년도(tm_year는 1900년도부터 세기때문에 +1900)

	printf("Birth year? \n");
	scanf("%d", &birth_year);

	age = p_year - birth_year + 1;

	printf("%d \n", age);

	return 0;
}
