/*
	<나이 계산 및 연령대 판정>
	태어난 년도를 입력받아 나이를 계산한 후,
	나이에 따라 유아, 어린이, 청소년, 청년, 중년, 노년 여부를 판정하여
	그 결과를 출력하라.

	단, 나이 = 올해 년도- 태어난 년도+ 1로 계산하고 연령대 구분은 다음과 같이 판정한다.
	
	------------------------------
	7세 미만: 유아,
	7세 이상 ~ 13세 미만: 어린이
	13세 이상 ~ 20세 미만: 청소년
	20세 이상 ~ 30세 미만: 청년
	30세 이상 ~ 60세 미만: 중년
	60세 이상: 노년
	------------------------------

	변수는 다음과 같이 사용하라.
	int birth_year; // 태어난 년도
	int age; // 나이
*/

#include <stdio.h>
#include <time.h>

int main(){
	int birth_year; // 태어난 년도
	int age; // 나이
	int p_year; // 현재 년도

	time_t t =  time(NULL);
	struct tm tm = *localtime(&t);
	p_year = tm.tm_year+1900;

	printf("Birth year? ");
	scanf("%d", &birth_year);

	age = p_year - birth_year + 1;
	
	if(age < 7)
		printf("유아입니다.\n");
	if(age >= 7 && age < 13)
		printf("어린이입니다.\n");
	if(age >= 13 && age < 20);
		printf("청소년입니다.\n");
	if(age >= 20 && age < 30);
		printf("청년입니다.\n");
	if(age >= 30 && age < 60)
		printf("중년입니다.\n");
	else
		printf("노년입니다.\n");

	return 0;
}

