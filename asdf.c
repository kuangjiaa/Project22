#include<stdio.h>
int main()
{
	int n;
	int jieshu;
	while (1)
	{
		char c[100];
		int d;
		char e[100];
		printf("������ָ�1��2��3��4��5\n");
		scanf_s("%d", &n);
		switch (n)
		{
		case 1:   chongxinkaishi:    printf("�������û���:");  scanf_s("%s", &c,100);
		case 2:printf("����������(ֻ�������֣�:");     scanf_s("%d", &d);
		case 3:printf("���ٴ�ȷ������:"); scanf_s("%s", &e, 100); 
		case 4: printf("�û������������,");
			printf("��Ī����6\n"); break;
		case 5:goto chongxinkaishi;
		case 6:goto jieshu;
		}
		

	}
jieshu: printf("��ɵ��");
  return  0;

}