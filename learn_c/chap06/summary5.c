/*
	��������a��Ԫ��
*/

#include <stdio.h>

#define  NUMBER		5		/* Ԫ�ظ��� */

/* ������b��ͷ��n��Ԫ�ظ��Ƹ�����a */
void cpy_ary(int a[], const int b[], int n)
{
	int i;

	for (i = 0; i < n; i++)
		a[i] = b[i];
}

int main(void)
{
	int i;
	int v1[NUMBER];			/* �����Ƶ����� */
	int v2[NUMBER];			/* ����Ŀ������ */

	for (i = 0; i < NUMBER; i++) {
		printf("v1[%d]��", i);
		scanf("%d", &v1[i]);
	}

	cpy_ary(v2, v1, NUMBER);	/* ��v1������Ԫ�ظ��Ƹ�v2 */

	puts("�ѽ�v1������Ԫ�ظ��Ƹ�v2��\n");
	for (i = 0; i < NUMBER; i++) {
		printf("v2[%d]��%d\n", i, v2[i]);
	}

	return 0;
}
