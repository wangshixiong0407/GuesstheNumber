//猜数字高级版
//计算机自动生成1-100的数字
//玩家不断输入数字，根据猜的结果执行猜大了或猜小了，直到猜对，游戏结束
//可以一直玩
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

void game()
{
	//	int i = rand(1,100); 伪随机数
	//	srand(seed);  //伪随机数种子
	int i = rand() % 100+1;
	int guess;
	int count = 6;//玩家猜测次数
	DWORD start = GetTickCount();//记录开始时间（毫秒）
while(count)
{
	printf("你还有%d次机会\n请输入猜的数字:",count);
	scanf("%d",&guess); //逗号很关键
	if(guess > i)
	{
		printf("猜大了\n");
	}
	else if(guess < i)
	{
		printf("猜小了\n");
	}
	else
	{
		printf("猜对了，游戏胜利\n");
		break;
	}
	count --;
}
	if(count == 0)
	{
		printf("很遗憾，机会用完了，正确答案是：%d",i);
	}
	DWORD end = GetTickCount();
	printf("\n你猜数字一共花了 %.1f 秒\n", (end - start) / 1000.0);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//用时间做随机数种子，相当于真的随机数 
do
{
	printf("----------------\n");
	printf("-----1.PLAY-----\n");
	printf("-----0.EXIT-----\n");
	printf("----------------\n");
	printf("请选择:");
	scanf("%d",&input);
	switch(input)
	{
	case 1 : printf("开始猜数字游戏\n"); game(); break;
	case 0 : printf("退出游戏 \n") ; break ;
	default: printf("选择错误 \n") ; break ;
	}
}
	while(input);

	return 0;
}

