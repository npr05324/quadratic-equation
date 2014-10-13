#include <stdio.h>
#include <math.h>
main(){
	double a, b, c;

	a = 0;
	b = 0;
	c = 0;

	double x = 0;
	double x2 = 0;
	double sqrt(double x);

	int dis = 0;



	printf("a의 값:");
	scanf_s("%lf", &a);

	printf("b의 값:");
	scanf_s("%lf", &b);

	printf("c의 값:");
	scanf_s("%lf", &c);

	dis = discriminant(a, b, c);



	x = ((b*-1) + sqrt((b*b) - (4 * a*c))) / (2 * a); //근의 공식
	x2 = ((b*-1) - sqrt((b*b) - (4 * a*c))) / (2 * a); //근의 공식 

	switch (dis){
	case 1:
		printf("α= %lf (중근)", x);
		break;
	case 2:
		printf("α= %lf β= %lf", x, x2);
		break;
	case 3:
		printf("실수인 해가 없다. (허근은 배째)");
		break;
	default:
		break;
	}





}


discriminant(double a, double b, double c){
	int dis = 0;

	double x;
	double d;

	d = a*c;
	x = (b*b - (4 * d));

	if (x == 0){
		dis = 1; // 중근
	}
	else if (x>0){
		dis = 2; // 서로다른 실근
	}
	else if (x<0){
		dis = 3; // 허근
	}

	return dis;


}