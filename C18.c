/*
	<미성년자 숫자 세기>
	가족이 몇 명인지 입력받은 후, 그 인원 수 만큼 태어난 년도를 입력받으면서,
	나이를 계싼하여 미성년자가 모두 몇 명인지 출력하라.
	
	단, 나이 = 올해 년도 - 태어난 년도 + 1 로 계산하고 
	나이가 20세 미만인 경우, 미성년자로 판정한다.

	반목은 for 구문을 사용하고, 변수는 다음과 같이 사용하라.
	int count_all; // 가족 인원 수
	int count_young; // 미성년자의 수
	int birth_year; // 태어난 년도
	int age; // 나이
	int i; // 반복문을 위한 변수
*/

#include <stdio.h>
#include <time.h>

int main(){
	int count_all; // 가족 인원 수
	int count_young = 0; // 미성년자의 수
	int birth_year; // 태어난 년도
	int age; // 나이
	int i; // 반복문을 위한 변수

	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	int p_year = tm.tm_year + 1900;

	printf("가족 인원 수? ");
	scanf("%d", &count_all);

	for(i = 0; i < count_all; i++){
		printf("Birth year? ");
		scanf("%d", &birth_year);
		age = p_year - birth_year + 1;
		
		if(age < 20)
			count_young++;
	}

	
	printf("가족들 중 미성년자는 모두 %d명입니다.\n", count_young);

	return 0;
}
