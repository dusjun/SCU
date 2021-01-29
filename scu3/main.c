#include <stdio.h>
int main()
{
	char author[100]; // 一个名字叫 author的数组，10个元素，从0-9，想像成有10个格子的抽屉，每个抽屉里放一个 char （基本数据类型）
	int i;
	gets(author);//从键盘接受一个字符串，例如abc

	printf("逐个输出字符: ");
	for(i=0 ; i< 10; i++) //一个for循环，i的初始值赋0，每执行一次i++，循环头的时候判断i的值，小于10才执行
	{
		printf("%c ,", author[i]); //输出字符，就是数组的第1,2,3...个值：author[0]，author[1]，author[2].... 直到 author[9]
	};
	printf("\n");

	printf("逐个输出ASCII: ");

	for(i=0 ; i< 10; i++)
	{
		printf("%x ,", author[i]);
	};
	printf("\n");

	return 0;
}
