//输入密码，然后确认问题
#include<stdio.h>
int main()
{
	char ch = 0;
	char password[] = { 0 };
	printf("请输入密码:\n");
	scanf("%s", &password);
	printf("请确认（Y/N）>\n");

	//getchar();//如果没有这个getchar，则相当于if里面的getchar输入\n(enter)=10。故直接跳转到else
	//如果输入124567 abcd （一个getchar只是带走一个空格，这时候需要换一种思路，用while循环）
	//特殊点：输入密码后会加上enter键（即‘\n’）,故用while，条件为while(getchar（）！=‘\n’)

	while ((ch = getchar()) != '\n')
	{
		;//当输入不为enter时，空操作。当输入enter时，为假，跳出循环
	}

	if (getchar() == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("取消确认\n");
	}
	return 0;
}