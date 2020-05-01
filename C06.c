/*
	<나이 계산 및 미성년자 판정>
	태어난 년도를 입력받아 나이를 계산한 후, 
	미성년자인지 여부를 판정하여 그 결과를 출력하라.

	단, 나이=올해년도 - 태어난 년도 + 1 로 계산하고
	나이가 20세 미만인 경우, 미성년자로 판정한다.

	변수는 다음과 같이 사용하라.
	int birth_year; //  태어난 년도
	int age; // 나이
*/

#include <stdio.h>
#include <time.h>

int main(){
	int birth_year; // 태어난 년도
	int age; // 나이
	int p_year; // 현재 년도
	
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	p_year = tm.tm_mday;

	printf("Birth year? ");
	scanf("%d", & birth_year);
	
	age = p_year - birth_year + 1;

	if(age < 20)
		printf("미성년자입니다.\n");
	else
		printf("미성년자가 아닙니다.\n");
	
	return 0;
}
