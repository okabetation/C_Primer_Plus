#include <stdio.h>
//����Ƕ��ѭ����һ��ѭ��
int main(void)
{
	char str[] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U' };
	int i, j;
	int k = 0;

	for (i = 0; i < 6; i++)   //����ѭ���˴� 
	{
		printf("i=%d ", i);
		for (j = 0; j <= i; j++)   //����ÿ��������� 
		{
			printf("%c", str[k]);
			printf(" j=%d ", j);
			k++;
		}
	printf("\n");
	}
	getchar();
	return 0;
}

/*
A
BC
DEF
GHIJ
KLMNO
PQRSTU
*/

/*
int first, end;
	char y='A' ;
	for (end=0;end<6;end++)
	{
		for (first = 0; first <= end; first++) //first�״ε�����Ϊ1��endҲΪ1�������б�ʽ1<=1
												//Ӧ��ֻ����һ��y��ֵB��������̨����������ֵ
												//(�ѽ��)firstÿ�ο�ʼѭ���������¸�ֵΪ0
			{
				printf("%c", y);
				y++;
			}
		printf("\n");

	}
	getchar();
	return 0;
*/