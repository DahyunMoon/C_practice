/* 
	<연중 날짜 계산>
	날짜를 월과 일로 입력받아 
	이 날짜는 1년 중 몇 번째 날에 해당되는지 계산하여 출력하라.

	단, 매 월의 날 수는 다음과 같이 정한다.
	2월: 28일
	1, 3, 5, 7, 8, 10, 12월: 31일
	4, 6, 9, 11월: 30일

	변수는 다음과 같이 사용하라.
	int month, day; // 월, 일
	int day_count; // 1년 중 날 수
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int month, day; // 월, 일
	int day_count; // 1년 중 날 수
	
	day_count = 0;

	printf("Month? ");
	scanf("%d", &month);
	printf("day? ");
	scanf("%d", &day);

	int D_31[12] = {1, 0, 3, 0, 5, 0, 7, 8, 0, 10, 0, 12};
	int D_30[12] = {0, 0, 0, 4, 0, 6, 0, 0, 9, 0, 11, 0};

	for(int i = 0; i < month-1; i++){

		if(D_31[i] != 0)
			day_count += 31;
		else if(D_30[i] != 0)
			day_count += 30;
		else
			day_count += 28;
		
		printf("[DEBUG] %d month, day = %d\n", i+1, day_count); 
	}
	day_count += day;

	printf("이 날짜는 1년 중 %d번째 날에 해당됩니다.\n", day_count);

	return 0;
}
