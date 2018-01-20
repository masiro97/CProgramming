#include <stdio.h>

float add(float n1, float n2);
float minus(float n1, float n2);
float ff(float n1, float n2);
float ss(float n1, float n2);
float average(int n1, float n2);
void four(float n1, float n2);


int main(){

	float n1, n2;
	

	while(1){
		printf("두 수 <실수> 를 입력하세요 (단, 종료하려면 0을 입력하세요) ");
		scanf_s("%f %f", &n1, &n2);

		if (n1 == 0 || n2 == 0){
			break;


		}
		four(n1, n2);
	}
}

float add(float n1, float n2){
	return n1 + n2;
}

float minus(float n1, float n2){

	return n1 - n2;
}

float ff(float n1, float n2){
	return n1*n2;

}

float ss(float n1, float n2){

	return n1 / n2;
}

float average(float n1, float n2){
	return (n1 + n2) / 2;
}

void four(float n1, float n2){


	printf("두수의 합은 %.2f 입니다\n", add(n1, n2));
	printf("두수의 차는 %.2f 입니다\n", minus(n1, n2));
	printf("두 수의 곱은 %.2f 입니다\n", ff(n1, n2));
	printf("두 수의 나눗셈은 %.2f 입니다\n", ss(n1, n2));
	printf("두 수의 평균은 %.2f 입니다\n", average(n1, n2));


}