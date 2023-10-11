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
		printf("请输入指令：1，2，3，4，5\n");
		scanf_s("%d", &n);
		switch (n)
		{
		case 1:   chongxinkaishi:    printf("请输入用户名:");  scanf_s("%s", &c,100);
		case 2:printf("请输入密码(只能填数字）:");     scanf_s("%d", &d);
		case 3:printf("请再次确定密码:"); scanf_s("%s", &e, 100); 
		case 4: printf("用户名或密码错误,");
			printf("切莫输入6\n"); break;
		case 5:goto chongxinkaishi;
		case 6:goto jieshu;
		}
		

	}
jieshu: printf("大傻逼");
  return  0;

}