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
		printf("�� �� <�Ǽ�> �� �Է��ϼ��� (��, �����Ϸ��� 0�� �Է��ϼ���) ");
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


	printf("�μ��� ���� %.2f �Դϴ�\n", add(n1, n2));
	printf("�μ��� ���� %.2f �Դϴ�\n", minus(n1, n2));
	printf("�� ���� ���� %.2f �Դϴ�\n", ff(n1, n2));
	printf("�� ���� �������� %.2f �Դϴ�\n", ss(n1, n2));
	printf("�� ���� ����� %.2f �Դϴ�\n", average(n1, n2));


}