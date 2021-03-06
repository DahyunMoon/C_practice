/*
	<5층 아파트의 거주자 수 구하기>
	한 층에 3집(1호, 2호, 3호)으로 되어있는 5층짜리 아파트가 있다.
	2차원 배열을 사용하여 101호부터 503호까지 각 집에 살고 있는 사람의 숫자를 입력받아
	보관하라.
	그리고 이 아파트에 사는 거주자는 모두 몇명인지 출력하라.

	변수는 다음과 같이 사용하라.
	int number[5][3]; // 각 집의 거주자 수
	int total; // 아파트의 총 거주자 수
	int ho; // 아파트 호를 나타내는 변수
	int i, j;  // 반복문 사용을 위한 변수 
*/
#include <stdio.h>

int main(){
	int number[5][3]; // 각 집의 거주자 수
	int total = 0; // 아파트의 총 거주자 수
	int i, j;  // 반복문 사용을 위한 변수

	for(i = 0; i < 5; i++){
		for(j = 0; j < 3; j++){
			printf("%d0%d호에 살고있는 사람의 숫자를 입력하시오. ", i+1, j+1);
			scanf("%d", &number[i][j]);
			total += number[i][j];
		}
	}

	printf("이 아파트에 사는 거주자는 모두 %d명 입니다.\n", total);

	return 0;
}
