#include<stdio.h>

int main () {
	float height = 185;
	float weight = 100;
	float bmi = 0;
	height = height * 0.01; //cm -> m 변환
	bmi = weight / (height * height);
	printf("당신의 BMI : %.2f\n", bmi);
	return 0;
}