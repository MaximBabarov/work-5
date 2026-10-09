#define _USE_MATH_DEFINES

#define _CRT_SECURE_NO_DEPRECATE

#define		M_PI           3.14159265358979323846

#define		k				-4

#include <locale.h>

#include <math.h>

#include <stdio.h>

work1();
work2();

void main()

{
	setlocale(LC_ALL, "RUS"); // для переключения русской кодировки
	homework();
}

int work1()
{
	double gr;
	printf("введите количество градусов - ");
	scanf("%lf", &gr);
	printf("\n");
	double rad = (gr * M_PI)/180;
	printf("угол составляет %.6f радиан\n", sin(rad));
	return 0;
}

int work2()
{
	
	float x;
	printf("введите x(через запятую) - ");
	scanf("%f", &x);
	printf("\n");
	float a = log(fabs(-1 * k * x));
	float b = exp(2*x) + a * x;
	float y = x * pow(a, 3.0) + pow(b, 2.0);
	printf("при x = %.3f значение y = %.3f\n", x, y);
	int A = (int)a;
	int B = (int)b;
	int C = (int)y;
	int res = (((A % 2 == 0 && B % 2 != 0) || (A % 2 != 0 && B % 2 == 0)) && ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0)));
	printf("Соответствие условиям, что либо A либо B - чётные, и что все три числа кратным трём(1 - успешно, 0 - неуспешно) - %d", res);
	return 0;
}

int homework()
{
	double x, y, z;
	printf("введите x - ");
	scanf("%lf", &x);
	printf("\n");
	printf("введите y - ");
	scanf("%lf", &y);
	printf("\n");
	printf("введите z - ");
	scanf("%lf", &z);
	printf("\n");
	double u = (pow(8 + pow(fabs(x - y), 2.0) + 1, 1.0 / 3.0) / (pow(x, 2.0) + pow(y, 2.0) + 2)) - exp(fabs(x - y)) * pow(pow(tan(z), 2.0) + 1, x);
	printf("результат выполнения вычислений - %6.4lf", u);
	return 0;
}