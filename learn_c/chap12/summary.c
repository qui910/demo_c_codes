/*
	��ʾ���ڵĽṹ��ͱ�ʾ�˵Ľṹ��
*/

#include <stdio.h>

#define NAME_LEN	128		/* �������ַ��� */

/*=== ��ʾ���ڵĽṹ�� ===*/
struct Date {
	int y;		/* �� */
	int m;		/* �� */
	int d;		/* �� */
};

/*=== ��ʾ�˵Ľṹ�� ===*/
typedef struct {
	char name[NAME_LEN];	/* ���� */
	struct Date birthday;	/* ���� */
} Human;

/*--- ��ʾָ��h��ָ����˵����������� ---*/
void print_Human(const Human *h)
{
	printf("%s(%04d��%02d��%02d����)\n",
				h->name, h->birthday.y, h->birthday.m, h->birthday.d);
}

int main(void)
{
	int i;
	struct Date today;		/* ��������� */

	Human member[] = {
		{"�ź�����", {1904, 11, 18}},
		{"��������", {1963, 11, 18}},
		{"����׼һ", {1980, 11, 18}},
	};

	printf("�������������ڡ�\n");
	printf("�꣺");   scanf("%d", &today.y);
	printf("�£�");   scanf("%d", &today.m);
	printf("�գ�");   scanf("%d", &today.d);

	printf("������%d��%d��%d�ա�\n", today.y, today.m, today.d);

	printf("--- ��Աһ���� ---\n");
	for (i = 0; i < sizeof(member) / sizeof(member[0]); i++)
		print_Human(&member[i]);

	return 0;
}
