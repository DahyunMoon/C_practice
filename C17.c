/*
	<입력받은 숫자들 중 max와 min 구하기>
	반복해서 0부터 100 사이의 숫자를 입력받아서 
	지금까지 입력된 숫자들 중 가장 큰 수와 가장 작은 수가 무엇인지 출력하라.
	0부터 100사이의 숫자가 아닌 수가 입력되면 반복문이 중단되도록 하라.

	변수는 다음과 같이 사용하라.
	int number; // 입력받은 수
	int max_num, min_num; // 가장 큰 숫자, 가장 작은 숫자
*/

#include <stdio.h>

int main(){
	int number; // 입력받은 수 
	int max_num, min_num; // 가장 큰 숫자, 가장 작은 숫자

	printf("0부터 100사이의 숫자를 입력: ");
	scanf("%d", &number);
	if(number < 0 || number > 100)
		printf("Nothing to compare!\n");
	else{
		max_num = number;
		min_num = number;
		while(1){
			printf("0부터 100사이의 숫자를 입력 ");
			scanf("%d", &number);

			if(number < 0 || number > 100)
				break;

			if(number > max_num) max_num = number;
			if(number < min_num) min_num = number;
		}
		printf("입력된 숫자들 중 가장 큰수는 %d이고, 가장 작은 수는 %d입니다.\n", max_num, min_num);
	}

	return 0;
}


