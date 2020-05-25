/*
	<2차원 숫자 출력하기>
	행의 크기(rows)와 열의 크기(columns)를 입력받은 후에, 
	이 크기만큼의 바둑판 모양의 2차원 공간의 각 칸마다 행 번호(1, 2, ..., width)와
	열 번호(1, 2, ..., height)를 곱한 갑을 출력하라.

	변수는 다음과 같이 사용하라.
	int rows, columns; // 행의 갯수, 열의 갯수
	int number; // 각 칸에 출력하는 값
	int i, j; // 반복문 사용을 위한 변수
*/

#include <stdio.h>

int main(){
	int rows, columns; // 행의 갯수, 열의 갯수
	int number; // 각 칸에 출력하는 값
	int i, j; // 반복문 사용을 위한 변수

	printf("rows? ");
	scanf("%d", &rows);
	printf("columns? ");
	scanf("%d", &columns);

	for(i = 1; i <= rows; i++){
		for(j = 1; j <= columns; j++)
			printf("%d	", i*j);
		printf("\n");
	}

	return 0;
}
