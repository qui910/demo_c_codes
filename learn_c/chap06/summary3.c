/*
	��ʵ������ʽ��������a������Ԫ�ص�ƽ��ֵ
*/

#include <stdio.h>

#define  NUMBER		5		/* Ԫ�ظ��� */

/* ��ʵ������ʽ��������a������Ԫ�ص�ƽ��ֵ */
double ave_ary(const int a[], int n)
{
	int i;
	double sum = 0;

	for (i = 0; i < n; i++)
		sum += a[i];
	return sum / n;
}

int main(void)
{
	int i;
	int v[NUMBER];

	for (i = 0; i < NUMBER; i++) {
		printf("v[%d]��", i);
		scanf("%d", &v[i]);
	}

	printf("����Ԫ�ص�ƽ��ֵ��%.1f��\n", ave_ary(v, NUMBER));

	return 0;
}
