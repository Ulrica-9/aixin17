
#include <stdio.h>
#include <time.h>
#include <stdlib.h>	
#include <windows.h>
void menu2(void)
{
	printf("\t\t\t\t\t*******************************************\n");
	printf("\t\t\t\t\t**********>>>>>>欢迎再次使用<<<<<<*********\n");
	printf("\t\t\t\t\t*******************************************\n");
	printf("\t\t\t\t\t******有问题？联系制作人QQ:1074885784******\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
}
void start(int a)
{
	char name[30][10] = { "陈骁睿","程星","邓芝松","韩嘉宇","黄奎志","姜涛","雷洁海","刘俊材","罗添禹","穆昌健","钱珠厚","田鸿翔","王骏杰","王中正","徐才志","杨枭","曾杰","张文成","周福川","周思湘","陈陆","高琴","胡佳怡","李佳芝","刘成亿","马小燕","佘进","王应鸿","杨蝶","周萌" };
	int num,i;
	int j;
	
	for (i = 1; i <= a; i++)
	{
		num = rand() % 30 + 1;//抽取1-30的学号
	
        printf("\t\t\t\t\t第%d个------>学号尾号为:%-2d的----->%-2s同学\n", i, num,name[num-1]);

	}
	menu2();
}
void menu(void)
{
	printf("\t\t\t\t\t*******************************************\n");
	printf("\t\t\t\t\t**********>>>>>>抽人小程序<<<<<<***********\n");
	printf("\t\t\t\t\t*******************************************\n");
	printf("\t\t\t\t\t*              1-开始  0-结束             *\n");
}
void text(void)
{
	int num = 0;
	int a = 0;
	do {
		    menu();
			printf("\t\t\t\t\t请确定是否开始执行:");
			scanf_s("%d", &num);
			switch (num)
			{
			case 1:
				while (1)
				{
					printf("\t\t\t\t\t请输入需要抽取的人数:");
					scanf_s("%d", &a);
					if (a <= 5)
					{
						break;
					}
					else
					{
						printf("\t\t\t\t\t值超过预期，请重新输入小于或等于5的数字,防止重复.\n");
					}
				}
				
				printf("\t\t\t\t\t正在抽取请稍等");
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".\n");
				Sleep(500);
				start(a);
				break;
			case 0:
				printf("\t\t\t\t\t即将退出程序，请稍等.");
				printf("-");
				Sleep(1000);
				printf("-");
				Sleep(1000);
				printf("-");
				Sleep(1000);
				system("cls");
				break;
			default:
				printf("\t\t\t\t\t输入值无法检验，请检查是否正确。\n");
				printf("\t\t\t\t\t正在跳转");
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500);
				system("cls");
			}		
	} while (num);
}
int main()
{
	int num;
	//建立时间戳
	srand((unsigned int)time(NULL));
	text();
	return 0;
}