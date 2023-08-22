/*
	��ȡѧ���ķ���������������
*/

#include <stdio.h>

#define NUMBER	5		/* ���� */

/*--- ����px��py��ָ�����ֵ ---*/
void swap(int *px, int *py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

/*--- ð������ ---*/
void bsort(int a[], int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++)
		for (j = n - 1; j > i; j--)
			if (a[j - 1] > a[j])
				swap(&a[j], &a[j - 1]);
}

int main(void)
{
	int i;
	int point[NUMBER];		/* NUMBER��ѧ���ķ��� */

	printf("������%d�˵ķ�����\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("%2d�ţ�", i + 1);
		scanf("%d", &point[i]);
	}

	bsort(point, NUMBER);		/* ���� */

	puts("���������С�");
	for (i = 0; i < NUMBER; i++)
		printf("%2d�ţ�%d\n", i + 1, point[i]);

	return 0;
}
