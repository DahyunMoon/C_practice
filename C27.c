/*
	<두번쨰로 큰 수의 순서찾기>
	10개의 숫자를 입력받아 배열에 저장한 후에 
	이 중에서 두 번쨰로 큰 수가 몇 번째 숫자인지 찾아내어 출력하라.

	변수는 다음과 같이 사용하라.
	int num[10]; // 10개의 숫자
	int first; // 첫번째로 큰 수
	int second; // 두번째로 큰 수
	int second_max_index; // 두번째로 큰 수의 인덱스
	int i; // 반복문을 위한 변수
*/

#include <stdio.h>

int main(){
	int num[10]; // 10개의 숫자
	int first; // 첫번째로 큰 수
	int second; // 두번째로 큰 수
	int second_max_index; // 두번째로 큰 수의 인덱스
	int i; // 반복문을 위한 변수

	for(i = 0; i < 10; i++){
		printf("%d번째 수를 입력하시오: ", i+1);
		scanf("%d", &num[i]);
	}

	first = num[0];
	for(i = 1; i < 10; i++)
		if(first < num[i])
			first = num[i];
	
	if(num[0] == first){
		second = num[1];
		second_max_index = 2;
	}
	else{
		second = num[0];
		second_max_index = 1;
	}

	for(i = 1; i < 10; i++)
		if(second < num[i] && num[i] < first){
			second = num[i];
			second_max_index = i + 1;
		}

	printf("두번째로 큰 수는 %d번째 수 %d입니다.\n", second_max_index, second);

	return 0;
}

