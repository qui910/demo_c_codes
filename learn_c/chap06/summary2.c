/*
	��ס��һ�ε�ֵ
*/

#include <stdio.h>

/* ����no������һ�ε�ֵ */
int val(int no)
{
	static int v;
	int temp = v;

	v = no;
	return temp;
}

int main(void)
{
	int retry;

	do {
		int n;

		printf("Ҫ���µ�ֵ��");
		scanf("%d", &n);
		printf("�����ˡ���һ�ε�ֵ��%d��\n", val(n));

		printf("�Ƿ��������Yes��0/NO��9����");
		scanf("%d", &retry);
	} while (retry == 0);

	return 0;
}
