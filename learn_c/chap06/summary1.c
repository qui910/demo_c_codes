/*
	����������ֵ��ƽ��ֵ
*/

#include <stdio.h>

/* ��ʵ������ʽ����a��b��ƽ��ֵ */
double ave2(int a, int b)
{
	return (double)(a + b) / 2;
}

int main(void)
{
	int n1, n2;

	puts("����������������");
	printf("����1 :");   scanf("%d", &n1);
	printf("����2 :");   scanf("%d", &n2);

	printf("ƽ��ֵ��%.1f��\n", ave2(n1, n2));

	return 0;
}
