/*
	�������
*/

#include <stdio.h>

/* ������� */
void put_alert(void)
{
	putchar('\a');
}

int main(void)
{
	int i;
	int no;

	printf("�������Ĵ�����");
	scanf("%d", &no);

	for (i = 0; i < no; i++)
		put_alert();

	return 0;
}
