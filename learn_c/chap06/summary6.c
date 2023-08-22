/*
	���ά����a�����й���Ԫ�ص��ܺ�
*/

#include <stdio.h>

/* ��ʾ��ά��������й���Ԫ�ص�ֵ */
void put_ary2D(const int m[][3], int n)
{
	int i, j;

	for (i = 0; i < n; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", m[i][j]);
		putchar('\n');
	}
}

/* ���ض�ά����a�����й���Ԫ�ص��ܺ� */
int sum_ary2D(const int a[][3], int n)
{
	int i, j;
	int sum = 0;

	for (i = 0; i < n; i++)
		for (j = 0; j < 3; j++)
			sum += a[i][j];
	return sum;
}

int main(void)
{
	int m1[4][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12} };
	int m2[2][3] = { {1, 3, 5}, {7, 9, 11} };

	puts("��ά����m1");
	put_ary2D(m1, 4);
	printf("�ܺ���%d��\n", sum_ary2D(m1, 4));

	puts("��ά����m2");
	put_ary2D(m2, 2);
	printf("�ܺ���%d��\n", sum_ary2D(m2, 2));

	return 0;
}